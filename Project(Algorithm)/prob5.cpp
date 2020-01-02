#include "header.h"

int main()
{
	int M = 0;//ї­
	int N = 0;//За
	string filename;

	int X;
	int Y;
	int X1, X2, Y1, Y2;
	char gpp;
	char** gparr = nullptr;
	char color;
	char tmpcolor;
	while (1)
	{
		cin >> gpp;
		if (gpp == 'I' || gpp == 'i')
		{
			if (gparr != nullptr)
			{
				delete gparr;
			}
			cin >> M;
			cin >> N;

			gparr = new char* [N];
			for (int i = 0; i < N; i++)
			{
				gparr[i] = new char[M];
			}
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					gparr[i][j] = 'O';
				}
			}
		}
		else if (gpp == 'C'|| gpp == 'c')
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					gparr[i][j] = 'O';
				}
			}
		}
		else if (gpp == 'L'|| gpp == 'l')
		{
			cin >> X;
			cin >> Y;
			cin >> color;

			gparr[Y - 1][X - 1] = color;
		}
		else if (gpp == 'V' || gpp == 'v')
		{
			cin >> X;
			cin >> Y1;
			cin >> Y2;
			cin >> color;
			for (int i = Y1; i <= Y2; i++)
			{
				gparr[i-1][X-1] = color;
			}
		}  
		else if (gpp == 'H' || gpp == 'h')
		{
			cin >> X1;
			cin >> X2;
			cin >> Y;
			cin >> color;
			for (int i = X1; i <= X2; i++)
			{
				gparr[Y-1][i-1] = color;
			}
		}
		else if (gpp == 'S' || gpp == 's')
		{
			cin >> filename;
			cout << filename << endl;

			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					cout << gparr[i][j];
				}
				cout << endl;
			}
		}
		else if (gpp == 'K' || gpp == 'k')
		{
			while (1)
			{
				cin >> X1;
				cin >> Y1;
				cin >> X2;
				cin >> Y2;

				if (X1 > X2 || Y1 > Y2)
				{
					cout << "size error" << endl;
					continue;
				}
				else break;
			}
			cin >> color;
			for (int i = Y1; i <= Y2; i++)
			{
				for (int j = X1; j <= X2; j++)
				{
					gparr[i - 1][j - 1] = color;
				}
			}

		}
		else if (gpp == 'F' || gpp == 'f')
		{
			cin >> X;
			cin >> Y;
			cin >> color;
			tmpcolor = gparr[Y][X];
			gparr[Y][X] = color;

			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					if (gparr[i][j] == tmpcolor && gparr[i][j] != color)
					{
						gparr[i][j] = color;
					}
				}
			}
		}
		else if (gpp == 'X' || gpp == 'x')
		{
			exit(1);
		}
		else exit(0);
	}
}