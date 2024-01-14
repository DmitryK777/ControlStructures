#include<iostream>
#include<conio.h>

using namespace std;

//#define FORWORD 119
//#define BACK 115
//#define LEFT 97
//#define RIGHT 100
//#define JUMP 32
#define FIRE 13
#define ESCAPE 27

#define upArrow 72
#define downArrow 80
#define leftArrow 75
#define rightArrow 77


void main()
{
	setlocale(LC_ALL, "Russian");

	char instruction;
	cout << "Игра началась, задавайте действия:" << endl;

	/*
	cout << "W - Вперёд" << endl
		 << "S - Назад" << endl
	 	 << "A - Влево" << endl
		 << "D - Вправо" << endl
		 << "Space - Прыжок" << endl
		 << "Enter - Огонь" << endl
		 << "Escape - Выход из игры" << endl;
	cout << endl;
	*/
	do
	{
		/*
		instruction = _getch();

		if (instruction == 'w' || instruction == 'W' || instruction == upArrow) cout << "Вперёд" << endl;
		
		else if (instruction == 's' || instruction == 'S' || instruction == downArrow) cout << "Назад" << endl;
		
		else if (instruction == 'a' || instruction == 'A' || instruction == leftArrow) cout << "Влево" << endl;
		
		else if (instruction == 'd' || instruction == 'D' || instruction == rightArrow) cout << "Вправо" << endl;
		
		else if (instruction == ' ') cout << "Прыжок" << endl;
		
		else if (instruction == FIRE) cout << "Огонь" << endl;

		else if (instruction == ESCAPE && instruction != -32) cout << endl << "Игра окончена, пока!" << endl;
		
		else cout << "Такая инструкция не предусмотрена!" << endl;
		*/

		instruction = (int)_getch();
		switch(instruction)
		{
			case 87: case 119: case upArrow: cout << "Вперёд" << endl; break;
			case 83: case 115: case downArrow: cout << "Назад" << endl; break;
			case 65: case 97: case leftArrow: cout << "Влево" << endl; break;
			case 68: case 100: case rightArrow: cout << "Вправо" << endl; break;
			case 32: cout << "Прыжок" << endl; break;
			case FIRE: cout << "Огонь" << endl; break;
			case ESCAPE: cout << "Выход" << endl; break;
			case -32: break;
			default: cout << "Error" << endl;
		}
	} while (instruction != ESCAPE);
	
}