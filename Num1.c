#include <stdio.h>

int main()
{
	int n = 5;
	int array1[5] = { 9,20,28,18,11 };
	int array2[5] = { 30,1,21,17,28 };
	int result[5];
	int answer[5][5];								//배열 미리 선언

	for (int i = 0; i < n; i++) {
		result[i] = array1[i] | array2[i];
		}

													//비트 연산
	for (int i = 0; i < n; i++)
	{
		int x = result[i];
		for (int j = 0; j <5; j++){
			if (x != 1)
			{
				answer[i][j] = x % 2;
				x = x / 2;							//2로 나눔으로써 비트 이동 연산
			}
			else
			{
				answer[i][j] = 1;					
				break;	
			}										//00001 또는 00000 일때까지 반복
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j >= 0; j--)				//j 초기값을 0으로 시작해서 증가시키면 역순으로 출력
		{
			if (answer[i][j] == 1)
				printf("%c", '#');
			else
				printf("%s", " ");
		}
		printf("\n");
	}
	
	system("pause");
}

