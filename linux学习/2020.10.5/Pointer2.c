#include<stdio.h>
#include<stdlib.h>

//指针练习
int main()
{
	//*只在变量申明的时候是指针标识符
	//在使用的时候其是 取内容标识符
	//int* 强调的是 类型是 整型指针
	//int *p 强调的是变量是 指针变量
	int*p1;
	char*p2;
	int a =10;
	char c = 'a';
	
	p1 = &a;
	p2 = &c;

	//打印他们的地址 并进行自加测试
	
	printf("a=%d\n",*p1);
        printf("c=%c\n",*p2);
	printf("a的地址是：%p\n",p1);
	printf("c的地址是：%p\n",p2);
	printf("++a的地址是：%p\n",++p1);
	printf("++c的地址是：%p\n",++p2);
	printf("a=%d\n",*p1);
	printf("c=%c\n",*p2);

	int array[] = {1,2,3};
	char array2[] = {'a','b','c'};

	printf("数组1的地址是：%p\n",&array[0]);
	printf("数组1的地址是：%p\n",&array[1]);
	printf("数组1的地址是：%p\n",&array[2]);
	//putchar("\n");
	printf("数组2的地址是：%p\n",&array2[0]);
	printf("数组2的地址是：%p\n",&array2[1]);
	printf("数组2的地址是：%p\n",&array2[2]);

	int i;
	int array3[] = {99,98,97};
	int *test;
	test = &array3[0];
	for(i=0;i<3;i++)
	{
		printf("%d\n",*test);
		test++;
	}




	return 0;
}

