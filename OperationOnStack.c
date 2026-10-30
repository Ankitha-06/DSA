#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int s[MAX];
void push();
void pop();
void display();
int main(){
    int choice;
    do{
       printf("\n===PARKING AREA===\n1.Park\n2.Remove\n3.Display Area\n4.Exit\n");
       printf("Enter your choice:");
       scanf("%d",&choice);
       switch(choice){
        case 1:push();break;
        case 2:pop();break;
        case 3:display();break;
        case 4:exit(0);
        default:printf("Invalid choice!");
       } 
    }while(choice!=4);
}
void push(){
    int element;
    if(top==MAX-1){
        printf("Parking Area is full\n");
    }
    printf("Enter the element:");
    scanf("%d",&element);
    top++;
    s[top]=element;
    printf("Parking is done.\n");
}
void pop(){
    int element;
    if(top==-1){
        printf("Parking area is empty\n");
    }
    element=s[top];
    top--;
    printf("Removed car is:%d",element);
}
void display(){
    int i;
    if(top==-1){
        printf("Parking area is empty\n");
    }
    for(i=top;i>=0;i--){
        printf("%d\n",s[i]);
    }
    return;
}