#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 
void push(int);
void pop();
void display();

int stack[SIZE],top=-1;

int main()
{
	int value,choice;
	while(1)
	{
		printf("\n\n*****MENU*****\n");
		printf("1.push\n2.Pop\n3.display\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter the value to be insert:");
			       scanf("%d",&value);
			       push(value);
			       break;
			case 2: pop();
			        break;
			case 3:display();
			       break;
			case 4:exit(0);
			default:printf("\nWrong selection!!!Try again!!!");   		       
		}
	}
}
void push(int value){
	if (top== SIZE-1)
	printf("\nStack is Full!!! Insertion is not possible!!!");
	else{
		top++;
		stack[top]=value;
		printf("\nInsertion success!!!");
	}
}
void pop(){
	if (top== -1)
	printf("\nStack is empty!!!Delection is not possible!!!");
	else{
		printf("\nDelete :%d",stack[top]);
		top--;
	}
}
void display(){
	if(top== -1)
	printf("\nStack is Empty!!!");
	else{
		int i;
		printf("\nStack elements are :\n");
		for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);
	}
}
