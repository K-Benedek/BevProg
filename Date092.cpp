#include "std_lib_facilities.h"
class Year {
	static constexpr int min= 1800;
	static constexpr int max=2077;
public:
	class Invalid{};
	Year(int x): y(x){if (x<min||x>max) throw Invalid{};}
	int year() {return y;}
	void increment () {y++; if (y>max) throw Invalid{};}
private: 
	int y;
};
Year operator++ (Year& y)
{
	y.increment();
	return y;
}
ostream& operator<<(ostream& os, Year y)
{
	return os<<y.year();
}

const vector<string>months={
	"Jan",
	"Feb",
	"Mar",
	"Apr",
	"May",
	"Jun",
	"July",
	"Aug",
	"Sept",
	"Oct",
	"Nov",
	"Dec"
};

enum class Month
{
	jan ,feb, mar, apr,may, jun, july, aug, sept, oct, nov, dec
};
Month operator++ (Month& m)
{
	m=(m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
ostream& operator<<(ostream& os, Month m)
{
	return os<<months[int(m)];
}
class Date
{
	Year year;
	Month month;
	int day;
public:
	class Invalid{};
	Date():year{Year{2001}}, month(Month::jan), day(1){}
	Date (Year y, Month m, int d):year(y),month(m),day(d){if(!is_valid()) throw Invalid{};}
	bool is_valid();
	void add_day(int n);

	Year get_year() const {return year;}
	Month get_month() const {return month;}
	int get_day() const {return day;}
	void print();
};

bool Date::is_valid()
{
	if(day<1||day>31) return false;
	return true;
}
void Date::add_day(int n)
{
	day+=n;
	if (day>31)
	{
		++month;
		day=-31;
		if (month==Month::jan)
			{
				++year;
			}

	}
}
void Date::print()
{
	cout<<"Date: "<<year<<'.'<<month<<' '<<day<<".\n";
}

int main()
try{
	Date today{Year{1985},Month::jun,25};
	today.print();

	Date tomorow =today;
	tomorow.add_day(1);
	tomorow.print();
	Date yesterday{today};
	yesterday.print();
	return 1;

}catch(Date::Invalid)
{
	cerr<<"Invalid Date"<<endl;
	return 1;
}catch(Year::Invalid)
{
	cerr<<"Invalid Year"<<endl;
}
catch(exception& e)
{
	cerr<<e.what()<<endl;
}
