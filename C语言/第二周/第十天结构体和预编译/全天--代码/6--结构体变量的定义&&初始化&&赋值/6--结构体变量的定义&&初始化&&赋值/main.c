//
//  main.c
//  6--结构体变量的定义&&初始化&&赋值
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//结构体变量在使用之前必须先定义结构体
//结构体的定义必须在所有函数之外.

//学生结构体
struct student
{
    char name[100];//名字
    int age;//年龄
    int sex;//性别
    int idNum;//学号
};
//struct student是一个新的类型.
//使用这个类型struct student可以创建出多个结构体变量.
//每个结构体变量都可以用来描述某一个学生的信息.

int main(int argc, const char * argv[])
{
    //结构体变量的定义
    struct student stu1;//创建了一个struct student类型的变量
    struct student stu2,stu3,stu4;
    struct student stus[100];
    
    //结构体变量的初始化
    struct student stu5 = {"ningzetao",24,1,1001};
    
    printf("%s,%d,%d,%d\n",stu5.name,stu5.age,stu5.sex,stu5.idNum);
    //.是成员操作符
    
    struct student students[3] = {
        {"lindan",35,1,1002},
        {"guoailun",23,1,1003},
        {"yijianlian",27,1,1004}};
    
    for(int i = 0;i < sizeof(students)/sizeof(struct student);i++)
    {
       printf("%s,%d,%d,%d\n",students[i].name,students[i].age,students[i].sex,students[i].idNum);
    }
    
    //结构体变量的赋值
    
    struct student stu6;
    stu6 = stu5;//把stu5中的每一个成员的数据,依次拷贝到stu6的每一个成员中.
    printf("%s,%d,%d,%d\n",stu6.name,stu6.age,stu6.sex,stu6.idNum);
    
    return 0;
}








