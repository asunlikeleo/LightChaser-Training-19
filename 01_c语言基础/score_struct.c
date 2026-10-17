#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    char sex;
    double score[3];
}stu;
int main()
{
    struct student stu;
    int i;
    scanf("%s %c",stu.name,&stu.sex);
    for(i=0;i<3;i++)
    scanf("%lf",&stu.score[i]);
    printf("名字 性别 考试成绩1 考试成绩2 考试成绩3\n");
    printf("%-8s %-2c",stu.name,stu.sex);
    for(i=0;i<3;i++)
    printf("%8.2lf",stu.score[i]);
return 0;

}