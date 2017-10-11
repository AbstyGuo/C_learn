//
//  main.c
//  逆序输出
//
//  Created by qianfeng on 15-10-21.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main(void)
{
#if 0
    char *p[10];
    char c[100]={};
    int i,j=0,k=0;
    for(i=0;i<100;i++)
    {
        scanf("%c",&c[i]);
        if(c[i]=='\n')
            break;
    }
    p[0]=strtok(c," ,");
    while((p[j++]))
    {
        p[j]=strtok(NULL," ,\n");
    }
    for(k=j-1;k>0;k--)
    {
        printf("%s ",p[k-1]);
    }
#else
    char str[100];
    strcpy(str,"hello my world");
    char *array[10];//保存分割地址。
    int count=0,i;//保存分割次数。
    char *p=strtok(str, " ");
    while (p) {
        array[count]=p;
        count++;
        p=strtok(NULL," ");
    }
    char newStr[100]={};
    for (i=count-1;i>=0 ; i--) {
        strcat(newStr,array[i]);
        if (i==0)
            strcat(newStr, "\0");
        else
            strcat(newStr, " ");
    }
    strcpy(str, newStr);
    printf("%s\n",str);
#endif
    return 0;
}

