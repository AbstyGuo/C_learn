//
//  main.c
//  作业1
//
//  Created by qianfeng on 15/10/13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include<unistd.h>

int main(int argc, const char * argv[]) {
    // 输入一个时间，输出这个时间之后一秒的时间
    int h,m,s;
  //  scanf("%d:%d:%d",&h,&m,&s);
//    if (s+1<60)
//        printf("%d:%d:%d\n",h,m,s+1);
//    else if (m+1<60)
//        printf("%d:%d:%d\n",h,m+1,0);
//    else if (h+1<24)
//        printf("%d:%d:%d\n",h+1,0,0);
//    else
//         printf("%d:%d:%d\n",0,0,0);
#if 0
    if (s+1==60)
    {
        s=0;
        m++;
        if (m==60)
        {
            m=0;
            h++;
            if (h==24)
            {
                h=0;
            }
        }
    }
    else
        s++;
    printf("%02d:%02d:%02d\n",h,m,s);
#else  //做一个时钟
    h=10,m=20,s=16;
TIME:
    if (s+1==60)
    {
        s=0;
        m++;
        if (m==60)
        {
            m=0;
            h++;
            if (h==24)
            {
                h=0;
            }
        }
    }
    else
        s++;
    printf("%02d:%02d:%02d\r",h,m,s);//\r把当前光标移到行首。
    fflush(stdout);//手动刷新输出缓冲区
    sleep(1);//睡眠1秒钟
    goto TIME;
#endif
    return 0;
}
