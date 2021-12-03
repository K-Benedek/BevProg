#include "std_lib_facilities.h"


int ga[10] = {1,2,4,8,16,32,64,128,256,512};   //1.rész    

void f(int* array,int argument)   //2.rész 
{
     //3.rész
int la[10];  //a. rész
for(int i=0;i<10;i++) la[i]=ga[i];  //b. rész 
cout<<"la: ";
for(int i=0;i<10;i++) cout<<la[i]<<" ";     //c. rész
cout<<endl;

int* p = new int[argument] ;  //d. rész
for(int i=0;i<argument;i++) p[i]=array[i];   //e. rész 	
cout<<"p: ";
for(int i=0;i<argument;i++) cout<<p[i]<<" ";   //f. rész
cout<<endl;

delete[] p;   //g. rész

}

int main()      //4.rész
{

f(ga,10);      //a.rész
	
 //b.rész
int aa[10] = {1,1*2,1*2*3,1*2*3*4,1*2*3*4*5,1*2*3*4*5*6,1*2*3*4*5*6*7,1*2*3*4*5*6*7*8,1*2*3*4*5*6*7*8*9,1*2*3*4*5*6*7*8*9*10};

f(aa,10);   //c.rész

	return 0;
}
