//
//  main.c
//  2--字符变量--demo
//
//  Created by YanTianFeng on 15-10-12.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    [字符变量的定义]
    //定义单个字符变量
    char c;
    //定义多个字符变量
    char c1,c2,c3;//在同一份代码中,多个变量名字不能重复
    
//    [字符变量的初始化]
    char c4 = 'a';
    char c5 = 97;
    
    
//    [字符变量的赋值]
    char c6;
    c6 = 'h';
    c6 = 104;
    
    
//    [字符变量的内存大小]
    //字符类型变量所占内存空间小为 1个字节.
    printf("sizeof(c6) = %ld\n",sizeof(c6));
    printf("sizeof(char) = %ld\n",sizeof(char));
//    [字符变量的读取/打印]
    char c7;
    //从键盘读取字符常量给字符变量赋值
//    scanf("%d",&c7);
//    //打印字符变量c7中的值,使用%c的数据格式
//    printf("%c\n",c7);
//    printf("%d\n",c7);
//    printf("大写字母:%c\n",c7-32);
//    printf("%c%c%c\n",'a',97,80+17);
    
    unsigned int i = 4200000000;
    printf("i = %u\n",i);
    return 0;
}









