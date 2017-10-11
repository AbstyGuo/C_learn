//
//  main.c
//  作业4
//
//  Created by qianfeng on 15/10/13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    输入一个日期，输出这一天是这一年的第几天(需要考虑平年闰年)
//    (日期:  年-月-日)
    int n,y,r,temp=0;
    scanf("%d%d%d",&n,&y,&r);
    if ((n%4==0&&n%100!=0)||n%400==0) {
//        temp=1;
        if (y>2)
        {
            temp=1;
        }
    }
    switch (y-1) {
        case 11:r+=30;
        case 10:r+=31;
        case 9:r+=30;
        case 8:r+=31;
        case 7:r+=31;
        case 6:r+=30;
        case 5:r+=31;
        case 4:r+=30;
        case 3:r+=31;
        case 2:r+=28;
        case 1:r+=31;
    }
    r+=temp;
    printf("这一天是这一年中的第%d天\n",r);
//    switch (y) {
//        case 1:
//            printf("这一天是这一年中的第%d天\n",r);
//            break;
//        case 2:
//            printf("这一天是这一年中的第%d天\n",r+31);
//            break;
//        case 3:
//            printf("这一天是这一年中的第%d天\n",r+59+temp);
//            break;
//        case 4:
//            printf("这一天是这一年中的第%d天\n",r+90+temp);
//            break;
//        case 5:
//            printf("这一天是这一年中的第%d天\n",r+120+temp);
//            break;
//        case 6:
//            printf("这一天是这一年中的第%d天\n",r+151+temp);
//            break;
//        case 7:
//            printf("这一天是这一年中的第%d天\n",r+181+temp);
//            break;
//        case 8:
//            printf("这一天是这一年中的第%d天\n",r+212+temp);
//            break;
//        case 9:
//            printf("这一天是这一年中的第%d天\n",r+243+temp);
//            break;
//        case 10:
//            printf("这一天是这一年中的第%d天\n",r+273+temp);
//            break;
//        case 11:
//            printf("这一天是这一年中的第%d天\n",r+304+temp);
//            break;
//        case 12:
//            printf("这一天是这一年中的第%d天\n",r+334+temp);
//            break;
//        default:
//            break;
//    }
    return 0;
}
