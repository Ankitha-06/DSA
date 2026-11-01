#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 4
int Q[MAX_SIZE];
int r=-1,f=-1;
void insert(){
    int element;
    if(r==MAX_SIZE-1){
        printf("Queue is overflow\n");
        return;
    }
    printf("Enter element to be insert:");
    scanf("%d",&element);
    Q[++r]=element;
    if(f==-1)
      f=0;
    printf("New element inserted successfully\n");
}
void delete(){
    int element;
    if(f==-1){
        printf("Queue is empty.\n");
        return;
    }
    printf("Deleted element is=%d\n",Q[f]);
    if(f==r)
      f=r=-1;
    else
      f++;
}
void display(){
    if(f==-1){
        printf("Queue is empty.\n");
        return;
    }
    printf("The content of the queue is:");
    for(int i=f;i<=r;i++){
        printf("%d\t",Q[i]);
    }
}
int main(){
    int ch;
    do{
        printf("\n===Operation on queue===\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:insert();break;
            case 2:delete();break;
            case 3:display();break;
            case 4:exit(0);
            default:printf("Invalid choice!\n");
        }
    }while(ch!=4);
}