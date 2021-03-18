#include<stdio.h>
#define capacity 5
int isfull();
void push(int );
int isempty();
void pop();
void traverse();
int peek();
int length();
int stack[capacity],top=-1;
int main(){
	while(1){
		int ch,element;
		printf("\t **** Main Menu ****\n");
		printf(" 1)push \n 2)pop \n 3)peek \n 4)Traverse \n 5)Length\n");
		printf("enter ur choice: \n");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("enter element to be pushed in stack:\n");
					scanf("%d",&element);
					push(element); break;
			case 2: pop(); break;
			case 3: printf("peek = %d",peek()); break;	
			case 4: traverse(); break;	
			case 5: printf("length = %d",length()); break;	
			
		}
	}	

	}

int isfull(){
	if(top==capacity-1){
		return 1;
	}else{
		return 0;
	}}
void push(int element){
	if(isfull()){
		printf("stack is full\n");
	}else{
		top++;
		stack[top]=element;
		printf("element is pushed into stack\n");
	}
}

int isempty()
{if(top==-1){
	return 1;
}else{
	return 0;
}
}

void pop(){
	int temp;
	if(isempty()){
			printf("stack is empty\n");
	}else{
		temp=stack[top];
		top--;}
		printf("element is popped outoff stack\n");
}

int peek(){
	if(isempty()){
			printf("stack is empty\n");
	}else{
		int temp;
		temp=stack[top];
	return temp;
	}
	
}

void traverse(){
	if(isempty()){
			printf("stack is empty\n");
	}else{
		int i;
			printf("stack elements are:\n");
		for(i=0;i<=top;i++){
			printf("%d\n",stack[i]);
		}}
}

int length(){
	if(isempty()){
			printf("stack is empty\n");
	}else{
		/*int count,i;
		for(i=0;i<=top;i++)
		{count++;}
		return count;*/
		return top+1;
	}
}


