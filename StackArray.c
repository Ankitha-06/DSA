#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int s[MAX];
int top=-1;
void push();
void pop();
void display();
int main(){
    int choice;
    do{
        printf("===Operation on stack===\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:exit(0);
            default:printf("Invalid choice!\n");
        }
    }while(choice!=4);
}
void push(){
    int element;
    if(top==MAX-1){
        printf("Stack is overflow.\n");
        return;
    }
    printf("Enter the element value:");
    scanf("%d",&element);
    top++;
    s[top]=element;
    return;
}
void pop(){
    int element;
    if(top==-1){
        printf("Stack is underflow.\n");
        return;
    }
    element=s[top];
    top--;
    printf("Deleted element is:%d\n",element);
    return;
}
void display(){
    int i;
    if(top==-1){
        printf("Stack is empty.");
        return;
    }
    for(i=top;i>=0;i--){
        printf("%d\n",s[i]);
    }
}