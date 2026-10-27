#include<stdio.h>
int a[10],i,n;
void create();
void display();
void insert();
int main(){
    create();
    display();
    insert();
}
void create(){
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array elements one by one:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return ;
}
void display(){
    printf("Array elements are:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return ;
}
void insert(){
    int pos,element;
    printf("Enter position of the element:");
    scanf("%d",&pos);
    printf("Enter the element: ");
    scanf("%d",&element);
    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
        a[pos]=element;
    }
    n++;
    display();
    return ;
}