#include "std_lib_facilities.h"

vector<int> gv = {1,2,4,8,16,32,64,128,256,512};     //1.rész


void f(vector<int> argument)      //2.rész
{
     //3.rész
int size=argument.size();
vector<int> lv(size);    //a.rész

for(int i=0;i<size;i++) lv[i]=gv[i];     //b.rész
cout<<"lv: ";
for(int i=0;i<size;i++) cout<<lv[i]<<" ";  //c.rész
cout<<endl;

vector<int> lv2=argument;  //d.rész
cout<<"lv2: ";
for(int i=0;i<size;i++) cout<<lv2[i]<<" ";  //e.rész
cout<<endl;


}

int main()  //4.rész
{

f(gv);    //a.rész

//b.rész
vector<int> vv = {1,1*2,1*2*3,1*2*3*4,1*2*3*4*5,1*2*3*4*5*6,1*2*3*4*5*6*7,1*2*3*4*5*6*7*8,1*2*3*4*5*6*7*8*9,1*2*3*4*5*6*7*8*9*10};
	 
f(vv);   //c.rész

	return 0;
}
