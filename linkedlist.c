#include<stdio.h>
#include<stdlib.h>
void append();
int length();
void display();
void insertatbegin();
void insertatrandom();
void search();
void begindelete();
struct node{
	int data;
	struct node *link;
};
struct node *root=NULL;
int main(){
	int ch;
	while(1){
		printf("\t **** Main Menu ****\n");
		printf(" 1)append\n 2)length\n 3)display\n 4)insertatbegin\n 5)insertatrandom\n 6)search\n 7)begindelete");
		printf("enter ur choice:\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:append();
				break;
			case 2:printf(" length = %d\n",length());
				break;
			case 3:display();
				break;
			case 4:insertatbegin();
				break;
			case 5:insertatrandom();
				break;
			case 6:search();
				break;
			case 7:begindelete();
				break;
		}}}
		
void append(){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL){
		root=temp;}
	else{struct node *p;
	p=root;
	while(p->link!=NULL){
	p=p->link;	
	}
	p->link=temp;
	}	
}

int length(){
	int count=0;
	struct node *temp;
	temp=root;
	while(temp!=NULL){
		count++;
		temp=temp->link;
	}
	return count;
}

void display(){
	struct node *temp;
	temp=root;
	if(root==NULL){
		printf("no elements in list\n");
	}
	while(temp!=NULL)
	{printf(" %d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
}

void insertatbegin(){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data:\n");
	scanf("%d",&temp->data);
	if(root==NULL){
		root=temp;
	}else{
	temp->link=root;
	root=temp;
	}	}
	
void insertatrandom(){
	int loc,i=1;
	printf("enter loc:\n");
	scanf("%d",&loc);
	if(loc>length()){
		printf("\n cannot insert node \n");}
else{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter data:\n");
	scanf("%d",&temp->data);
			p=root;
			while(i<loc){
				p=p->link;
				i++;	
			}
			temp->link=p->link;
			p->link=temp;	
		}
}


void search(){
	int se,found=0,i=0,b;
	printf("enter search data:\n");
	scanf("%d",&se);
	struct node *temp,*ptr;
	temp=root;
if(ptr==NULL){
	printf("Empty list\n");
}else{
		while(temp!=NULL)
	{ if(se==temp->data){
			b=i;
			found++;
			ptr=temp;
	    }
		temp=temp->link;
		i++;
	}
	
	if(found>0){
		printf("element found at position = %d and location =%d\n",b,ptr);
	}else{
		printf("element not found\n");
	}
}
}

void begindelete(){
int loc;
printf("enter location:\n");
scanf("%d",loc);
if(loc>length()){
	printf("invalid location\n");
}else
if(loc==1){
	struct node *temp;
	temp=root;
	root=temp->link;
	temp->link=NULL;
	free(temp);
}


	
}



