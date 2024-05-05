#include <stdio.h>
#include <stdlib.h>


typedef int BOOL;

#define TRUE 1
#define FALSE 0
#define STACK_SIZE 100

typedef int ElementType;

typedef struct node{
	ElementType data;
	struct node *next;
}	StackNode, *LinkStack;

void InitStack( StackNode * node){
	node->next = NULL;
}

BOOL Push ( LinkStack ls, ElementType em){
	
	LinkStack temp;
	temp = (LinkStack) malloc(sizeof(StackNode));
	if(temp == NULL) return FALSE;
	temp->next = temp;
	temp->data = em;
	ls = temp;	
	
	return TRUE;
}

BOOL IsEmpty(LinkStack ls){
	if(ls->next == NULL) return TRUE;
	return FALSE;
}

BOOL Pop( LinkStack ls, ElementType *em){
	if(IsEmpty(ls) == TRUE) return FALSE;
	
	LinkStack temp = ls->next;
	*em = temp->data;
	ls->next = temp->next; // give next node point to las node
	
	free(temp);
	return TRUE;
}

void InvSeq(int num){
	int result = 0;
	
	LinkStack ls;
	ls = (LinkStack) malloc(sizeof(StackNode));
	
	InitStack(ls);
	
	for( int i =0; i < num; i++){
		Push(ls,i);
		printf("%d ", ls->data);
	}

	printf("\n");	

//for( int i =0; i < num; i++){
while (!IsEmpty(ls)){
		Pop(ls,&result);
		printf("%d ", result);
	}

	printf("\n");
}

int main(){
	InvSeq(20);

	return 0;
}
