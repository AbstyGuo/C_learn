//
//  main.c
//  整型变量(variable)--demo
//
//  Created by YanTianFeng on 15-10-10.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //整型变量
    int i;
    //标识符的命名规则:
    //<1>标识符只能由数字,字母,下划线 三者中的几中组成.
    //<2>不能以数字开头.
    //<3>不能和系统的关键字重复.
    //<4>可以用来给变量,函数,指针,结构体等等命名.
    
    //int 3; 不能以数字开头
    int a_int;
    //int a+i; +为多余的字符
    
    //定义单个变量
    //向计算机申请4个字节的内存空间,来存储数据.这4字节空间的名字是int_i,我们(程序员)就可以通过名字来操作这个4字节空间.
    int int_i;
    //定义多个变量
    int i1,i2,i3;
    
    //变量的初始化 -- 在变量定义的同时,给变量一个初始值.
    int i4 = 11;//把常量10赋值给变量i4,i4所代表的内存空间中就存储有10这个数.
    //取出变量i4中的数据
    printf("%d%d%d\n",i4,i4,100);//把变量i4中的数据以 十进制整型的形式打印出来
    
    //变量的赋值 -- 在变量定义之后,给变量赋一个新的值.
    i4 = 20;//把20存储到变量i4所代表的内存空间中.
            //如果i4的内存空间总原先有数据,会覆盖掉原来的数据.
    printf("i4 = %d\n",i4);
    
    //整型变量所占内存关系
    short s;
    long l;
    printf("short 内存大小为:%ld\n",sizeof(s));//2
    printf("long 内存大小为:%ld\n",sizeof(l));//8
    printf("int 内存大小为:%ld\n",sizeof(i4));//4
    printf("int 内存大小为:%ld\n",sizeof(int));//4
    //sizeof(int),表示int类型所定义的变量将要占的内存大小
    
    scanf("%d",&i4);//程序执行到这儿,会阻塞.等待输入.
    //[注] 使用scanf进行数据输入时,必须指定地址.
    printf("i4 = %d\n",i4);
    
    //unsigned
    
    unsigned int iphone6 = -100;
    //unsigned 关键字定义的变量一般是用来存储 工程进度,人的身高,安装进度等等这些不可能为负数的数据.
    
    printf("%d\n",iphone6);
    
    return 0;
}














