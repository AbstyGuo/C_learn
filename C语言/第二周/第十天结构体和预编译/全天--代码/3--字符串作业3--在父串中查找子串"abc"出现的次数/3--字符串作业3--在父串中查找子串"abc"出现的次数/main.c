//
//  main.c
//  3--字符串作业3--在父串中查找子串"abc"出现的次数
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//在字符串”abcbcabcedfabc”中查找”abc”出现的次数

int timesOfSubStringInFaString(const char * faStr,const char * subStr)
{
    int count = 0;//保存subStr出现的次数.
    char * p; //保存每次调用strstr查找到的subStr的地址
    p = strstr(faStr, subStr);
    while(p)
    {
        count++;
        p = strstr(p+strlen(subStr), subStr);
    //找到subStr返回地址,没找到,返回NULL
    }
    return count;
}

int main(int argc, const char * argv[])
{

    
    char * p = "ababaabaedfabc";
    int count = timesOfSubStringInFaString(p, "aba");
    
    printf("count = %d\n",count);
    
    
    return 0;
}









