#include <stdio.h>

int main()
{
	int n = 5;
	int array1[5] = { 9,20,28,18,11 };
	int array2[5] = { 30,1,21,17,28 };
	int result[5];
	int answer[5][5];								//�迭 �̸� ����

	for (int i = 0; i < n; i++) {
		result[i] = array1[i] | array2[i];
		}

													//��Ʈ ����
	for (int i = 0; i < n; i++)
	{
		int x = result[i];
		for (int j = 0; j <5; j++){
			if (x != 1)
			{
				answer[i][j] = x % 2;
				x = x / 2;							//2�� �������ν� ��Ʈ �̵� ����
			}
			else
			{
				answer[i][j] = 1;					
				break;	
			}										//00001 �Ǵ� 00000 �϶����� �ݺ�
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j >= 0; j--)				//j �ʱⰪ�� 0���� �����ؼ� ������Ű�� �������� ���
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

