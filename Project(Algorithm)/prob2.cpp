//#2 Áö·Ú Ã£±â
#include<iostream>
using namespace std;

#define MAX 100

void createmine(char arr[MAX][MAX],int &width, int &height)
{
	cin >> width >> height;

	for (int i = 1; i < width + 1; i++)
	{
		for (int j = 1; j < height + 1; j++)
		{
			arr[i][j] = '0';
		}
	}
}
void countmine(char arr[MAX][MAX], char &counter, int &width, int &height)
{
	for (int i = 1; i < width + 1; i++)
	{
		for (int j = 1; j < height + 1; j++)
		{
			cin >> counter;
			if (counter == '*')
			{
				arr[i][j] = counter;
			}

			if (arr[i][j] == '*')
			{
				for (int a = i - 1; a <= i + 1; a++)
				{
					for (int b = j - 1; b <= j + 1; b++)
					{
						if (arr[a][b] != '*')
							arr[a][b]++;
					}
				}
			}
		}
	}
	cout << endl;
}
void showmine(char arr[MAX][MAX], char &counter, int &width, int &height, int& forcount)
{
	cout << "Field #" << forcount << endl;
	cout << width << " " << height << endl;
	for (int i = 1; i < width + 1; i++)
	{
		for (int j = 1; j < height + 1; j++)
		{
			if (arr[i][j] == '*')
			{
				cout << arr[i][j];
			}
			else
				cout << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
	forcount++;
}
int main()
{
	char arr[MAX][MAX]{};
	char counter{};
	int width = 0;
	int height = 0;
	int forcount = 1;

	while (1)
	{
		createmine(arr, width, height);
		countmine(arr, counter, width, height);
		showmine(arr, counter, width, height, forcount);
	}
}