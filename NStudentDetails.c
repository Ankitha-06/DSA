#include<stdio.h>
struct student{
    char usn[10];
    char name[20];
    int sem;
    char sec;
    float cgpa;
}s[100];
int main(){
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d student details(usn,name,sem,sec,cgpa)\n",i+1);
        scanf("%s%s%d%s%f",s[i].usn,s[i].name,&s[i].sem,&s[i].sec,&s[i].cgpa);
    }
    printf("USN\t\tNAME\tSEM\tSEC\tCGPA\n");
    for(i=0;i<n;i++){
        printf("%s\t\t%s\t%d\t%s\t%.2f\n",s[i].usn,s[i].name,s[i].sem,s[i].sec,s[i].cgpa);
    }
    return 0;
}
