//
//  main.c
//  8--结构体变量的内存大小
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//定义结构体
struct student
{
    char name[1];
    short age;
    char idNum;
};
//结构体变量在内存中的对齐规则是:按照结构体中最长字节数对其(除了数组).

int main(int argc, const char * argv[])
{
    struct student stu1;//在栈上创建结构体变量
    
    printf("%ld\n",sizeof(stu1));
    printf("%ld\n",sizeof(struct student));
    
    
    return 0;
}







