//
//  main.c
//  7--结构体变量的定义---堆内存
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义结构体
struct student
{
    char name[100];//名字
    int age;//年龄
    int idNum;//学号
};
int main(int argc, const char * argv[])
{

    struct student stu1;//在栈内存中创建
    strcpy(stu1.name, "lining");
    stu1.age = 20;
    stu1.idNum = 1000;
    
    //1开辟堆内存
    struct student * p =
    malloc(sizeof(struct student));
    struct student ps[10];
    //printf("%ld\n",sizeof(p));
    
    //p->name = "lining";
    strcpy(p->name, "ningzetao");
    p->age = 24;
    p->idNum = 1001;
    
    int * pi = &stu1;
    *pi =  10;
    
    //(*(p+9)).age = 100;
    //p[9].age = 100;
    //(p+9)->age = 100;
    
    printf("%s,%d,%d\n",p->name,p->age,p->idNum);
    
    //int * pi = malloc(10);
    
    //p[0].age = 20;
    
    //((struct student *)pi)
    
    return 0;
}







