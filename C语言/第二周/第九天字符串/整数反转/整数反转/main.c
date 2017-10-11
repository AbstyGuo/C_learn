//
//  main.c
//  整数反转
//
//  Created by student on 15-10-20.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int fan(int a)
{
    int i,j,c[20],s=0;
    for (i=0; i<20; i++) {
        c[i]=a%10;
        a=a/10;
        if (a==0) {
            break;
        }
    }
    for (j=0;j<=i;j++) {
        s=s+c[j]*pow(10,i-j);
    }
    return s;
}

int main(int argc, const char * argv[])
{

    int a;
    scanf("%d",&a);
    printf("%d\n",fan(a));
    return 0;
}

