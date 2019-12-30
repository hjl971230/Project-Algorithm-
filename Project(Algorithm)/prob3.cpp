#include "header.h"

int* end(int arr[])
{
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] == NULL)
		{
			return &arr[i];
		}
	}
	return &arr[999];
}

int main()
{
	int student_count = 0;
	int all_pay = 0;
	int n_pay = 0;
	int arr[1000]{ 0 };
	int tmp_pay[1000]{ 0 };
	int exchange=0;

	cin >> student_count;//사람 수

	for (int i = 0; i < student_count; i++)//수대로 가격 입력받기
	{
		cin >> arr[i];
		all_pay += arr[i];//받은 값 더하기
	}
	//sort(arr, end(arr), [] (int a,int b){return a > b; });
	for (int i = 0; i < student_count; i++)
	{
		cout << arr[i] << " ";
	}
	n_pay = all_pay / student_count;//전체를 학생 수만큼 나누기
	for (int i = 0; i < student_count; i++)
	{
		tmp_pay[i] = n_pay;
	}
	
	all_pay %= student_count;//사람 수만큼 나눈 나머지
	for (int i = 0; i < all_pay; i++)
	{
		tmp_pay[i]++;//이동 금액 증가
	}

	for (int i = 0; i < student_count; i++)
	{
		exchange += abs(arr[i]-tmp_pay[i]);
	}
	exchange /= 2;
	cout << "$" << exchange << endl;
}