//
//  main.c
//  16--strtok函数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, const char * argv[])
{

    //strtok函数
    
    char str[100] = "Yes,I am a bad man";
    
    char * p = strtok(str, " ,");
    while(p)
    {
        printf("%s\n",p);
        p = strtok(NULL," ,");
    }
    
//    printf("%s\n",str);
    
    
    return 0;
}








