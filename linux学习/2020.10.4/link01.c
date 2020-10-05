#include<stdlib.h>
#include<stdio.h>

struct Test
{
	int data;
	struct Test *next;
};

int main()
{
	int i;

	int array[]={1,2,3};
	for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
			printf("%d ",array[i]);
	}
	putchar('\n');

	struct Test t1 ={1,NULL};
	struct Test t2 ={2,NULL};
	struct Test t3 ={3,NULL};

	t1.next = &t2;
	t2.next = &t3;

	printf("ues t1 to print three nums\n");
	printf("%d %d %d\n",t1.data,t1.next->data,t1.next->next->data);

	return 0;
}
