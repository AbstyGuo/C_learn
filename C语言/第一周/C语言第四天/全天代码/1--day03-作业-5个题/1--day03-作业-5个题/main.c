//
//  main.c
//  1--day03-作业-5个题
//
//  Created by YanTianFeng on 15-10-13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
#if 0
//    1.编写程序,模拟分段函数
//    y = x^2 + 6; (x < 0)
//      = x*3 - 5; (x >=0)
//	输入 x的值,输出对应的y的值.
//
    int x,y;
    scanf("%d",&x);
    
    if(x < 0)
    {
        y = x * x + 6;
        //y = pow(x,2)+6;
    }
    else
    {
        y = x * 3 - 5;
    }
    
    printf("y = %d\n",y);
 
//	2.编写程序,输入两个数,输出两个数的最大值.
//
#elif 0
    int x,y;
    scanf("%d%d",&x,&y);
    
    if(x > y)
    {
        printf("最大数为:%d\n",x);
    }
    else
    {
        printf("最大数为:%d\n",y);
    }
    
//	3.编写程序,输入三个数,输出三个数的最大值.
//
#elif 0
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    
    if(x > y)
    {
        if(x > z)
        {
            printf("max = %d\n",x);
        }
        else
        {
            printf("max = %d\n",z);
        }
    }
    else
    {
        if(y > z)
        {
            printf("max = %d\n",y);
        }
        else
        {
            printf("max = %d\n",z);
        }
    }
    
//    4.输入一个不超过3位数的数,判断这个数,是否是带7 的数,是 输出 "是",不是,输出"不是".
#elif 0
    
    int x;
    int baiwei,shiwei,gewei;//分别保存百,十,个位数字.
    
    scanf("%d",&x);
    
    //分割这个数的每一位
    
    //117 % 10 == 7
    gewei  = x % 10;
    x /= 10;
    //11 % 10 == 1
    shiwei = x % 10;
    x /= 10;
    //1 % 10 == 1
    baiwei = x % 10;
    
    int flag = 0;//0表示不带7,1表示带7
    if(gewei == 7)
    {
        flag = 1;
    }
    
    if(shiwei == 7)
    {
        flag = 1;
    }
    
    if(baiwei == 7)
    {
        flag = 1;
    }
    //通过flag的值来判断这个数是否带7
    if(flag == 1)
    {
        printf("是带7的数\n");
    }
    else
    {
        printf("是不带7的数\n");
    }
    
    
//    5..输入一个不超过3位数的数,判断这个数,是否是7的倍数,,是 输出 "是",不是,输出"不是".
#elif 1
    
    int x ;
    scanf("%d",&x);
    if(x % 7 == 0)
    {
        printf("是\n");
    }
    else
    {
        printf("不是\n");
    }
    
#endif
    return 0;
}






