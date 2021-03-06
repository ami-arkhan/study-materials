#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define SIZE 20

int N, sum, element, max_element, sum_count, used;
int data[SIZE];

// For debugging how many subsets are generated to find the solution
//int subsets_generated;

void init()
{
	max_element = 0;
	sum_count = 0;

	// For debugging how many subsets are generated to find the solution
	//subsets_generated = 0;
}

void readCase()
{
	int i;
	scanf("%d\n", &N);
	for (i = 0; i < N; i++)
		scanf("%d ", &data[i]);
}

void solveCase()
{
	int i, j;
	/****************************************************************************
	*	1. Subset generated and empty subset is ignored, hence i starts from 1.	*
	*	2. Power of 2. For n elements, 2^n - 1 subsets are generated.			*
	****************************************************************************/
	for (i = 1; i < (1 << N); i++)
	{
		// For debugging how many subsets are generated to find the solution
		//subsets_generated++;

		sum = element = 0;
		/********************************************
		*	1. Checking which element is taken.		*
		*	2. For n elements, n bits are checked	*
		********************************************/
		for (j = 0; j < N; j++)
		{
			// If elements taken, add to sum
			if (i&(1 << j))
			{
				sum += data[j];
				element++;
			}
		}
		if (sum == 0)
		{
			sum_count++;
			if (element > max_element)
				max_element = element;
		}
	}
}

int main()
{
	int test, T;

	freopen("input.txt", "r", stdin);
	scanf("%d", &T);

	for (test = 1; test <= T; test++)
	{
		init();
		readCase();
		solveCase();

		printf("#%d %d %d\n", test, sum_count, max_element);

		// For debugging how many subsets are generated to find the solution
		//printf("Case generated: %d\n", subsets_generated);
	}
	return 0;
}
