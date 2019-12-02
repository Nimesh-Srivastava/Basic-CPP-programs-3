#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
	system("cls");

	int a, b;
	cout << "Enter a number : ";
	cin >> a;
	cout << "Enter another number : ";
	cin >> b;
	(a < b) ? cout << b << " is larger" : cout << a << " is larger";
	cout << endl;
  
  (void)_getch();
 }
