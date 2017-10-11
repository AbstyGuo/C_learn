//
//  main.c
//  1--输入一个成绩,输出对应的等级
//
//  Created by YanTianFeng on 15-10-14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{

//    2.编写程序,输入一个成绩(0-100);
//	如果成绩是 0-59  显示"D";
//	如果成绩是 60-69 显示"C";
//	如果成绩是 70-89 显示"B";
//	如果成绩是 90-100 显示 "A";
    
    int score;//用来保存成绩
    scanf("%d",&score);
    
    //判断输入的成绩score是否有误
    //成绩有误,使用exit(0)系统函数,退出程序.
    //成绩无误,继续执行if后的打印等级相关的代码
    if(!(score >= 0 && score <= 100))
    {
        printf("输入的成绩有误!\n");
        exit(0);
    }
    switch(score/10)
    {
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






