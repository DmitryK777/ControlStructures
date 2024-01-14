#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int n; // Высота (количество строк) треугольника Паскаля
    
	cout << "Введите высоту (количество строк) треугольника Паскаля: "; cin >> n;
	cout << endl;

    for (int i = 1; i <= n; i++) 
    {
        int number= 1;

        for (int j = i; j < n; j++) cout << " ";

        for (int k = 1; k <= i; k++) 
        {
            cout << number << " ";
            number = (number * (i - k)) / k;
        }

        cout << endl;
    }
 

 /*
    int fi = 1;

    for (int i = 0; i < n; i++)
    {
        cout.width(6);
        cout << "";
    }

    cout << 1 << endl;
    for (int i = 1; i <= n; i++)
    {
        fi *= i;
        for (int j = 0; j < n - i; j++)
        {
            cout.width(3);
            cout << "";
        }
        cout.width(6);
        int fj = 1;
        for (int j = 1; j <= i; j++)
        {
            fj *= j;
            
            int fk = 1;
            for (int k = 1; k <= (i - j); k++)
            {
                fk *= k;
            }

            int bin = fi / fj / fk;
            cout.width(6);
            cout << bin;
        }
        cout << endl;
    }
 */
}