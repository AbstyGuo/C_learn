//
//  main.c
//  9--typedef关键字
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//定义结构体
typedef struct student
{
    char name[10];
    int age;
    int idNum;
}stu2;
//stu2是一个全局结构体变量

//typedef关键字的作用:
//<1>定义一个新的类型名
//<2>使原来的类型名变得更加简短.
//<3>可以让程序员有机会修改结构体的类型名.

struct student global_stu;

int main(int argc, const char * argv[])
{
    struct student stu1;
    
    stu2 stu3;
    stu2 stu4,stu5;
    stu2 stus[10];
    
    struct student stu6;
    
//    stu2.age = 20;
//    stu2.idNum = 1001;
//    strcpy(stu2.name,"zhangsan");
    
    typedef int a;
    
    a a1 = 10;
    a a2,a3;
    typedef int a4;
    
    a4 a5;
    
    printf("a1 = %d\n",a1);
    
    
    printf("%s\n",__FILE__);
    printf("%s\n",__func__);
    printf("%d\n",__LINE__);
    
    return 0;
}





