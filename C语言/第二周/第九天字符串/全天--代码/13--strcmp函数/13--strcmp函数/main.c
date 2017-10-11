//
//  main.c
//  13--strcmp函数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{

    //strcmp函数
    //string compare
    char * str1 = "abcc";
    char * str2 = "abcd";
    int ret = strcmp(str1, str2);
    
    printf("ret = %d\n",ret);
    
    if(ret > 0)
    {
        printf("str1 大于 str2\n");
    }
    else if(ret == 0)
    {
        printf("str1 等于 str2\n");
    }
    else
    {
        printf("str1 小于 str2\n");
    }
    
    return 0;
}







