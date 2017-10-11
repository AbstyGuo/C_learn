//
//  main.c
//  单词字符串变大小写加空格
//
//  Created by qianfeng on 15-10-22.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void separateString(const char *str)
{
    char newStr[100]={};
    int i=0;//newStr中当前将要存储字符的下标。
    while (*str) {
        char c=*str;
        //把所有的大写转小写
        if (c>='A'&&c<='Z') {
            c+=32;
        }
        //放入新字符串中。
        newStr[i++]=c;
        if ((*str>='A'&&*str<='Z'&&*(str+1)>='a'&&*(str+1)<='z')||(*(str+1)>='A'&&*(str+1)<='Z'&&*str>='a'&&*str<='z')) {
            //在单词结尾添加‘ ’
            newStr[i++]=' ';
        }
        str++;
    }
    newStr[0]-=32;//首个单词首字母大写。
    newStr[i]='\0';
    printf("新字符串为：%s\n",newStr);
}
int main(int argc, const char * argv[])
{
    char a[100]={};
    strcpy(a, "HELLOmyDEARworld");
    separateString(a);
    return 0;
}

