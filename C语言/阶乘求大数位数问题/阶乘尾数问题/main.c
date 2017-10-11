//
//  main.c
//  阶乘尾数问题
//
//  Created by student on 15-11-9.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        if(n/pow(5,i)>0)
        {
            c+=n/(pow(5,i));
        }
        else
            break;
    }
    printf("%d\n",c);
    return 0;
}
