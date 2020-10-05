#include<stdio.h>
#include<stdlib.h>

//在一次熟悉指针的操作
int main()
{
	int test1=10;
	int test2=11;
	//use variable to visit
	printf("test1:%d\n",test1);
	printf("test2:%d\n",test2);
	//Take the address
	printf("test1:%p\n",&test1);
	printf("test2:%p\n",&test2);
	//Access via address
	printf("test1:%d\n",*(&test1));
	printf("test2:%d\n",*(&test2));
	return 0;
}
