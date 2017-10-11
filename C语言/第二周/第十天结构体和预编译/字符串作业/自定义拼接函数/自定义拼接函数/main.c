//
//  main.c
//  自定义拼接函数
//
//  Created by student on 15-10-20.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include<stdio.h>
#include<string.h>
memset(<#dest#>, <#val#>, <#len#>)
int main(void)
{
    char *p[10];
    char c[100]={};
    int i,j=0,k=0;
    for(i=0;i<100;i++)
    {
        scanf("%c",&c[i]);
        if(c[i]=='\n')
            break;
    }
    p[0]=strtok(c," ");
    while((p[j++]))
    {
        p[j]=strtok(NULL," ");
    }
    for(k=j-1;k>=0;k--)
    {
        printf("%s",p[k]);
    }
    return 0;
}
