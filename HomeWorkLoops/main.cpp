#include<iostream>
#include<conio.h>

using namespace std;

#define ESCAPE 27

//#define POWER
//#define ASCII_SYMBOLS
//#define FIBANACHI
#define SIMPLE_NUMBERS

void main()
{
	setlocale(LC_ALL, "Russian");


#if defined POWER
	int instruction;
	do
	{
		cout << "��������� �������? (��� ������ ������� \"ESCAPE\")";
		instruction = (int)_getch();
		cout << endl;

		if (instruction != ESCAPE)
		{
			double base;
			int exponent;
			double result = 1;

			cout << "������� ��������� �������: "; cin >> base;
			cout << "������� ���������� �������: "; cin >> exponent;
			if (exponent < 0)
			{
				base = 1 / base;
				exponent = -exponent;
			}
			for (int i = 0; i < exponent; i++)
			{
				result *= base;
			}

			cout << "��������� ���������� ������� = " << result << endl;
			cout << endl;
		}
	} while (instruction != ESCAPE);
#endif

#if defined ASCII_SYMBOLS

	cout << "������� ASCII ��������:" << endl;
	setlocale(LC_ALL, "C"); // ��������� �� ���������
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	setlocale(LC_ALL, "Russian");
#endif

#if defined FIBANACHI
	int first_number = 0;
	int second_number = 1;
	int range;

	cout << "������� ������� ����� ���� �������� ������� �� �����: "; cin >> range;
	cout << endl;

	if (range == 0)
	{
		cout << "�� ���� ����, ����� � ������ ��������." << endl;
	}
	else if (range == 1)
	{
		cout << first_number << endl;
	}
	else if (range == 2)
	{
		cout << first_number << "\t" << second_number << endl;
	}
	else
	{
		cout << first_number << "\t" << second_number << "\t";

		int last_number = second_number;
		int previous_number = first_number;
		int current_number;

		for (int i = 0; i < (range-2); i++)
		{
			int current_number = last_number + previous_number;
			cout << current_number << "\t";

			previous_number = last_number;
			last_number = current_number;
		}
	}

#endif

#if defined SIMPLE_NUMBERS
	int limit_number;

	cout << "������� �� ������ ����� ������� ��� ������� �����: "; cin >> limit_number;
	if (limit_number < 2)
	{
		cout << "��� ������� ����� ���������� � ����� 2" << endl;
	}
	else
	{
		for (int i = 2; i <= limit_number; i++)
		{
			int counter = 0;
			for (int j = 2; j <= (limit_number/2)+1; j++)
			{
				if (i % j == 0)
				{
					counter++;
				}
			}

			if (counter == 1)
			{
				cout << i << "\t";
			}
		}
	}
	
#endif
}