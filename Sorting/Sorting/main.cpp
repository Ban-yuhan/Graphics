#include <stdio.h>

void InsertSort()
{
	int arrData[] = { 8,1,7,4,2,3,9,5,6 };

	//-------------------------------
	//배열을 정렬되도록 로직을 짜기
	for (int i = 0; i < 9; i++)
	{
		if (i + 1 < 9)
		{
			if (arrData[i] > arrData[i + 1])
			{
				int* a = &arrData[i];
				int* b = &arrData[i + 1];
				int temp = *a;
				*a = *b;
				*b = temp;
			}
		}
		if (i + 2 < 9)
		{
			if (arrData[i] > arrData[i + 2])
			{
				int* a = &arrData[i];
				int* b = &arrData[i + 2];
				int temp = *a;
				*a = *b;
				*b = temp;
			}
		}
		if (i + 3 < 9)
		{
			if (arrData[i] > arrData[i + 3])
			{
				int* a = &arrData[i];
				int* b = &arrData[i + 3];
				int temp = *a;
				*a = *b;
				*b = temp;
			}
		}
		if (i + 4 < 9)
		{
			if (arrData[i] > arrData[i + 4])
			{
				int* a = &arrData[i];
				int* b = &arrData[i + 4];
				int temp = *a;
				*a = *b;
				*b = temp;
			}
		}
		if (i + 5 < 9)
		{
			if (arrData[i] > arrData[i + 5])
			{
				int* a = &arrData[i];
				int* b = &arrData[i + 5];
				int temp = *a;
				*a = *b;
				*b = temp;
			}
		}
		if (i + 6 < 9)
		{
			if (arrData[i] > arrData[i + 6])
			{
				int* a = &arrData[i];
				int* b = &arrData[i + 6];
				int temp = *a;
				*a = *b;
				*b = temp;
			}
		}
		if (i + 7 < 9)
		{
			if (arrData[i] > arrData[i + 7])
			{
				int* a = &arrData[i];
				int* b = &arrData[i + 7];
				int temp = *a;
				*a = *b;
				*b = temp;
			}
		}
		if (i + 8 < 9)
		{
			if (arrData[i] > arrData[i + 8])
			{
				int* a = &arrData[i];
				int* b = &arrData[i + 8];
				int temp = *a;
				*a = *b;
				*b = temp;
			}
		}
	}


	//-------------------------------

	//다음출력에서 1~9까지 순서대로 정렬되도록 만들기
	printf("Data \n");

	for (int i = 0; i < 8; i++)
	{
		printf("%d,", arrData[i]);
	}
	printf("%d", arrData[8]);
}

void main()
{
	InsertSort();
}