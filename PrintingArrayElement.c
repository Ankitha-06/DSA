#include<stdio.h>
int a[10],i,n;
void create();
void display();
int main(){
    create();
    display();
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
