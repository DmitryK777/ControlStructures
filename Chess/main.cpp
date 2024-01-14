#include <iostream>
using namespace std;

#define CHESS_1
//#define CHESS_2

#define SPACE "\t\t\t"

void main()
{
	setlocale(LC_ALL, "");

	int n; // Размер доски в клетках по ширине и высоте
	int h; // высота клетки в символах (чтоб на экране консоли клетки хоть чуть-чуть были похожи на квадратные)
	cout << "Введите размер доски: "; cin >> n;
	if (n <= 5) h = 2; else h = 4;
	cout << endl;
	
	setlocale(LC_ALL, ".866");

#if defined CHESS_1
	cout << SPACE << (char)218;
	for (int i = 0; i < n * n; i++) cout << (char)196;
	cout << (char)191;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < h; j++)
		{
			cout << SPACE << (char)179;
			for (int k = 0; k < n; k++)
			{
				if (i % 2 == k % 2) for (int m = 0; m < n; m++) cout << (char)219;

				else for (int m = 0; m < n; m++) cout << (char)32;
			}
			cout << (char)179;
			cout << endl;
		}
	}

	cout << SPACE << (char)192;
	for (int i = 0; i < n * n; i++) cout << (char)196;
	cout << (char)217;
	cout << endl;
#endif

#if defined CHESS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (i % 2 == k % 2) for (int m = 0; m < n; m++) cout << "* ";

				else for (int m = 0; m < n; m++) cout << "  ";
			}
			cout << endl;
		}
	}
#endif

}