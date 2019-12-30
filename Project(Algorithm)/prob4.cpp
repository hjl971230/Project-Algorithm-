#include "header.h"

struct display
{
	int s;//���ڸ� ǥ���ϴ� ũ��
	char n[100];//��µ� ���ڸ� ǥ���� ����
};
inline void gotoxy(int x, int y)//�ܼ�â���� Ư�� ��ġ�� �̵��ϱ� ���� ����ϴ� �Լ�
{
	COORD Pos = { x, y };//�̵��� ��ǥ�� �����ϱ� ���� ����ü, short���� x,y �� ����� ����
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	//�ش� �Լ��� �ܼ� â���� Ư�� ��ġ�� Ŀ���� �̵��� �� ����
	//(�ڵ鰪, �̵��� ��ġ�� �����ϰ� �ִ� COORD�� ����ü)
}

void wprint(int a)
{
	cout << " ";
	for (int i = 0; i < a; i++)
	{
		cout << "�� ";
	}
	cout << endl;
}

void hprint(int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "��" << endl;
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
		cout << "��" << endl;
		cout << ' ' << endl;
	}

}

void sidespaceprint(int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "��";
		for (int i = 0; i < 2*a; i++)
		{
			cout << " ";

		}
		cout << "��" << endl;
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