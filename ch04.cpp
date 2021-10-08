#include "std_lib_facilities.h"

int main(){

	vector<double>numbers;

	double num;
	double min;
	double max;
	constexpr double m_to_cm=100;
	constexpr double in_to_cm=2.54;
	constexpr double ft_to_in=12;
	char unit;
	double sum;
	char exit;
	
	while(exit!='|'){
		cout<<"Please enter a length followed by a unit (cm=c/in=i/ft=f/m)"<<endl;
		cin>>num>>unit;
		if(unit!='c'&&unit!='i'&&unit!='f'&&unit!='m')
			error("Not valid unit or wrong representation of units.");
		switch (unit){
			case 'c':
				num=num/m_to_cm;
			break;
			case 'i':{
				num=num*in_to_cm;
				num=num/m_to_cm;
				}
			break;
			case 'f':{
				num=num*ft_to_in;
				num=num*in_to_cm;
				num=num/m_to_cm;
				}
			break;
		}
		sum+=num;
		numbers.push_back(num);
		
		if(numbers.size()==1){
			min=numbers[0];
			max=numbers[0];
			cout<<"You gave one number."<<endl;
			}
		if(num<min){
			min=num;
			cout<<num<<"m the smallest so far. "<<endl;
			}
		else if(num>max){
			max=num;
			cout<<num<<"m the largest so far. "<<endl;
			}
			else if(numbers.size()!=1)
				cout<<num<<"m not the largest and not the smallest."<<endl;
				
		cout<<"Type any character if you want to continue but if you want to exit type | ."<<endl;
		cin>>exit;
	}
	
	cout<<"The smallest length is: "<<min<<"m"<<endl;
	cout<<"The largest length is: "<<max<<"m"<<endl;
	cout<<"The sum of values is: "<<sum<<"m"<<endl;
	cout<<"The number of values is: "<<numbers.size()<<endl;
	cout<<"Here are all values (they are converted into meters): "<<endl;
	
	sort(numbers);
	
	for(int i=0;i<numbers.size();++i)
		cout<<numbers[i]<<"m"<<endl;
	
	
		

return 0;
}
