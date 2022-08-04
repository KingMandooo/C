문제들 출처: https://modoocode.com/28
--------------------
* 유클리드 호제법

#include <stdio.h>

int Euclidean_algorithm(int N, int n);

int main()
{
	int N, n;
	int greatest_common_factor = 0;
	printf("N과 n의 최대공약수를 구하시오.\nN과 n값 입력 : ");
	
	scanf("%d %d", &N, &n);

	greatest_common_factor = Euclidean_algorithm(N, n);

	printf("최대공약수 : %d\n", greatest_common_factor);

	return 0;
}

int Euclidean_algorithm(int N, int n)
{
	int num = 1;

	while (1)
	{
		num = N % n;
		if (num == 0)
			break;
		N = n;
		n = num;
	}

	return n;
}

-----------------------------------------------------------
* 재귀함수를 활용한 곱셈 코드

#include <stdio.h>

void roop(int* N, int* i, int* count);

int main()
{
	int N = 1;
	int i = 1;

	int count;
	printf("어디까지 곱할까요? : ");
	scanf("%d", &count);

	roop(&N, &i, &count);

	printf("곱한 값 : %d", N);

	return 0;
}

void roop(int* N, int* i, int* count)
{

	*N = *N * *i;
	*i = *i + 1;

	if (*i <= *count)
		roop(N, i, count);
}
