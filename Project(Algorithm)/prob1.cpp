//문제 1 : 3n+1, 짝수면 2로 나누고 홀수면 3을 곱한 다음 1을 더함,1이 될 때 까지 반복
#include "header.h"
struct info//사전 데이터를 저장할 구조체
{
	int firstnum;
	int secondnum;
	int ans;
};
int main()
{
	time_t main_startsec, main_endsec;//시작 시간, 종료 시간 체크 변수들
	main_startsec = time(NULL);
	time_t startsec, endsec;
	double ressec;//종료-시작 시간 저장 변수
	//ex) 22 11 34 17 52 ... 16 8 4 2 1
	int i = 0;//입력받을 두개의 변수
	int j = 0;
	int temp;//두 변수를 정렬하기 위한 임시 변수
	int length = 0;//반복할 때 각 수의 사이클 길이
	int maxlength = 0;//사이클 길이 중 최대 길이
	int Loopnum = 0;//내부에서 반복할 때의 수
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
		//cin >> i ;//두 수를 입력받기, -1 입력 시 종료
		//if (i == -1){break;}
		//cin >> j;
		//if (j == -1){break;}
		//if (i > j)//첫번쨰 수가 두번째 수보다 큰 경우
		//{
		//	temp = i;//두 수를 서로 교환
		//	i = j;
		//	j = temp;
		//}
		startsec = time(NULL);//time(NULL)로 현재 시간 체크 가능
		cout << "Algorirhm Caculate..." << endl;
		Sleep(2000);
		//for (int a = i; a <= j; a++)//i부터 j까지 반복
		//{
		//	Loopnum = a;//a를 직접 바꾸면 반복문을 정상 진행 할 수 없으므로 다른 공간 활용
		//	if (Loopnum == 1) { length++; }//시작 시 1 인 경우 길이 1 증가
		//	while (Loopnum != 1)//1이 아니면 반복
		//	{
		//		length++;//길이 증가
		//		if (Loopnum % 2 == 1) { Loopnum = (3 * Loopnum) + 1; }//짝수 일 때
		//		else if (Loopnum % 2 == 0) { Loopnum /= 2; }//홀수 일 때
		//		if (Loopnum == 1) { length++; }//1이 되면 길이 1 증가
		//	}
		//	if (length > maxlength) { maxlength = length; }//계산 후 길이가 저장된 최대 길이보다 큰 경우 그 값으로 최대 길이 저장
		//	length = 0;//가변 길이 0으로 초기화
		//}
		//cout << i << " " << j << " " << maxlength << endl;// i j 최대길이 로 출력
		
		cout << "Algorirhm Error Check..." << endl;
		Sleep(2000);

		for (int x = 0; x < 4; x++)//미리 저장한 알고리즘 정답과 일치하는지 검사
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
		//clock() : ms 단위 시간 측정, s로 변환 하려면 CLOCK_PER_SEC으로 나눈다.
		ressec = (double)(endsec - startsec);//종료-시작 시간 체크 후 저장(알고리즘 실행 시간)
		cout << "Algorithm Running time(sec) : " << ressec << " sec" << endl;
	}
	main_endsec = time(NULL);
	ressec = (double)(main_endsec - main_startsec);//프로그램 전체 실행 시간 체크
	cout << "Program Running time(sec) : " << ressec << " sec" << endl;
	
}