//
//  main.c
//  5--字符串的书写--demo
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int global_a;
int main(int argc, const char * argv[])
{

    //字符串的书写
    char * p = "hello world";
    //""引起来的字符串最后都有一个结束标识'\0'
    printf("%p\n",&global_a);
    
    printf("%p\n","helloworld");
    
    printf("%p\n",p);
    
    printf("%p\n",main);
    
    //""引起来的字符串存储在代码区.
    //相同的字符串在内存中只存储一份.
    int i = 0;
    while(1)
    {
        if(*(p+i) == '\0')
        {
            break;
        }
//        printf("%c",*(p+i));
        
        printf("%c",p[i]);
        i++;
    }
    
    return 0;
}







