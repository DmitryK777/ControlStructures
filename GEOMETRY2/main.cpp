#include <iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
#define ROMB
//#define PLUS_MINUS

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	
#if defined SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#if defined TRIANGLE1
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif 


#if defined TRIANGLE2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif

#if defined TRIANGLE3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";

		for (int j = i; j < n; j++) cout << "* ";
		
		cout << endl;
	}
#endif

#if defined TRIANGLE4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << "  ";

		for (int j = 0; j < i+1; j++) cout << "* ";

		cout << endl;
	}
#endif

#if defined ROMB
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++) cout << " "; cout << "\\";
		for (int j = i; j < n-1; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif

#if defined PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		{
			for (int j = 0; j < n; j++)
			{
				/*
				if ((i + j) % 2 == 0) cout << "+ ";
				else cout << "- ";

				if ((i + j) % 2 == 0) cout << "+ ";
				else cout << "- ";
				*/
				//( i%2 == j%2) ? cout << "+ " : cout << "- ";

				cout << (i % 2 == j % 2 ? "+ " : "- ");
			}
			cout << endl;
		}
	}
	cout << endl << endl;
#endif

}