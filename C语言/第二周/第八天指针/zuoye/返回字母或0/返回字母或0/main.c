//
//  main.c
//  返回字母或0
//
//  Created by student on 15-10-19.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
char shouzm(char * a,int n)
{
    int i;
    for (i=0; i<n; i++) {
        if ((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')) {
            return a[i];
        }
    }
        return '0';
}


int main(int argc, const char * argv[])
{
    char c[100];
    int n,i;
    for (i=0; ; i++) {
        scanf("%c",&c[i]);
        if (c[i]=='\n') {
            n=i;
            break;
        }
    }
    
    printf("%c\n",shouzm(c, n));
    
    return 0;
}

