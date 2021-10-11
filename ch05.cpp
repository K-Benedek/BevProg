#include "std_lib_facilities.h"
int main()
try {
	//#1
		//Cout << " Success!\n " ;
		cout << "1. Success!\n " ;
	//#2
		//cout << " Success!\n;
		cout << "2. Success!\n ";
	//#3
		//cout << " Success " << !\n "
		cout << "3. Success" << "!\n ";
	//#4
		//cout << success << '\n';
		cout << "4. Success!" << "\n ";
	//#5
		/*string res = 7;
		vector<int> v(10);
		v[5] = res;
		cout << " Success!\n " ;*/
		int res = 7;
		vector<int> v5(10);
		v5[5] = res;
		cout << "5. Success!\n " ;
	//#6
		/*vector<int> v(10);
		v(5) = 7;
		if (v(5)!=7)
		cout << " Success!\n " ;*/
		vector<int> v6(10);
		v6[5] = 7;
		if (v6[5]==7)
		cout << "6. Success!\n " ;
	//#7
		/*if (cond)
		cout << " Success!\n " ;
		else cout << " Fail!\n " ;*/
		if (true)
		cout << "7. Success!\n " ;
		else cout << " Fail!\n " ;
	//#8
		/*bool c = false;
		if (c)
		cout << " Success!\n " ;
		else cout << " Fail!\n " ;*/
		bool c8 = false;
		if (!c8)
		cout << "8. Success!\n " ;
		else cout << " Fail!\n " ;
	//#9
		/*string s = " ape " ;
		boo c = " fool " <s;
		if (c)
		cout << " Success!\n " ;*/
		string s9 = " ape " ;
		bool c9 = " fool " <s9;
		if (c9==0)
		cout << "9. Success!\n " ;
	//#10
		/*string s = " ape " ;
		if (s== " fool " )
		cout << " Success!\n " ;*/
		string s10 = " ape " ;
		if (s10!= " fool " )
		cout << "10. Success!\n " ;
	//#11
		/*string s = " ape " ;
		if (s== " fool " )
		cout < " Success!\n " ;*/
		string s11 = " ape " ;
		if (s11!= " fool " )
		cout << "11. Success!\n " ;
	//#12
		/*string s = " ape " ;
		if (s+ " fool " )
		cout < " Success!\n " ;*/
		string s12 = " ape " ;
		if ((s12+"fool")==" ape fool")
		cout << "12. Success!\n " ;
	//#13
		/*vector<char> v(5);
		for (int i=0; 0<v.size(); ++i) ;
		cout << " Success!\n " ;*/
		vector<char> v13(5);
		for (int i=0; i<v13.size(); ++i)
		cout << "13. Success!\n " ;
	//#14
		/*vector<char> v(5);
		for (int i=0; i<=v.size(); ++i) ;
		cout << " Success!\n " ;*/
		vector<char> v14(5);
		for (int i=0; i<=v14.size(); ++i)
		cout << "14. Success!\n " ;
	//#15
		/*string s = " Success!\n " ;
		for (int i=0; i<6; ++i)
		cout << s[i];*/
		string s15 = "15. Success!\n " ;
		for (int i=0; i<6; ++i)
		cout << s15;
	//#16
		/*if (true)
		then cout << " Success!\n " ;
		else cout << " Fail!\n " ;*/
		if (true)
		cout << "16. Success!\n " ;
		else cout << " Fail!\n " ;
	//#17
		/*int x = 2000;
		char c = x;
		if (c==2000)
		cout << " Success!\n " ;*/
		int x17 = 2000;
		char c17 = 'x';
		if (x17==2000)
		cout << "17. Success!\n " ;
	//#18
		/*string s = " Success!\n " ;
		for (int i=0; i<10; ++i)
		cout << s[i];*/
		string s18 = "18. Success!\n " ;
		for (int i=0; i<10; ++i)
		cout << s18;
	//#19
		/*vector v(5);
		for (int i=0; i<=v.size(); ++i) ;
		cout << " Success!\n " ;*/
		vector<int> v19(5);
		for (int i=0; i<=v19.size(); ++i) ;
		cout << "19. Success!\n " ;
	//#20
		/*int i=0;
		int j = 9;
		while (i<10)
		++j;
		if (j<i)
		cout << " Success!\n " ;*/
		int i20=0;
		int j20 = 9;
		while (i20<10)
		++i20;
		if (j20<i20)
		cout << "20. Success!\n " ;
	//#21
		/*int x = 2;
		double d = 5/(x – 2);
		if (d==2*x+0.5)
		cout << " Success!\n " ;*/
		int x21 = 2;
		double d21 = ((5.0/x21)+2.0);
		if (d21==2*x21+0.5)
		cout << "21. Success!\n " ;
	//#22
		/*string<char> s = " Success!\n " ;
		for (int i=0; i<=10; ++i)
		cout << s[i];*/
		string s22 = "22. Success!\n " ;
		for (int i=0; i<=10; ++i)
		cout << s22;
	//#23
		/*int i=0;
		while (i<10)
		++j;
		if (j<i) 
		cout << " Success!\n " ;*/
		int i23=0;
		int j23=9;
		while (i23<10)
		++i23;
		if (j23<i23) 
		cout << "23. Success!\n " ;
	//#24
		/*int x = 4;
		double d = 5/(x – 2);
		if (d=2*x+0.5)
		cout << " Success!\n " ;*/
		int x24 = 4;
		double d24 = (5.0/(x24-2.0));
		if (d24==2.0+0.5)
		cout << "24. Success!\n " ;
	//#25
		/*cin << " Success!\n " ;*/
		cout << "25. Success!\n " ;
keep_window_open();
return 0;
}
catch (exception&e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}
