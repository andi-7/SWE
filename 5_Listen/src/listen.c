#include <stdio.h>
#include <stdlib.h>
#include "listen.h"

//----------------------Funktionsprototypen----------------------
LIST_NODE *createList();
LIST_NODE *insertRight(LIST_NODE *list, int data);
LIST_NODE *insertLeft(LIST_NODE *list, int data);
void *deleteElement(LIST_NODE* list);
void print_List(LIST_NODE *list);


//----------------------Main----------------------

int main(int argc, char *argv[]) {

	LIST_NODE *root = createList();
	LIST_NODE *current = root;

    current = insertRight(current, 7);
    current = insertRight(current, 4);
    current = insertRight(current, 2);
    current = insertLeft(current, 8);
    current = insertLeft(current, 6);

    print_List(root);

    return 0;
}


//----------------------Funktionen----------------------

//----------Leere Liste erzeugen----------
LIST_NODE *createList() {

	LIST_NODE *newNode = malloc(sizeof(LIST_NODE));
	newNode->Data=-1;
	newNode->Next=newNode;
	newNode->Prev=newNode;

	return newNode;
}		  

//----------Element rechts einfügen----------
LIST_NODE *insertRight(LIST_NODE *list, int data) {

	LIST_NODE *newNode = malloc(sizeof(LIST_NODE));

	newNode->Data = data;
	newNode->Prev = list;
	newNode->Next = list->Next;
	list->Next = newNode;
	newNode->Next->Prev = newNode;

	return newNode;

}

//----------Element links einfügen----------
LIST_NODE *insertLeft(LIST_NODE *list, int data) {
	
	LIST_NODE *newNode = malloc(sizeof(LIST_NODE));

	newNode->Data = data;
	newNode->Next = list;
	newNode->Prev = list->Prev;
	list->Prev = newNode;
	newNode->Prev->Next = newNode;

	return newNode;

	
}	
	
//----------Element löschen----------
void *deleteElement(LIST_NODE* list) {
	
	list->Next->Prev = list->Prev;
	list->Prev->Next = list->Next;
	return list->Prev;
}

//----------Liste ausgeben----------
void print_List(LIST_NODE *list) {
	LIST_NODE *head = list;
	LIST_NODE *current = list;

	printf("%d ", head->Data);

	while (head != (current = current->Next)){
		printf("%d ", current->Data);
	}

	printf("\n");
}
