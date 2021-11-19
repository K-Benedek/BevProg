#include "std_lib_facilities.h"

struct Point
{
	int y;
	int x;

};
 void out(vector<Point> x)
 {
 	for (const auto& c:x)
 	{
 		cout <<c.x<<','<<c.y<<'\n';
 	}
 }
bool valid(vector<Point> x, vector<Point> y)
{
	for (int i=0;i<x.size();i++)
	{
		if (x[i].x != y[i].x || x[i].y != y[i].y || x.size() != y.size()) 
		{
			return false;
		}

	}	
	return true;
} 

int main()
try{
	vector<Point> original_points;
	int x,y;
	for (int i=0;cin>>x>>y;++i)
	{

		Point temp;
		temp.x=x;
		temp.y=y;
		original_points.push_back(temp);
		if (i==6) break;
	}
	out(original_points);
	cout<<"Give me an output file name: ";
	string outs;
	cin>>outs;
	ofstream ost{outs};
		for(const auto& c:original_points )
	{
		ost<<'('<<c.x<<','<<c.y<<')'<<endl;
	}
	ost.close();
	vector<Point> processed_points;
	ifstream in{outs};
	if(!in) error ("input stream problem");
	for (const auto& c:original_points)
	{
		processed_points.push_back(c);
	}
	out(processed_points);
	out(original_points);
	if (!valid(processed_points,original_points))
		cout<<"Something is wrong\n"<<endl;
	else cout<<"The vectors are matched!\n";
	return 0;
 }catch(exception& e)
 {
 	cerr<<e.what()<<endl;
 }
