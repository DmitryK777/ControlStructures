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
	cout << "���� ��������, ��������� ��������:" << endl;

	/*
	cout << "W - �����" << endl
		 << "S - �����" << endl
	 	 << "A - �����" << endl
		 << "D - ������" << endl
		 << "Space - ������" << endl
		 << "Enter - �����" << endl
		 << "Escape - ����� �� ����" << endl;
	cout << endl;
	*/
	do
	{
		/*
		instruction = _getch();

		if (instruction == 'w' || instruction == 'W' || instruction == upArrow) cout << "�����" << endl;
		
		else if (instruction == 's' || instruction == 'S' || instruction == downArrow) cout << "�����" << endl;
		
		else if (instruction == 'a' || instruction == 'A' || instruction == leftArrow) cout << "�����" << endl;
		
		else if (instruction == 'd' || instruction == 'D' || instruction == rightArrow) cout << "������" << endl;
		
		else if (instruction == ' ') cout << "������" << endl;
		
		else if (instruction == FIRE) cout << "�����" << endl;

		else if (instruction == ESCAPE && instruction != -32) cout << endl << "���� ��������, ����!" << endl;
		
		else cout << "����� ���������� �� �������������!" << endl;
		*/

		instruction = (int)_getch();
		switch(instruction)
		{
			case 87: case 119: case upArrow: cout << "�����" << endl; break;
			case 83: case 115: case downArrow: cout << "�����" << endl; break;
			case 65: case 97: case leftArrow: cout << "�����" << endl; break;
			case 68: case 100: case rightArrow: cout << "������" << endl; break;
			case 32: cout << "������" << endl; break;
			case FIRE: cout << "�����" << endl; break;
			case ESCAPE: cout << "�����" << endl; break;
			case -32: break;
			default: cout << "Error" << endl;
		}
	} while (instruction != ESCAPE);
	
}