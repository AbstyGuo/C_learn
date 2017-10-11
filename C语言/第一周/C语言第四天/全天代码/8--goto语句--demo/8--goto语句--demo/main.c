//
//  main.c
//  8--goto语句--demo
//
//  Created by YanTianFeng on 15-10-13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //格式一 (很少用)
    goto AA;
    printf("1111111\n");
AA:
    printf("2222222\n");
    
    //格式二
    int i = 0;
BB:
    i++;
    printf("%02dhehe\n",i);
    if(i == 10)
    {
        goto CC;
    }
    goto BB;
CC:
    
    
    return 0;
}





