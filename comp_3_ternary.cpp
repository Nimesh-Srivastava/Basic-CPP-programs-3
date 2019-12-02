#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
	system("cls");

	int a, b, c;
	cout << "Enter a number : ";
	cin >> a;
	cout << "Enter another number : ";
	cin >> b;
	cout << "Enter yet another number : ";
	cin >> c;
	(a > b) ? (b > c) ? cout << a << " is largest" : (c > a) ? cout << c << " is the largest" : cout << b << " is the largest" : cout << endl;
	cout << endl;
  
  (void)_getch();
 }
