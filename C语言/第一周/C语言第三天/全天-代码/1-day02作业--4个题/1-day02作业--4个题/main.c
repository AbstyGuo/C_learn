//
//  main.c
//  1-day02作业--4个题
//
//  Created by YanTianFeng on 15-10-12.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    1.编写一个八进制数转成十进制数的程序。
//    输入 10  输出 8
#if  0
    //使用scanf语句来从键盘读取数据输入到程序中.
    //读取的数据在程序中必须被存储起来.(存储使用int类型变量)
    //使用printf语句来输出想要输出的内容.
    int  i;//用来存储读入的数据
    scanf("%o",&i);//scanf这个函数从键盘读取数据,放入到&i开始的4字节的内存空间中.
    printf("十进制形式为:%d\n",i);
#elif 0
//    2.编写一个十六进制数转成八进制数的程序。
//	输入10  输出 20
    int b;
    scanf("%x",&b);
    printf("%o\n",b);
//
//
    
#elif 0
//    3.编写程序，输入两个数字，输出两数之和。
    int i1,i2;
    scanf("%d%d",&i1,&i2);
//    scanf("%d",&i2);
    printf("两数之和为:%d\n",i1+i2);
    
//    
//    4.编写程序,输入两个数字,存入到两个整型变量当中,交换两个整型变量的值.
#elif 1
    int i3,i4;
    scanf("%d%d",&i3,&i4);
    printf("i3 = %d i4 = %d\n",i3,i4);
    int temp = i3;
    i3 = i4;
    i4 = temp;
    printf("i3 = %d i4 = %d\n",i3,i4);
    
#endif
    
    return 0;
}









