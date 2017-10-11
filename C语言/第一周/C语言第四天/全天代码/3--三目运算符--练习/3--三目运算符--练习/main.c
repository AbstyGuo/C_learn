//
//  main.c
//  3--三目运算符--练习
//
//  Created by YanTianFeng on 15-10-13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
#if 0
//    3--三目运算符--练习
//    1.编写程序,使用三目运算符,模拟分段函数
//    y = x^2 + 6; (x < 0)
//      = x*3 - 5;   (x>=0)
//	输入 x的值,输出对应的y的值.
    
    int x,y;
    scanf("%d",&x);
    
    (x < 0)?(y = x*x + 6):(y = x*3-5);
    
    printf("y = %d\n",y);
#elif 0
    
//  2.编写程序,输入两个数,输出两个数的最大值.
    
    int x,y;
    scanf("%d%d",&x,&y);
    printf("max = %d\n",x > y?x:y);
#elif 1
//	3.编写程序,输入三个数,输出三个数的最大值.
    
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    printf("max = %d\n",
           (x > y?x:y)>z ? (x > y?x:y) : z);
    
    
#endif
    return 0;
}









