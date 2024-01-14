#include <iostream>
#include<conio.h>
using namespace std;

#define Escape 27

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE
//#define FOR
#define FACTORIAL
//#define MULTIPLECATION_TABLE
//#define PIFAGOR_TABLE

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined WHILE_1
	int i = 0; // счЄтчик цикла
	int n; // количество итераций
	cout << "¬ведите количество итераций: "; cin >> n;
	while (i++ < n)
	{
		cout << i <<  " Hello" << endl;
		// i++;
	}
#endif

#if defined WHILE_2
	int n;
	cout << "¬ведите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
#endif

#if defined DO_WHILE

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);

#endif

#if defined FOR


	int n;
	cout << "¬ведите количество итераций: "; cin >> n;

	for (
		int i = 0; 
		i < n; 
		i++)
	{
		cout << i+1 << "\t";
	}
	cout << endl;
#endif

#if defined FACTORIAL
	int factorial;
	cout << "¬ведите чесло дл€ вычислени€ факториала: "; cin >> factorial;
	int result = 1;
	cout << result;
	for (
		int i = 1; 
		i <= factorial; 
		i++
		)
	{
		cout << " * " << i;
		result *= i;
	}
	cout << endl;
	cout << "‘акториал вашего числа = " << result << endl;
#endif

#if defined MULTIPLECATION_TABLE
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << j << " * " << i << " = " << i * j << "\t";
			
		}
		cout << endl;
	}
#endif

#if defined PIFAGOR_TABLE
	int n = 10;
		
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i*j << "\t";
		}
		cout << endl;
	}
#endif



}