#include <stdio.h>
int main()
{
    //定义双精度数a,b
    double a,b;
    //定义运算符
    char cal;
    printf("请输入您要计算的算式");
    //对算式的录入，注意格式为a cal b
    scanf("%lf %c %lf",&a,&cal,&b);
    //对运算符的种类讨论
    switch(cal)
    {
        case '+':
        printf("结果是%f\n",a+b);
        //跳出整个switch，不再进行其他的语句
        break;
        case '-':
        printf("结果是%f\n",a-b);
        break;
        case '*':
        printf("结果是%f\n",a*b);
        break;
        case '/':
        //除数不能为0
        if(b==0){
            printf("错误\n");
            return 1;
        }
        else
        printf("结果是%f\n",a/b);
        break;
    default:
    printf("抱歉不支持该语句\n");

    }return 0;

}