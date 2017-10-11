//
//  main.c
//  接近o字符
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c[10]={};
    int a,b;
    for (int i=0; i<10; i++) {
        scanf("%c",&c[i]);
    }
   
    for (int j=0; j<10; j++) {
        for (int k=j+1; k<10; k++) {
                a=c[j]-'o';
                b=c[k]-'o';
            a=a>=0?a:-a;
            b=b>=0?b:-b;
            if (a>b) {
                char temp=c[j];
                c[j]=c[k];
                c[k]=temp;
            }
        }
    }
    printf("%c\n",c[0]);
    return 0;
}
