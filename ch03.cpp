#include "std_lib_facilities.h"

int main(){

	string first_name;
	
		cout<<"Enter the name of the person you want to write to: "<<endl;
		cin>>first_name;
	
	string friend_name;
	
		cout<<"Name of another friend: "<<endl;
		cin>>friend_name;
	
	char friend_sex=0;
	
		cout<<"Enter an m if the friend is male and an f if the friend is female"<<endl;
		cin>>friend_sex;
	
	int age;
		cout<<"Enter the age of the recipient: "<<endl;
		cin>>age;
		if(age>=110||age<=0)
			simple_error("you're kidding!");
	
	
	//letter
	cout<<"Dear "<<first_name<<endl;
	cout<<"\t How are you? I miss you."<<endl;
	cout<<"Have you seen "<<friend_name<<" lately?"<<endl;
	if(friend_sex=='m')
		cout<<"If you see "<<friend_name<<" please ask him to call me."<<endl;
	else if(friend_sex=='f')
		cout<<"If you see "<<friend_name<<" please ask her to call me."<<endl;
		else
			simple_error("m/f??");
	cout<<"I hear you just had a birthday and you are "<<age<<" years old."<<endl;
	if(age<12)
		cout<<"Next year you will be "<<age+1<<"."<<endl;
	if(age==17)
		cout<<"Next year you will be able to vote."<<endl;
	if(age>70)
		cout<<"I hope you are enjoying retirement."<<endl;
	cout<<"Yours sincerely,\n\n\nBenedek"<<endl;
	//end letter

return 0;
}
