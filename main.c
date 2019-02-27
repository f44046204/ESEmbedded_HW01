#include <stdio.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int (*p[4])(int i,int j);
int main()
{
	int ans;
	int n, m, op;
	
	p[0] = plus;
	p[1] = minus;
	p[2] = multiply;
	p[3] = divided;

	printf("Please enter two numbers: ");
	scanf("%d %d", &n, &m);
	
	printf("0:Plus 1:Minus 2:Multiply 3:Divided \n");
	do{
	printf("Please enter your operation: ");
	scanf("%d", &op);
	}while(op<0 || op>3);
	
	ans = (*p[op])(n, m);
	printf("%d",ans);
	return 0;

}
