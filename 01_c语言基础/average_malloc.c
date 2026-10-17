#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("你要多少个数组？");
    int n;
    if(scanf("%d",&n)!=1)
    {
        printf("你输入的数字不对");
        return 1;
    }
    int *arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf("未申请成功");
        return 1;
    }
    int i,a=0;
    for(i=0;i<n;i++)
    {
        arr[i]=i*10;
        a=a+arr[i];
    }
    
    int x =a/n;
    printf("平均数是%d\n",x);
    free (arr);
    arr =NULL;
    return 0;
}