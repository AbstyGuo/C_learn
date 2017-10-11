//
//  main.c
//  10--指针和数组的关系---指针加1
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //指针加一
    int a  = 10;
    int * pi = &a;
    
    printf("%p\n",pi);
    printf("%p\n",pi+1);
    
    char c;
    char * pc = &c;
    printf("%p\n",pc);
    printf("%p\n",pc+1);
    
    double d;
    double * pd = &c;
    printf("%p\n",pd);
    printf("%p\n",pd+1);
    
    //指针变量加1,到底加了多少,是根据指针变量本身应该指向的数据的类型决定的.
    
    
    return 0;
}










