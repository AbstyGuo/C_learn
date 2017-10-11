//
//  main.c
//  paixu
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[6]={1,3,6,9,85,1};
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        for(j=i;j<6;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<6;i++)
    {printf("%d\n",a[i]);}
    return 0;
}
