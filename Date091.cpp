#include "std_lib_facilities.h"

struct Date
{
	int month;
	int year;
	int day;
};
void kiir(const Date& datum)
{
	cout<<datum.year<<endl;
	cout<<datum.month<<endl;
	cout<<datum.day<<endl;		
}
void veifacitaton(Date& dd,int y, int m,int d)
{
	if((y%4)==0)
	{
		if(m>13) error("Month can't be over 12");
		else
		{
			switch(m){
			case 1:
			case 3: 
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				if (d>31||d<1) error("Invalid day");
				dd.year=y;
				dd.month=m;
				dd.day=d;
				break; 
			}
			case 4:
			case 6:
			case 9:
			case 11:
			{
				if (d>30||d<1) error("Invalid day");
				dd.year=y;
				dd.month=m;
				dd.day=d;
				break; 
			}
			case 2:
			{
				if (d>29||d<1) error("Invalid day");
				dd.year=y;
				dd.month=m;
				dd.day=d;				
				break; 
			}
			default: error("Invalid month");
		}
		}

	}
	else
	{
		if(m>13) error("Month can't be over 12");
		else
		{
			switch(m){
			case 1:
			case 3: 
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				if (d>31||d<1) error("Invalid day");
				dd.year=y;
				dd.month=m;
				dd.day=d;				
				break; 
			}
			case 4:
			case 6:
			case 9:
			case 11:
			{
				if (d>30||d<1) error("Invalid day");
				dd.year=y;
				dd.month=m;
				dd.day=d;
				break; 
			}
			case 2:
			{
				if (d>28||d<1) error("Invalid day");
				dd.year=y;
				dd.month=m;
				dd.day=d;
				break; 
			}
			default: error("Invalid month");
		}
		}		
	}
}
void add_day(Date& dd,int n)
{
if((dd.year%4)==0)
	{
		if(dd.month>13) error("Month can't be over 12");
		else
		{
			switch(dd.month){
			case 1:
			case 3: 
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{

				if(dd.day==31&&dd.month==12)
				{
					dd.day=1;
					dd.month=1;
					dd.year++;
				}
				else if(dd.day==31)
				{
					dd.day=1;
					dd.month++;
				}
				else dd.day++;
				break; 
			}
			case 4:
			case 6:
			case 9:
			case 11:
			{
				if(dd.day==30)
				{
					dd.day=1;
					dd.month++;
					
				}
				else dd.day++;
			}
			case 2:
			{
				if(dd.day==29)
				{
					dd.day=1;
					dd.month++;
				}				
				break; 
			}
			default: error("Invalid month");
		}
		}

	}
	else
	{
		if(dd.month>13) error("Month can't be over 12");
		else
		{
			switch(dd.month){
			case 1:
			case 3: 
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				if(dd.day==31&&dd.month==12)
				{
					dd.day=1;
					dd.month=1;
					dd.year++;
				}
				else if(dd.day==31)
				{
					dd.day=1;
					dd.month++;
				}
				else
				{
					dd.day++;
				}
			}
			case 4:
			case 6:
			case 9:
			case 11:
			{
				if(dd.day==30)
				{
					dd.day=1;
					dd.month++;			
				}
				else dd.day++;
			}
			case 2:
			{
				if(dd.day==28)
				{
					dd.day=1;
					dd.month++;
				}
				else dd.day++;
			}
			default: error("Invalid month");
		}
		}		
	}
}
int main ()
{
	Date datum;
	veifacitaton(datum,2020,2,29);
	kiir(datum); 
	//add_day(datum,2);
	kiir(datum);
}
