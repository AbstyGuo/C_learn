//
//  main.c
//  作业2
//
//  Created by qianfeng on 15/10/13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

int main(int argc, const char * argv[]) {
    /*2.编写程序,输入一个成绩(0-100);
    如果成绩是 0-59  显示"D";
    如果成绩是 60-69显示"C";
    如果成绩是 70-89显示"B";
    如果成绩是 90-100 显示 "A";*/
    int a;
    scanf("%d",&a);
    if (!(a>=0&&a<=100)) {
        printf("输入成绩有误\n");
        exit(0);
    }
    a/=10;
    switch (a) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("D\n");break;
        case 6:printf("C\n");break;
        case 7:
        case 8:printf("B\n");break;
        case 9:
        case 10:printf("A\n");break;
    }
    
    return 0;
}
