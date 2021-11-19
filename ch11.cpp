#include "std_lib_facilities.h"


int main()
{
	int birth_year=2003;
	cout<<birth_year<<"\t(decimal)\n"
	<<hex<<birth_year<<"\t(hexadecimal)\n"
	<<oct<<birth_year<<"\t(octal)\n";


	cout<<dec<<showbase<<26<<"\t(decimal)\n"
	<<hex<<26<<"\t(hexadecimal)\n"
	<<oct<<26<<"\t(octal)\n";

	int a,b,c,d;

	cin >> a >>oct >> b >>hex>> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

	cout<<noshowbase<<dec;

	cout<<defaultfloat<<123.456789<<"\t(defaultfloat)\n"
	<<fixed<<1234567.89<<"\t(fixed)\n"
	<<scientific<<1234567.89<<"\t(scientific)\n";

	cout<<"Last name\t"<<"First name\t"<<"Tel.num\t\t"<<setw(12)<<"E-mail address\t \n";
	cout<<"Sándor\t"<<setw(15)<<"Próba\t"<<setw(20)<<"06303458767\t"<<"proba@gmail.com\t \n";
	cout<<"Réka\t"<<setw(14)<<"teszt\t"<<setw(20)<<"06303453452\t"<<"teszt@gmail.com\t \n";
	cout<<"Pál\t"<<setw(18)<<"Véletlen\t"<<setw(12)<<"06309868767\t"<<"életlen@gmail.com\t \n";
	cout<<"Elek\t"<<setw(15)<<"valami\t"<<setw(20)<<"06303873767\t"<<"valami@gmail.com\t \n";
	cout<<"Tamás\t"<<setw(14)<<"Senki\t"<<setw(21)<<"063034512367\t"<<"senki@gmail.com\t \n";

	return 0;
}
