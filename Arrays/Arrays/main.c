#include "Array.h"
#include<stdio.h>
#include <stdlib.h>

void show(void *p)
{
	int *pa = p;
	printf("%3d", *pa);
}
int main()
{
	int a[10] = { 2, 33, 3, 6, 4, 5, 4, 65, 4, 4 };
	List list;
	initList(&list, 10, sizeof(int));
	for (int i = 0; i < 10;i++)
	{
		insert(&list, a+i);
	}

	printList(&list, show);
	


	system("pause");
	return 0;
}