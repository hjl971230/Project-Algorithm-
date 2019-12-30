#include "header.h"

struct display
{
	int s;//숫자를 표시하는 크기
	char n[100];//출력될 숫자를 표시할 변수
};
inline void gotoxy(int x, int y)//콘솔창에서 특정 위치로 이동하기 위해 사용하는 함수
{
	COORD Pos = { x, y };//이동할 좌표를 지정하기 위한 구조체, short형의 x,y 를 멤버로 소유
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	//해당 함수로 콘솔 창에서 특정 위치로 커서를 이동할 수 있음
	//(핸들값, 이동할 위치를 저장하고 있는 COORD형 구조체)
}

void wprint(int a)
{
	cout << " ";
	for (int i = 0; i < a; i++)
	{
		cout << "─ ";
	}
	cout << endl;
}

void hprint(int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "│" << endl;
		cout << ' ' << endl;
	}

}

void spaceprint(int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int i = 0; i < 2*a; i++)
		{
			cout << " ";

		}
		cout << "│" << endl;
		cout << ' ' << endl;
	}

}

void sidespaceprint(int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "│";
		for (int i = 0; i < 2*a; i++)
		{
			cout << " ";

		}
		cout << "│" << endl;
		cout << ' ' << endl;
	}

}

void print(int a, char b)
{
	switch (b)
	{
	case '1':
		hprint(a);
		hprint(a);
		break;
	case '2':
		wprint(a);
		spaceprint(a);
		wprint(a);
		hprint(a);
		wprint(a);
		break;
	case '3':
		wprint(a);
		spaceprint(a);
		wprint(a);
		spaceprint(a);
		wprint(a);
		break;
	case '4':
		sidespaceprint(a);
		wprint(a);
		spaceprint(a);
		break;
	case '5':
		wprint(a);
		hprint(a);
		wprint(a);
		spaceprint(a);
		wprint(a);
		break;
	case '6':
		wprint(a);
		hprint(a);
		wprint(a);
		sidespaceprint(a);
		wprint(a);
		break;
	case '7':
		wprint(a);
		spaceprint(a);
		spaceprint(a);
		break;
	case '8':
		wprint(a);
		sidespaceprint(a);
		wprint(a);
		sidespaceprint(a);
		wprint(a);
		break;
	case '9':
		wprint(a);
		sidespaceprint(a);
		wprint(a);
		spaceprint(a);
		wprint(a);
		break;
	case '0':
		wprint(a);
		sidespaceprint(a);
		sidespaceprint(a);
		wprint(a);
		break;
	default:
		break;
	}
}

int main()
{
	display dis;
	cin >> dis.s;
	cin >> dis.n;
	
	if (*dis.n == '0' && dis.s == 0)
	{
		exit(0);
	}

	for (int i = 0; i < strlen(dis.n); i++)
	{
		print(dis.s, dis.n[i]);
	}
	
}