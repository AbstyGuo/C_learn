//
//  main.c
//  结构体作业
//
//  Created by qianfeng on 15-10-21.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct student
{
    char name[15];
    int age;
};
void inputStudentInfo(struct student * stus,int length)
{
    int i;
    char *p="ajdfkajeg";
       srand(time(0));
    for (i=0; i<length; i++) {
        sprintf(stus[i].name, "%s%d%d","zhangsan",i,i);
        //使用sprintf函数可以把任意格式的数据转换为字符串，存入一个字符数组中。

       // strcpy(stus[i].name,p++);
        stus[i].age=rand()%10+20;
    }
    
}
void sort(struct student * stus,int length)
{
    int i,j;
    for (i=0; i<length-1; i++) {
        for (j=i+1; j<length; j++) {
            if (stus[i].age>stus[j].age) {
                struct student temp=stus[i];
                stus[i]=stus[j];
                stus[j]=temp;
            }
        }
    }
}
void printStudentInfo(struct student * stus,int length)
{
    int i;
    for (i=0; i<length; i++) {
        printf("%d(%s %d)\n",i+1,stus[i].name,stus[i].age);
    }
}

int main(int argc, const char * argv[])
{
    struct student stus[30];
    inputStudentInfo(stus, 30);
    sort(stus, 30);
    printStudentInfo(stus, 30);
    return 0;
}

