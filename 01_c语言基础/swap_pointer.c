#include<stdio.h>
//定义函数swap，用来将c，d的地址放入以及调换值
void swap(int *a,int *b)
{
    //引用临时变量temp，否则直接*a=*bb的值会被覆盖掉
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int c=10,d=20;
    printf("输入前c是%d,d是%d\n",c,d);
    //输入c,d的地址，C语言要想让一个函数修改另一个函数里的变量，必须传那个变量的地址
    swap(&c,&d);
    printf("输出的c是%d,d是%d\n",c,d);
    return 0;
}//如果不用指针直接传值c,d的话只是代入值，a,b无法找到c,d的地址来反过来修改