//
//  main.c
//  3--实型变量-demo
//
//  Created by YanTianFeng on 15-10-12.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
//    [实型变量的定义]
    //单个实型变量的定义
    //float类型的变量称为"单精度实型"变量.
    //float类型的变量可以存储小数点后6-8位.
    float f;
    //double类型的变量称为"双精度实型"变量.
    //double类型的变量可以存储小数点后13-15位.
    double d;
    //多个实型变量的定义
    float f1,f2,f3;
    double d1,d2,d3;
//    [实型变量的初始化]
    
    float f4 = 3.14f;
    float f5 = 1.0f,f6 = 2.0f;
    
    double d4 = 3.14;
    double d5 = 2.0,d6 = 7.0;
    
//    [实型变量的赋值]
    float f7;
    f7 = 3.0f;
    
    double d7;
    d7 = -3.1415926;
//    [实型变量的内存大小]
    
    printf("sizeof(f7) = %ld\n",sizeof(f7));//4
    printf("sizeof(float) = %ld\n",sizeof(float));//4
    
    printf("sizeof(d7) = %ld\n",sizeof(d7));//8
    printf("sizeof(double) = %ld\n",sizeof(double));//8
    
//    [实型变量的读取/打印]
    
    //%f,%lf格式默认是小数点后6位.
    //我们可以使用 %m.nf,%m.nlf来控制带小数点的数据的输出格式
    //m代表这个小数总共占m个字符宽度.n代表小数点后n位.
    //[注] 如果m太小,会强制输出.
    //[注] %-m.nf,中-代表左对齐,默认是右对齐的.
    //[注] %+m.nf,中+代表强制输出正负号(+ -).
    
    //例如: %5.2f  ,5代表这个小数总共占5个字符宽度.2代表小数点后2位.
    printf("%f\n",f7);
    printf("%lf\n",d7);
    
    printf("%+20.8lf\n",d7);
    
    double d8;
    scanf("%lf",&d8);
    printf("%.4lf\n",d8);
    
    
    return 0;
}






