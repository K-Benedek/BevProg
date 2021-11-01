#include "std_lib_facilities.h"
constexpr char number='8'; //replacment for the numbers
                

class Token{
public:
    char kind;        //kind of token
    double value;     // for numbers: a value 
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};


class Token_stream {
public:
    Token_stream();   // make a Token_stream that reads from cin
    Token get();      // get a Token (get() is defined elsewhere)
    void putback(Token t);    // put a Token back
private:
    bool full;        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

//the buffer is empty:
Token_stream::Token_stream()
    :full(false), buffer(0)    // no Token in buffer
{
}


void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}


Token Token_stream::get()
{
    if (full) {
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;

    switch (ch) {
    	case '=':    // "print"
    	case 'x':    // "quit"
    	case '(':
    	case ')':
    	case '+':
    	case '-':
    	case '*':
    	case '/':
    	case '%':
		return Token(ch);
    	case '.':
	case '0':
    	case '1':
    	case '2':
    	case '3':
    	case '4':
    	case '5':
    	case '6':
    	case '7':
    	case '8':
    	case '9':
    {
        cin.putback(ch);
        double val=0;
        cin >> val;
        return Token(number, val);
    }
    default:
        error("Bad token");
        return 0;
    }
}


Token_stream ts; 


double expression(); 

double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':    //'(' expression ')'
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')') error("')' expected");
            return d;
    }
    case number:        
        return t.value;  // return the number's value
    default:
        error("primary expected");
        return 0;
    }
}


double term()
{
    double left = primary();
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0) error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        case '%':
        {
            double d=primary();
            if (d==0) error ("%: cant be used with 0");
            left=fmod(left, d);
            t=ts.get();
        }
        default:
            ts.putback(t);
            return left;
        }
    }
}

double expression()
{
    double left = term();   
    Token t = ts.get();        

    while (true) {
        switch (t.kind) {
        case '+':
            left += term();
            t = ts.get();
            break;
        case '-':
            left -= term();
            t = ts.get();
            break;
        default:
            ts.putback(t);   
            return left;     
        }
    }
}


int main()
try
{
	cout<<"Welcome to simple calculator./n Please using +;-;/;(;)"<<endl;
    double val=0;
    while (cin) {
        Token t = ts.get();

        if (t.kind == 'x') break; // 'x' for quit
        if (t.kind == '=')        // '=' for "print now"
            cout << "=" << val << '\n';
        else
            ts.putback(t);
        val = expression();
    }
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
}
