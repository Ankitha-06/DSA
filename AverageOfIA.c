#include<stdio.h>
struct student{
    char usn[10];
    char name[20];
    int ia1,ia2,ia3;
    float avg;
}s[70];
int main(){
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d student details (usn,name,ia1,ia2,ia3)\n",i+1);
        scanf("%s%s%d%d%d",s[i].usn,s[i].name,&s[i].ia1,&s[i].ia2,&s[i].ia3);
    }
    for(i=0;i<n;i++){
        if((s[i].ia1<s[i].ia2)&&(s[i].ia1<s[i].ia3)){
            s[i].avg=(s[i].ia2+s[i].ia3)/2;
        }
        else if((s[i].ia2<s[i].ia1)&&(s[i].ia2<s[i].ia3)){
            s[i].avg=(s[i].ia1+s[i].ia3)/2;
        }
        else if((s[i].ia3<s[i].ia1)&&(s[i].ia3<s[i].ia2)){
            s[i].avg=(s[i].ia1+s[i].ia2)/2;
        }
        else{
            s[i].avg=s[i].ia1;
        }
    }
    printf("USN\tNAME\tIA1\tIA2\tIA3\tAVERAGE\n");
    for(i=0;i<n;i++){
        printf("%s\t%s\t%d\t%d\t%d\t%.2f\n",s[i].usn,s[i].name,s[i].ia1,s[i].ia2,s[i].ia3,s[i].avg);
    }
    return 0;

}