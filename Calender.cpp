#include <iostream>
using namespace std;

int main ()
{
	int month, day, year;

	cout << "Enter Numbers only\n\n"; 
	cout << "Enter month:"; 
	cin>> month;
	cout << "Enter day:";
	cin>>day;
	cout << "Enter year:";
	cin>>year;

	switch(month)
	{
		case 1: if (day < 31)
		{
			cout <<"January " << day << "," << year << endl; }
				else
		{cout <<"Invalid date!"; }
			break;
		case 2: if (day < 29)
		{		
			cout <<"Febuary " << day << "," << year << endl; }
				else
		{cout <<"Invalid date!"; }
			break;
		case 3: if (day < 31)  
		{
			cout <<"March " << day << "," << year << endl; }
				else
		{cout <<"Invalid date!"; }
			break;
		case 4: if (day < 30)
		{
			cout <<"April " << day << "," << year << endl; }
				else
		{cout <<"Invalid date!"; }
			break;
		case 5: if (day < 31)
			cout <<"May " << day << "," << year << endl;
				else
		{cout <<"Invalid date!"; }
			break;
		case 6: if (day < 30)
			cout <<"June " << day << "," << year << endl;
				else
		{cout <<"Invalid date!"; }
			break;
		case 7: if (day < 31)
			cout <<"July " << day << "," << year << endl;
				else
		{cout <<"Invalid date!"; }
			break;
		case 8: if (day <31)
			cout <<"August " << day  << "," << year << endl;
				else
		{cout <<"Invalid date!"; }
			break;
		case 9: if (day < 30)
			cout <<"September " << day  << "," << year << endl;
				else
		{cout <<"Invalid date!"; }
			break;
		case 10: if (day < 31)
			cout <<"October " << day << "," << year << endl;
				else
		{cout <<"Invalid date!"; }
			break;
		case 11: if (day < 30)
			cout <<"November " << day << "," << year << endl;
				else
		{cout <<"Invalid date!"; }
			break;
		case 12: if (day < 31)
			cout <<"December " << day << "," << year << endl;
				else
		{cout <<"Invalid date!"; }
			break;

		default:
			cout<<"Invalid Date!";
	}
return 0;	
}



