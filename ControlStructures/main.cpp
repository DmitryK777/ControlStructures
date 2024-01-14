// Control Structures
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello Controls" << endl;

	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
/*
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else     // в противном случае (иначе)
	{
		cout << "На улице холодно" << endl;
	}
*/

	if (temperature > 60)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -40)
	{
		cout << "Сильный мороз" << endl;
	}
	else
	{
		cout << "Капец, а не погода." << endl;
	}
}