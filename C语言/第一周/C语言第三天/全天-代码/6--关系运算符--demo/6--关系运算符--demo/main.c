//
//  main.c
//  6--关系运算符--demo
//
//  Created by YanTianFeng on 15-10-12.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //关系运算符
    
    printf("%d\n",3<5);
    printf("%d\n",3>=5);
    
    //关系表达式往往和 if等流程控制语句结合起来使用.
    
    
//    输入一个字符, 如果是数字字符,则输出”是”,如果不是,输出”不是”
    
    char c;//用来存储输入的字符
    scanf("%c",&c);//从键盘读取一个字符
    
    if(c >= '0' && c <= '9')//判断条件是否成立
    {
        printf("是\n");//成立时,输出
    }
    else
    {
        printf("不是\n");//不成立时,输出
    }
    
    printf("我在if-else语句之后\n");//成立,不成立,都要输出.
    
    if(3<5)
    {
        printf("3<5\n");
    }
    else
    {
        printf("3 >= 5\n");
    }
    int a = 1;
//  if(a = 5)
    //一定要注意 = 和 == 的区别
    if((a == 5))
    {
        printf("3 == 5\n");
    }
    else
    {
        printf("3 != 5\n");
    }
    
    
    
    return 0;
}








