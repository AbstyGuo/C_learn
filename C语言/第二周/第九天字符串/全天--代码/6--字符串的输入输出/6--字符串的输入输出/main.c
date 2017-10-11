//
//  main.c
//  6--字符串的输入输出
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //string
    //字符串的输入输出
    
    char * p = "hello world";//""的字符串是存放在代码区的.
    
    //输出
    printf("%s\n",p);//%s的格式输出字符串时,只需要给定字符串的首地址就可以.到'\0'为止.
    //输入
    char str[100];//str数组是存放在栈空间中的.
    scanf("%s",str);//%s的格式可以读入一个字符串.到space或者 enter 为止.
    printf("%s\n",str);
    
    printf("%s\n",p+3);
    
    //*p = 'H';
    //""引起来的字符串是个只读字符串,存储在代码区.不可以通过指针修改字符串的内容.
    
    str[0] = 'H';
    printf("%s\n",str);
    
    return 0;
}








