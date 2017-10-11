//
//  main.c
//  n的阶乘求尾数问题
//
//  Created by student on 15-11-11.
//  Copyright (c) 2015年 student. All rights reserved.
//

//两个问题
//输入任意一个数字N(N>=1) 算出N的阶乘(N!)末尾0的个数
//输入任意一个数字N(N>=1) 算出N的阶乘(N!)最后不为0的三位数

#include <stdio.h>
#include<math.h>

int main(void)
{
    
#if 0//第一题
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        if(n/pow(5,i)>0)//第一次循环计算有多少个5，第二次多少个25
        {
            c+=n/(pow(5,i));
        }
        else
            break;
    }
    printf("%d\n",c);
    
#else//第二题
    int i,n,y=1;
    scanf("%d",&n);
    for (i=1; i<=n; i++)//i循环从1到n
    {
        int j=0,x=i;//j存储5的个数，用来计算要除去2的个数
        while (x%5==0)
        {
            x/=5;//循环除去5
            j++;
        }
        if (j==0)
        {
            y*=x;//j==0，证明i不是5的倍数
            y%=1000;
        }
        else
        {
            y/=(2*j);//先除去对应5的个数的2
            y*=x;
            y%=1000;
        }
    }
    printf("%d",y);
#endif
    return 0;
}

