#include<stdio.h>
using namespace std;
int Add(int a, int b)		//调用加法	
{
	return a + b;
}
int Sub(int a, int b)		//减法
{
	return a - b;
}
int Mul(int a, int b)		//乘法
{
	return a * b;
}
int Div(int a, int b)		//除法
{
	return a / b;
}
int qumo(int a,int b)
{
	return a % b;
}
int yuan(int a)
{
	return 3.14*a*a;
}
int zhou(int a)
{
	return 3.14*2*a;
}
void menu()
{
	printf("*************************************************\n");
	printf("*       小小计算器                               *\n");
	printf("*       1 加法                                  *\n");
	printf("*       2 减法                                  *\n");
	printf("*       3 乘法                                  *\n");
	printf("*       4 除法                                  *\n");
	printf("*       5 取模                                  *\n");
	printf("*       6 圆的面积                               *\n");
	printf("*       7 圆的周长                               *\n");	
	printf("*       0 退出                                  *\n");
	printf("*************************************************\n");
	printf("输入菜单项\n");
	
}
int main()
{
	int input = 1;
	int x = 0;
	int y = 0;
	int ret = 0;
	while (input)
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		//if (input >= 1 && input <= 6)
		//{
			printf("输入两个数：");
			scanf("%d%d", &x, &y);
		//}
		switch (input)
		{
		case 1:
			
			ret = Add(x, y);
			break;
		case 2:
			ret = Sub(x,y);
			break;
		case 3:
			ret = Mul(x, y);
			break;
		case 4:
			if (y==0)
			printf("devission by zero!");
			else
			ret = Div(x, y);
			break;
		case 5:
			if (y==0)
			printf("devission by zero!");
			else
			ret = qumo(x, y);
			break;
		case 6:
			ret = yuan(x);
			break;
		case 7:
			ret = zhou(x);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
		printf("ret = %d\n", ret);
	}
	return 0;
}

