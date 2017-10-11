//
//  main.c
//  ios1558-1056-郭永峰
//
//  Created by qianfeng on 15-10-22.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int closeToNum(int * arr,int len,int n)
{
    int i,j,min_distance=arr[0]>=n?arr[0]-n:n-arr[0];//假定一个最小距离
    int min_zhi=arr[0];
    for (i=1; i<len; i++) {
        j=arr[i]>=n?arr[i]-n:n-arr[i];
        if (min_distance>j) {
            min_distance=j;
            min_zhi=arr[i];
        }
    }
    return min_zhi;
}
int secondMax(const int *arr,int len)
{
    int i,max,second_max;
    max=arr[0]>arr[1]?arr[0]:arr[1];
    second_max=arr[0]>arr[1]?arr[1]:arr[0];
    for (i=2; i<len; i++)
    {
        if (arr[i]>max)
        {
            second_max=max;
            max=arr[i];
        }
        else if (arr[i]>second_max)
        {
            second_max=arr[i];
        }
    }
    return second_max;
}
char * mycpy(char * dest, const char * src)
{
    char *old_dest=dest;
    while ((*dest++=*src++)) ;
    return old_dest;
}
void reverseWord(char *str)
{
    char *p[10];
    int i,j;
    p[0]=strtok(str, " ");
    for (i=1; ; i++) {
        p[i]=strtok(NULL, " ");
        if (p[i]==NULL) {
            break;
        }
    }
    char newStr[100]={};
    for (j=i-1;j>=0 ; j--) {
        strcat(newStr,p[j]);
        if (j==0)
            strcat(newStr, "\0");
        else
            strcat(newStr, " ");
    }
    strcpy(str, newStr);
    //printf("%s\n",newStr);
    return;
}
void separateString(const char *str)
{
    int t,i;
    char x[100];
    strcpy(x, str);
    if (x[0]>='A'&&x[0]<='Z') {
        printf("%c",x[0]);
        t=1;
    }else{
        printf("%c",x[0]-32);
        t=0;
    }
    for (i=1; i<strlen(str); i++) {
        if (t==1) {
            if (x[i]>='A'&&x[i]<='Z') {
                printf("%c",x[i]+32);
            }else
            {
                printf(" %c",x[i]);
                t=0;
            }
        }else if (t==0)
        {
            if (x[i]>='a'&&x[i]<='z') {
                printf("%c",x[i]);
            }else
            {
                printf(" %c",x[i]+32);
                t=1;
            }
        }
        if (x[i]=='\0') {
            break;
        }
    }printf("\n");
    return;
}
int isCValidVar(const char * str)
{
    if (*str=='_'||(*str>='a'&&*str<='z')||(*str>='A'&&*str<='Z')) {
        while (*str)
        {
            if (*str=='_'||(*str>='a'&&*str<='z')||(*str>='A'&&*str<='Z')||(*str>='0'&&*str<='9'))
            {
                str++;
                if (*str=='\0')
                {
                    return 1;
                }
            }else
                return 0;
        }
    }
        return 0;
}
int main(int argc, const char * argv[])
{
    printf("------第一题-------\n");
    int a[9]={1,2,3,4,5,10,9,8,9};
    int x=7;
    printf("最接近%d的元素为:%d\n",x,closeToNum(a,9,x));
    
    printf("------第二题------\n");
    int b[9]={1,2,3,4,5,6,7,8,9};
    printf("数组中第二大的数是:%d\n",secondMax(b,9));
    
    printf("------第三题------\n");
    char c[100]={};
    char *p="hello world!";
    mycpy(c, p);
    printf("%s\n",c);
    
    printf("------第四题------\n");
    char d[100]="hello my world";
    reverseWord(d);
    printf("------第五题------\n");
    char *e="HELLOmyDEARworld";
    separateString(e);
    
    printf("------第六题------\n");
    char *f="xiaohu";
    printf("%d\n",isCValidVar(f));
    
    printf("------第七题------\n");
    printf("------第八题------\n");
    printf("------第九题------\n");
    return 0;
}

