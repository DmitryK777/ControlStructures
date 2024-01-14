#include <iostream>

using namespace std;

#define FIG_0
#define FIG_1
#define FIG_2
#define FIG_3
#define FIG_4
#define FIG_5
#define FIG_6

void main()
{
//------------------------------------------------------------------
//FIG_0
#if defined FIG_0
	cout << "0)" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl << endl;
#endif



//------------------------------------------------------------------
//FIG_1
#if defined FIG_1
	cout << "1)" << endl;
	int counter_FIG_1 = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < counter_FIG_1; j++)
		{
			cout << "*";
		}
		cout << endl;
		counter_FIG_1++;
	}
	cout << endl << endl;
#endif



//------------------------------------------------------------------
//FIG_2
#if defined FIG_2
	cout << "2)" << endl;
	int counter_FIG_2 = 5;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < counter_FIG_2; j++)
		{
			cout << "*";
		}
		cout << endl;
		counter_FIG_2--;
	}
	cout << endl << endl;
#endif



//------------------------------------------------------------------
//FIG_3
#if defined FIG_3
	cout << "3)" << endl;
	int counter_space_FIG_3 = 0;
	int counter_symbol_FIG_3 = 5;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < counter_space_FIG_3; j++)
		{
			cout << " ";
		}
		counter_space_FIG_3++;

		for (int k = counter_symbol_FIG_3; k > 0; k--)
		{
			cout << "*";
		}
		counter_symbol_FIG_3--;

		cout << endl;
	}
	cout << endl << endl;
#endif



//------------------------------------------------------------------
//FIG_4
#if defined FIG_4
	cout << "4)" << endl;
	int counter_space_FIG_4 = 4;
	int counter_symbol_FIG_4 = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = counter_space_FIG_4; j > 0; j--)
		{
			cout << " ";
		}
		counter_space_FIG_4--;

		for (int k = 0; k < counter_symbol_FIG_4; k++)
		{
			cout << "*";
		}
		counter_symbol_FIG_4++;

		cout << endl;
	}
	cout << endl << endl;
#endif



//------------------------------------------------------------------
//FIG_5
#if defined FIG_5
	cout << "5)" << endl;
	int counter_first_space = 4;
	int counter_second_space = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = counter_first_space; j > 0; j--)
		{
			cout << " ";
		}
		counter_first_space--;
		cout << "/";

		for (int k = 0; k < counter_second_space; k++)
		{
			cout << " ";
		}
		counter_second_space += 2;
		cout << "\\";
		cout << endl;
	}

	counter_first_space++;
	counter_second_space -= 2;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < counter_first_space; j++)
		{
			cout << " ";
		}
		counter_first_space++;
		cout << "\\";

		for (int k = counter_second_space; k > 0; k--)
		{
			cout << " ";
		}
		counter_second_space -= 2;
		cout << "/";
		cout << endl;
	}
	cout << endl << endl;
#endif



//------------------------------------------------------------------
//FIG_6
#if defined FIG_6
	cout << "6)" << endl;
	for (int i = 0; i < 5; i++)
	{
		{
			for (int j = 0; j < 5; j++)
			{
				if ((i + j) % 2 == 0)
				{
					cout << "+";
				}
				else
				{
					cout << "-";
				}
			}
			cout << endl;
		}
	}
	cout << endl << endl;
#endif
}