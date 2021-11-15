#include "my.h"
#include "my.cpp"
int foo;
void swap_v(double a, double b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swap_r(double& a, double& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
/*void swap_cr(const int& a, const int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}*/

namespace X{
	int var=0;
	void print(){cout<<var<<endl;}
}
namespace Y{
	int var=0;
	void print(){cout<<var<<endl;}
}
namespace Z{
	int var=0;
	void print(){cout<<var<<endl;}
}


int main()
{
	foo = 7;
	print_foo();
	print(99);
	
	/*int x = 7;
	int y =9;
	swap_v(x,y);                      // replace ? by v, r, or cr
	swap_v(7,9);
	const int cx = 7;
	const int cy = 9;
	swap_r(cx,cy);
	swap_v(7.7,9.9);
	double dx = 7.7;
	double dy = 9.9;
	swap_r(dx,dy);
	swap_v(7.7,9.9);*/
	
	X::var=7;	
 	X::print();
 	using namespace Y;
    var = 9;
    print();                       // print Y’s var
    { 
        using Z::var;
        using Z::print;
        var = 11;
        print();           // print Z’s var
          
    }
          print();                      // print Y’s var
          X::print();                // print X’s var




	return 0;
}
