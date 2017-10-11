//
//  main.c
//  11-aoti函数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{

    //atoi函数
    char * p = "123456";
    char * p1= "123456abc";
    char * p2 = "a123456";
    char * p3 = "001abc";
    int ret = atoi(p);
    
    printf("ret = %d\n",ret);
    printf("%d\n",atoi(p1));
    printf("%d\n",atoi(p2+3));
    printf("%d\n",atoi(p3));
    
    
    
    return 0;
}






