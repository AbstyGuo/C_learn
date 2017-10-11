//
//  main.c
//  简单运算符
//
//  Created by qianfeng on 15-10-21.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char * argv[])
{
    char a[100]={},b[100]={};
    char *p1,*p2;
    int i,x,y;
    scanf("%s",a);
    strcpy(b, a);
    p1=strtok(a,"+-*/");
    p2=strtok(NULL, "+-*/");
    x=atoi(p1),y=atoi(p2);
    for (i=0; ; i++) {
        if (b[i]=='+'){
            printf("%d+%d=%d\n",x,y,x+y);break;}
        else if(b[i]=='-'){
            printf("%d-%d=%d\n",x,y,x-y);break;}
        else if(b[i]=='*'){
            printf("%d*%d=%d\n",x,y,x*y);break;}
        else if (b[i]=='/'){
            printf("%d/%d=%d\n",x,y,x/y);break;}
    }
    return 0;
}

