//���� 1 : 3n+1, ¦���� 2�� ������ Ȧ���� 3�� ���� ���� 1�� ����,1�� �� �� ���� �ݺ�
#include "header.h"
struct info//���� �����͸� ������ ����ü
{
	int firstnum;
	int secondnum;
	int ans;
};
int main()
{
	time_t main_startsec, main_endsec;//���� �ð�, ���� �ð� üũ ������
	main_startsec = time(NULL);
	time_t startsec, endsec;
	double ressec;//����-���� �ð� ���� ����
	//ex) 22 11 34 17 52 ... 16 8 4 2 1
	int i = 0;//�Է¹��� �ΰ��� ����
	int j = 0;
	int temp;//�� ������ �����ϱ� ���� �ӽ� ����
	int length = 0;//�ݺ��� �� �� ���� ����Ŭ ����
	int maxlength = 0;//����Ŭ ���� �� �ִ� ����
	int Loopnum = 0;//���ο��� �ݺ��� ���� ��
	info iarr[4] = { 0 };
	info oarr[4] = { 0 };
	ifstream save;
	ifstream ansf;
	save.open("test.txt");
	ansf.open("checktest.txt");
	if (save.is_open())
	{
		for (int i = 0; i < 4; i++)
		{
			save >> iarr[i].firstnum;
			save >> iarr[i].secondnum;
			save >> iarr[i].ans;
			//cout << iarr[i].firstnum <<" "<< iarr[i].secondnum <<" "<< iarr[i].ans << endl;
		}
		
		save.close();
	}
	if (ansf.is_open())
	{
		for (int i = 0; i < 4; i++)
		{
			ansf >> oarr[i].firstnum;
			ansf >> oarr[i].secondnum;
			ansf >> oarr[i].ans;
			//cout << iarr[i].firstnum << " " << iarr[i].secondnum << " " << iarr[i].ans << endl;
		}

		ansf.close();
	}
	//while (1)
	{
		//cin >> i ;//�� ���� �Է¹ޱ�, -1 �Է� �� ����
		//if (i == -1){break;}
		//cin >> j;
		//if (j == -1){break;}
		//if (i > j)//ù���� ���� �ι�° ������ ū ���
		//{
		//	temp = i;//�� ���� ���� ��ȯ
		//	i = j;
		//	j = temp;
		//}
		startsec = time(NULL);//time(NULL)�� ���� �ð� üũ ����
		cout << "Algorirhm Caculate..." << endl;
		Sleep(2000);
		//for (int a = i; a <= j; a++)//i���� j���� �ݺ�
		//{
		//	Loopnum = a;//a�� ���� �ٲٸ� �ݺ����� ���� ���� �� �� �����Ƿ� �ٸ� ���� Ȱ��
		//	if (Loopnum == 1) { length++; }//���� �� 1 �� ��� ���� 1 ����
		//	while (Loopnum != 1)//1�� �ƴϸ� �ݺ�
		//	{
		//		length++;//���� ����
		//		if (Loopnum % 2 == 1) { Loopnum = (3 * Loopnum) + 1; }//¦�� �� ��
		//		else if (Loopnum % 2 == 0) { Loopnum /= 2; }//Ȧ�� �� ��
		//		if (Loopnum == 1) { length++; }//1�� �Ǹ� ���� 1 ����
		//	}
		//	if (length > maxlength) { maxlength = length; }//��� �� ���̰� ����� �ִ� ���̺��� ū ��� �� ������ �ִ� ���� ����
		//	length = 0;//���� ���� 0���� �ʱ�ȭ
		//}
		//cout << i << " " << j << " " << maxlength << endl;// i j �ִ���� �� ���
		
		cout << "Algorirhm Error Check..." << endl;
		Sleep(2000);

		for (int x = 0; x < 4; x++)//�̸� ������ �˰��� ����� ��ġ�ϴ��� �˻�
		{
			if ((iarr[x].firstnum == oarr[x].firstnum && iarr[x].secondnum == oarr[x].secondnum) && oarr[x].ans != iarr[x].ans)
			{
				cout << "Algorithm error" << endl;
			}
			else if ((iarr[x].firstnum == oarr[x].firstnum && iarr[x].secondnum == oarr[x].secondnum) && oarr[x].ans == iarr[x].ans)
			{
				cout << "Algorithm correct" << endl;
			}
		}
		endsec = time(NULL);
		//clock() : ms ���� �ð� ����, s�� ��ȯ �Ϸ��� CLOCK_PER_SEC���� ������.
		ressec = (double)(endsec - startsec);//����-���� �ð� üũ �� ����(�˰��� ���� �ð�)
		cout << "Algorithm Running time(sec) : " << ressec << " sec" << endl;
	}
	main_endsec = time(NULL);
	ressec = (double)(main_endsec - main_startsec);//���α׷� ��ü ���� �ð� üũ
	cout << "Program Running time(sec) : " << ressec << " sec" << endl;
	
}