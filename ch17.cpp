#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a) //4.rész
{
for(int i=0;i<10;i++) os << a[i] <<" ";
	os<<endl;
}

void print_array(ostream& os, int* a, int n)  //7.rész
{
	for(int i=0;i<n;i++) os << a[i] <<" ";
	os<<endl;
}

void print_vector(ostream& os,vector<int>& v,int n)
{
for(int i=0;i<n;i++) os << v[i] <<" ";
	os<<endl;
}



int main()
{

int* p = new int[10] {1,2,3,4,5,6,7,8,9,10}; // tömb[0-9]-ig   //1.rész 

cout<<"1.tömb: ";
	for(int i=0;i<10;i++) cout<<p[i]<<" ";
cout<<endl;
delete[] p;  //3.rész

int* p2 = new int[10] {100,101,102,103,104,105,106,107,108,109};  //5.rész
cout<<"2.tömb: ";
print_array10(cout,p2);
delete[] p2;

int* p3 = new int[11] {100,101,102,103,104,105,106,107,108,109,110};  //6.rész
cout<<"3.tömb: ";
print_array(cout,p3,11);
delete[] p3;
	
cout<<"4.tömb: ";
int* p4 = new int[20]; //{100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119}; 
for (int i = 0; i < 20; i++) {
     	p4[i]=i+100;
     }
print_array(cout,p4,20);
delete[] p4;


//10.rész, vektorosan:
cout<<"1. vektor: ";
vector<int> v1 = {100,101,102,103,104,105,106,107,108,109};  
print_vector(cout,v1,10);

cout<<"2. vektor: ";
vector<int> v2 = {100,101,102,103,104,105,106,107,108,109,110};  
print_vector(cout,v2,11);

cout<<"3. vektor: ";
vector<int> v3; // {100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119}; 
for(int i=0; i<20; i++){
		v3.push_back(100+i);
	}
print_vector(cout,v3,20);

	return 0;
		
}
