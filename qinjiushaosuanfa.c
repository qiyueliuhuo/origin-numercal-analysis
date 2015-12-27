#include<stdio.h>
#include<malloc.h>
int main()
{
	int i, n;
	double *A, x, result;
	printf("请输入多项式的最高次数n(n>0的整数):\n");
	scanf("%d", &n);
	A = (double *)malloc((n + 1) * sizeof(double));
	printf("请输入多项式各项的系数从0次到n次:\n");
	for(i = 0; i <= n; i++)
	{
		scanf("lf", A + i);
	}
	printf("请输入x:\n");
	scanf("%lf", &x);
	result = A[n];
	for(i = n - 1; i >= 0; i--)
	{
		result = result * x + A[i];
	}
	printf("结果是:%d", result);
	return 0;
}

	
