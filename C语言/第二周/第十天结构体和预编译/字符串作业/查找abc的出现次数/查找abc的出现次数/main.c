//
//  main.c
//  查找abc的出现次数
//
//  Created by student on 15-10-21.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int TimeofSubStringFaString(const char *faStr,const char *subStr)
{
    int count=0;//保存子串出现的次数
    char *p;//保存每次调用strstr查找的子串的地址;
    p=strstr(faStr, subStr);
    while (p)
    {
        count++;
        p=strstr(p+strlen(subStr), subStr);//可以使用p=strstr(++p, subStr)来把重复的字符也统计。
        //找到subStr返回地址，没找到，返回NULL。
    }
    return count;
}
int main(int argc, const char * argv[])
{
    char c[100]="abcbcabcedfabc";
    printf("出现次数count=%d\n",TimeofSubStringFaString(c, "abc"));
    return 0;
}

