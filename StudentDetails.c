#include<stdio.h>
struct student{
    char usn[10];
    char name[20];
    int ia1,ia2,ia3;
}s[70];
int main(){
    int i,n;
    printf("Enter how many student details you want to read:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d student details(usn,name,ia1,ia2,ia3)\n",i+1);
        scanf("%s%s%d%d%d",s[i].usn,s[i].name,&s[i].ia1,&s[i].ia2,&s[i].ia3);
    }
    printf("USN\tNAME\tIA1\tIA2\tIA3\n");
    for(i=0;i<n;i++){
        printf("%s\t%s\t%d\t%d\t%d\n",s[i].usn,s[i].name,s[i].ia1,s[i].ia2,s[i].ia3);
    }
}