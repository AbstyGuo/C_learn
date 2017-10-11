//
//  main.c
//  最大递增子串
//
//  Created by qianfeng on 15-10-23.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include<string.h>
int main(int argc, const char * argv[])
{
    char a[100]={};
    scanf("%s",a);
    char *p=a,*s;
    int count=1,max=1,i;
    while (*p) {
        if (*p>='0'&&*p<='9') {
            if ((*(p+1)-*p)==1) {
                count++;
            }
            if (count>max) {
                max=count;
                s=p-1;
            }
        }
            p++;
    }
    for (i=0; i<max; i++) {
        printf("%c",s[i]);
    }
    return 0;
}

