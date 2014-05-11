#include <iostream>

using namespace std;
int main()
{
	int date;
	int month;
	int year;
	int n;
	int a;

	cout<<"Enter date ";
	cin>>date;
	cout<<"Enter month ";
	cin>>month;
	cout<<"Enter year ";
	cin>>year;

	n = (year + (year-1)/4 - (year-1)/100 +(year-1)/400)%7;

	if(month > 1)
		n=n+31;
	if(month > 2)
		n=n+28;
	if (month > 3) 
		n+=31; 
	if (month > 4) 
		n+=30; 
	if (month > 5) 
		n+=31; 
	if (month > 6) 
		n+=30; 
	if (month > 7) 
		n+=31; 
	if (month > 8) 
		n+=31; 
	if (month > 9) 
		n+=30; 
	if (month > 10) 
		n+=31; 
	if (month > 11) 
		n+=30; 

	if((year%4) == 0)
		n++;

	a = (n + date -1)%7;

	cout<<"The day is ";

	if( a == 0)
		cout<<"Sunday";
	if( a == 1)
		cout<<"Monday";
	if( a == 2)
		cout<<"Tuesday";
	if( a == 3)
		cout<<"Wednesday";
	if( a == 4)
		cout<<"Thursday";
	if( a == 5)
		cout<<"Friday";
	if( a == 6)
		cout<<"Saturday";
	cout<<endl;
}