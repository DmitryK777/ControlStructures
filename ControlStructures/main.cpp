// Control Structures
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello Controls" << endl;

	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
/*
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else     // � ��������� ������ (�����)
	{
		cout << "�� ����� �������" << endl;
	}
*/

	if (temperature > 60)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 35)
	{
		cout << "����� �����" << endl;
	}
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -40)
	{
		cout << "������� �����" << endl;
	}
	else
	{
		cout << "�����, � �� ������." << endl;
	}
}