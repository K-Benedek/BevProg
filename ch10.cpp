#include "std_lib_facilities.h"

struct Point
{
	int y;
	int x;

};

int main()
{
	vector<Point> original_points;

	cout << "Please enter input file name: ";
	string iname;
	cin >> iname;
	ifstream ist {iname};          // ist is an input stream for the file named name
	if (!ist) error("can't open input file ",iname);

	int x,y;
	while(ist>>x>>y)
	{
		original_points.push_back(Point{x,y});
	}
	for(const auto& c:original_points )
	{
		cout<<'('<<c.x<<','<<c.y<<')'<<endl;
	}
	ist.close();
	cout<<"Please enter an output file: ";
	string oname;
	cin>>oname;
	ofstream ost{oname};

	for(const auto& c:original_points )
	{
		ost<<'('<<c.x<<','<<c.y<<')'<<endl;
	}
	

	cout << "Please enter input file name: ";
	string xname;
	cin >> xname;
	ifstream xist{xname};
	int z,m;
	vector<Point> produced_points;

	//if (!ist) error("can't open input file ",iname);
	
	while(xist>>z>>m) 
	{
		produced_points.push_back(Point{z,m});
	}
	for(const auto& c:produced_points )
	{
		cout<<'('<<c.x<<','<<c.y<<')'<<endl;
	}
	//for(const auto& c)

	return 0;
}
