#include "std_lib_facilities.h"


void print_array(ostream& os, int* a, int n)  
{
	for(int i=0;i<n;i++) os << a[i] <<" ";
	os<<endl;
}



int main()
{

int* p1 = new int(7); //1.rész

cout << "content of p1= " << *p1 << endl;   //2.rész
cout << "p1= " << p1 << endl;


int* p2 = new int[7]{1,2,4,8,16,32,64};  ///3.rész 
cout << "content of p2= "; 
print_array(cout,p2,7);          //4. rész
cout << "p2= " << p2 << endl;
cout << "p2= " << &p2[1] << endl;
cout << "p2= " << &p2[2] << endl;



int* p3 = p2;   //5.rész

p2 = p1;            	 //6. rész
p2 = p3;   				//7. rész
cout<<"After:"<<endl;  //8.rész

cout << "content of p1= " << *p1 << endl;   
cout << "p1= " << p1 << endl; 
cout << "content of p2= "; 
print_array(cout,p2,7);          
cout << "p2= " << p2 << endl;
/*
cout << "content of p3= "; 
print_array(cout,p3,7);          
cout << "p3= " << p3 << endl;*/

delete p1;    //9.rész
//delete[] p2;  //sekély másolás miatt
delete[] p3;


p1 = new int[10]{1,2,4,8,16,32,64,128,256,512};  //10.rész
p2 = new int[10]; 								 //11.rész

for(int i=0;i<10;i++) //12.rész
{
	p2[i]=p1[i];
}
cout << "content of p2= "; 
print_array(cout,p2,10);

delete[] p1;
delete[] p2;


//13. rész
vector<int> v1 = {1,2,4,8,16,32,64,128,256,512};
vector<int> v2;
	v2 = v1;


	cout << "content of v2= "; 
	for (int i= 0;i<10;i++) cout << v2[i] << " ";
		cout<<endl;

	return 0;


		
}
