#include <stdio.h>
#include <stdlib.h>
#include "types.h"

LIST_HEAD(pList);
INIT_LIST_HEAD(&pList);

typedef struct _SPerson {
	int age;
	char name[10];
	struct list_head list;
} Person;

int main(void)
{
	Peson* ptrP;
	Person p1 = { 20, "FFF" };
	Person p2 = { 30, "ASD" };

	list_add_tail(&p1.list, &pList);
	list_add_tail(&p2.list, &pList);

	list_for_each_entry(ptrP, &pList, list)
	{
		printf("struct Person[%p] age is %d, name is %s \n", ptrP, ptrP->age, ptrP->name);
	}

	return 0;
}
