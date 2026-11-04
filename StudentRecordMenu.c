#include<stdio.h>
#include<string.h>
#define MAX 50
struct student{
    char usn[10];
    char name[20];
    char branch[5];
    int sem;
    float cgpa;
};
struct student s[MAX];
int n=0;
void create();
void display();
void insert();
void delete();
void search();
int main(){
    int choice;
    do{
        printf("====Student Record Menu====\n");
        printf("1.Create Records\n");
        printf("2.Display Records\n");
        printf("3.Insert Records\n");
        printf("4.Delete Records\n");
        printf("5.Search by USn\n");
        printf("6.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:create();break;
            case 2:display();break;
            case 3:insert();break;
            case 4:delete();break;
            case 5:search();break;
            case 6:printf("Program ended.\n");
            default:printf("Invalid chpice!\n");
        }
    }while(choice!=6);
    return 0;
}
void create(){
    int i;
    printf("Enter number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Student %d:",i+1);
        printf("USN:");
        scanf("%s",s[i].usn);
        printf("NAME:");
        scanf("%s",s[i].name);
        printf("BRANCH:");
        scanf("%s",s[i].branch);
        printf("SEMESTER:");
        scanf("%d",&s[i].sem);
        printf("CGPA:");
        scanf("%f",&s[i].cgpa);
    }
}
void display(){
    int i;
    printf("USN\tNAME\tBRANCH\tSEMESTER\tCGPA\n");
    for(i=0;i<n;i++){
        printf("%s\t%s\t%s\t%d\t%f\n",s[i].usn,s[i].name,s[i].branch,s[i].sem,s[i].cgpa);
    }
}
void insert(){
    int pos,i;
    printf("Enter position to insert:");
    scanf("%d",&pos);
    if(pos<1 || pos>n+1){
        printf("Invalid position!\n");
        return;
    }
    for(i=n;i>=pos;i--){
        s[i]=s[i-1];
    }
    printf("Enter details for the new student:\n");
    printf("USN:");
    scanf("%s",s[pos-1].usn);
    printf("NAME:");
    scanf("%s",s[pos-1].name);
    printf("BRANCH:");
    scanf("%s",s[pos-1].branch);
    printf("SEMESTER:");
    scanf("%d",&s[pos-1].sem);
    printf("CGPA:");
    scanf("%f",&s[pos-1].cgpa);
    n++;
    printf("Student inserted successfully!\n");
    display();
}
void delete(){
    int pos,i;
    printf("Enter position to delete:");
    scanf("%d",&pos);
    if(pos<1 || pos>n){
        printf("Invalid position!\n");
        return;
    }
    for(i=pos-1;i<n-1;i++){
        s[i]=s[i+1];
    }
    n--;
    printf("Student deleted successfully!\n");
    display();
}
void search(){
    char usn[10];
    int i,found=0;
    printf("Enter USN to search:");
    scanf("%s",usn);
    for(i=0;i<n;i++){
        if(strcmp(s[i].usn,usn)==0){
            printf("Student found:\n");
            printf("USN:%s\n",s[i].usn);
            printf("NAME:%s\n",s[i].name);
            printf("BRANCH:%s\n",s[i].branch);
            printf("SEMESTER:%d\n",s[i].sem);
            printf("CGPA:%f\n",s[i].cgpa);
            return;
        }
    }
        printf("Student with USN not found!\n");
}