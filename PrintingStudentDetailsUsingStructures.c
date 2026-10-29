#include<stdio.h>
#include<string.h>
struct student{
    char usn[10];
    char name[20];
    int sem;
    char sec;
    float cgpa;
}s1;
int main(){
    strcpy(s1.usn,"3BR25CS150");
    strcpy(s1.name,"Ankitha");
    s1.sem=3;
    s1.sec='c';
    s1.cgpa=8.85;
    printf("%s\n%s\n%d\n%c\n%.2f\n",s1.usn,s1.name,s1.sem,s1.sec,s1.cgpa);
    return 0;

}