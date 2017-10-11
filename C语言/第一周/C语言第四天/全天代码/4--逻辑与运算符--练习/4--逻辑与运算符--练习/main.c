//
//  main.c
//  4--逻辑与运算符--练习
//
//  Created by YanTianFeng on 15-10-13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    编写程序,用 if 模拟下述分段函数
//            x * 	x;   (x < 0)
//        y = 2*x + 1; (0 <= x <5)
//            4*x - 1; 	(x >= 5)
    int x,y;
    scanf("%d",&x);
    if(x < 0)
    {
        y = x * x;
    }
    //else if(0 <= x <2)
    else if(/*0 <= x <5*/x >= 0 && x < 5)
    {
        y = 2*x+1;
    }
    else
    {
        y = 4*x-1;
    }
    
    
    printf("y = %d\n",y);
    
    return 0;
}










