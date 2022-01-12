#include<iostream>
#include<iomanip>
#include<string>
#include<Windows.h>
using namespace std;
void Coffee();
void Tea();
int main()
{
	int userinput, money1,money2;
	string choice;
	char type;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	system("Color 70");
	cout << "What would you like to drink?\n1.  Coffee\t2.  Tea" << endl;
	cin >> userinput;
	while (cin.fail() || (userinput != 1 && userinput != 2))
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please enter only \n1.  Coffee \tor\t2.  Tea" << endl;
		cin >> userinput;
	}
	if (userinput == 1)
	{
		 Coffee();
	}
	else
	{
		 Tea();
	}
	
	cout  << "Please enter:" << endl;
	cout << endl;
	cout << setw(24)<<"I for ";
	SetConsoleTextAttribute(h, 121);
	cout << setw(15) << "ICE"<< endl;
	SetConsoleTextAttribute(h, 112);
	cout << setw(24) << "M for ";
	SetConsoleTextAttribute(h, 127);
	cout << setw(15) << "MILK" << endl;
	SetConsoleTextAttribute(h, 112);
	cout << setw(24) << "B for ";
	SetConsoleTextAttribute(h, 112);
	cout << setw(15) << "Black" << endl;
	cin >> type;
	while (cin.fail() || (type!= 'I' && type != 'i' && type != 'B' && type != 'b' && type != 'M' && type != 'm'))
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Wrong input\nPlease enter one of the following:";
		cout << endl;
		cout << setw(24) << "I for ";
		SetConsoleTextAttribute(h, 121);
		cout << setw(15) << "ICE" << endl;
		SetConsoleTextAttribute(h, 112);
		cout << setw(24) << "M for ";
		SetConsoleTextAttribute(h, 127);
		cout << setw(15) << "MILK" << endl;
		SetConsoleTextAttribute(h, 112);
		cout << setw(24) << "B for ";
		SetConsoleTextAttribute(h, 112);
		cout << setw(15) << "Black" << endl;

		cin >> type;
	}
	cout << "Please enter your money(in AED): ";
		cin >> money1;
		while (cin.fail() || money1 < 1)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Insufficient Fund \nPlease enter your money: ";
			cin >> money1;
		}
		money2 = money1;
		switch (type)
		{
		case 'i':
		case 'I':
		{
			money1 -= 3;
			break;
		}
		case 'm':
		case 'M':
		{
			money1 -= 2;
			break;
		}
		case 'b':
		case 'B':
		{
			money1 -= 1;
			break;
		}
		default:
		{
			break;
		}
		}
		if (money1 >= 0)
		{
			cout << "\nDo you want to add sugar?(Y/N): ";
			cin >> choice;
			while (choice != "y" && choice != "Y" && choice !="N" && choice !="n")
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Unaccepted choice\nDo you want to add sugar?(Y/N): ";
				cin >> choice;
			}
			cout << endl;
			SetConsoleTextAttribute(h, 116);
			cout << "Enjoy ";
			SetConsoleTextAttribute(h, 121);
			cout << "your ";
			SetConsoleTextAttribute(h, 118);
			cout<<"drink!" << endl; 
			SetConsoleTextAttribute(h, 112);
			cout << endl;
				cout << "Here dont forget to grab your change " << money1 << " AED" << endl;
		}
		else
		{
			cout << "Sorry, Your money isn't enough : " << money2 << " dhs" << endl;
		}
	return 0;
}
void Coffee()
{
	string Coffee[6] = { "Ice","3","Milk","2","Black","1" };
	cout << setw(25) << "COFFEE" << setw(15) << "AED" << endl;
	cout << endl;
	for (int i = 0; i < 6; i+=2)
	{
		
		cout  <<setw(24) << Coffee[i] << setw(15) << Coffee[i + 1] << endl;
	}
	
}
void Tea()
{
	string Tea[6] = { "Ice","3","Milk","2","Black","1" };
	cout << setw(24) << "Tea" << setw(15) << "AED" << endl;
	for (int i = 0; i < 6; i += 2)
	{
		cout << setw(25) << Tea[i] << setw(15) << Tea[i + 1] << endl;
	}
	
}