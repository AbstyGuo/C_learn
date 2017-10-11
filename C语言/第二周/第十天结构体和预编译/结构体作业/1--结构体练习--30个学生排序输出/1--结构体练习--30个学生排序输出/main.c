//
//  main.c
//  1--结构体练习--30个学生排序输出
//
//  Created by YanTianFeng on 15-10-22.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//使用结构体定义学生结构体,用定义的结构体创建有30个元素的结构体数组,存入30个学生的信息,对30个学生进行排序(使用age排序),并输出排序后的结果.

//结构体:

struct student
{
    char name[20];
    int age;
};

//功能一: 传入数组,输入信息
void inputStudentInfo(struct student * stus,int length)
{
    for(int i = 0;i < length;i++)
    {
        //*(stus+i)
        //使用sprintf可以把任意格式的数据转换为字符串,存入一个字符数组中.
        sprintf(stus[i].name,"%s%d%d","zhangsan",i,i);
        
//        strcpy(stus[i].name,"zhangsan");
        stus[i].age = rand()%3+8;
    }
}

//功能二: 对数组的30个学生进行排序(用age排序)
void sort(struct student * stus,int length)
{
    //控制趟数
    for(int i = 0;i < length-1;i++)
    {
        //控制具体某一趟比较的次数
        for(int j = 0;j < length-i-1;j++)
        {
            if(stus[j].age > stus[j+1].age)
            {
                struct student temp;
                temp = stus[j];
                stus[j] = stus[j+1];
                stus[j+1] = temp;
            }
        }
    }
}

//功能三: 输出数组中的30个学生的信息
void printStudentInfo(struct student * stus,int length)
{
    for(int i = 0;i < length;i++)
    {
        printf("%d(%s,%d)\n",i+1,stus[i].name,stus[i].age);
    }
}


int main(int argc, const char * argv[])
{
    struct student stus[30];
    
    //给数组输入信息
    inputStudentInfo(stus, 30);
    
    //打印输出结构体数组的信息
    printStudentInfo(stus, 30);
    
    //排序
    sort(stus, 30);
    
    //输入排序的结果
    printStudentInfo(stus, 30);
    
    return 0;
}








