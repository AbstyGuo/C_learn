//
//  main.c
//  4--算术运算符--demo
//
//  Created by YanTianFeng on 15-10-12.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //算术运算符
    int a = 20, b = 20;
    double d1 = 3.14,d2 = 3.15;
    printf("%d %d %d %d %d\n",a+b,a-b,a*b,a/b,a%b);
//    printf("%d %d %d %d %d\n",d1+d2,d1-d2,d1*d2,d1/d2,d1%d2);
    
    
    float f;
//    d1%3;
    
    //[1] 相同类型的变量做算术运算,结果还是原类型
    //[2] % 运算符 两边必须是整数结果.
    //[3] / 运算符 组成的表达式运算结果是保留整数部分,省去小数部分.
    //[4] 不同类型的数据做运算,遵循以下原则:
    //    <1>短字节 向 长字节 看齐  char + short = short
    //    <2>整型   向 浮点型 看齐  int+double = double
    //    <3>单精度 向 双精度 看齐float+double = double
    //    <4>有符号 向 无符号 看齐
    //        int + unsigned int = unsigned int
    
    int i = 10;
    unsigned int ii = -10;
    if(i > ii)
    {
        printf("i > ii\n");
    }
    else
    {
        printf("i <= ii\n");
    }
    printf("%u,%u\n",i,ii);

    printf("%x\n",-1);
    
    return 0;
}








