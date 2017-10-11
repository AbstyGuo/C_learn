//
//  main.c
//  ios1558-1056-郭永峰
//
//  Created by qianfeng on 15-10-23.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include<string.h>
#include <stdlib.h>

//1.编写自定义函数,传入一个字符串,统计给定字符串中单词的个数(单词间可能是任何非字母字符).(15)
//例如:传入"she&is@my^love.+="
//返回值为:4
int countWords(const char *str)
{
    int i,c=0;
    for (i=0; i<=strlen(str); i++) {
        if (((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))&&!((str[i+1]>='A'&&str[i+1]<='Z')||(str[i+1]>='a'&&str[i+1]<='z'))) {
            c++;
        }
    }
    return c;
}

//2.编写自定义函数,传入一个字符串，清除字符串中所有的标点符号.(15)
//传入"www.@qian,feng.@com!"
//清除后"www@qianfeng@com"
//清除标点符号后的结果还放入原字符串中.
void clearAllSymbols(char *str)
{
    char *p[10];
    int i=1;
    p[0]=strtok(str, ",.!?;:<>");
    while (p[i-1]) {
        p[i++]=strtok(NULL, ",.!?;:<>");
    }
    for (int j=0; j<i-1; j++) {
        printf("%s",p[j]);
    }
    printf("\n");
    return;
}

//3.编写自定义函数,实现一个功能类似strcmp的函数.(20分)
int myStrcmp(const char * s1,const char * s2)
{
    int c=0;
    for (int i=0; i<strlen(s1); i++) {
        if (s1[i]!=s2[i]) {
            c=s1[i]-s2[i];
            break;
               }
    }
    return c;
}

//4.编写自定义函数,传入两个字符串,把两个字符串中的单词交叠后形成一个新的字符串.(20分)
//例如:传入"this,is funking" 和 "really a,thing oh man kill,me"
//返回:"this really is a funking thing oh man kill,me"
char * crossoverTheWord(char * s1,char * s2)
{
    int t=0,x=0,y=0;
    char s[100]={};
    for (int i=0; i<=(strlen(s1)+strlen(s2)); i++) {
            if (t==0)
            {
                if ((s1[x]>='A'&&s1[x]<='Z')||(s1[x]>='a'&&s1[x]<='z'))
                {
                    s[i]=s1[x];
                    x++;
                }
                else
                {
                    if (s2[y]) {
                        t=1;
                    }
                    x++;
                    s[i]=' ';
                }
            }
            if (t==1&&!(s[i]))
            {
                if ((s2[y]>='A'&&s2[y]<='Z')||(s2[y]>='a'&&s2[y]<='z'))
                {
                    s[i]=s2[y];
                    y++;
                }
                else
                {
                    if (s1[x]) {
                        t=0;
                    }
                     y++;
                    s[i]=' ';
                }
            }
    }
    strcpy(s1,s);
    return s1;
    }

//5.编写自定义函数,传入数组,返回数组中所有数的最大公约数(20分)
//a 是数组的首元素的地址
//n 是数组的元素个数
//返回值是数组中所有数的最大公约数
unsigned int maxCommonDivisor(unsigned int * a, int n)
{
    int i,c=1,j;
    for (i=a[0];i>0; i--) {
        for (j=0; j<n; j++) {
            if (a[j]%i!=0) {
                break;
            }
        }
        if (j==n) {
            c=i;
            break;
        }
    }
    return c;
}
//6.编写自定义函数,传入一个奇数,打印图形(10分)
/*例如:传入 5
 打印:
 *
 ***
 *****
 
 */
void printGraph(int n)
{
    int i,j;
    for (i=1; i<=n; i++) {
        if (i%2) {
            for (j=0; j<i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return;
}
int main(int argc, const char * argv[])
{
    printf("------第一题------\n");
    char a[100]="she&is@my^love.+=";
    printf("第一题输入的单词个数为%d\n",countWords(a));
    printf("------第二题------\n");
    char b[100]="www.@qian,feng.@com!";
    printf("清除标点后结果为:\n");
    clearAllSymbols(b);
    printf("------第三题------\n");
    char str[50]="abcd",str1[50]="efgh";
    printf("自定义strcmp对比两个字符串的结果是%d\n",myStrcmp(str,str1));
    printf("------第四题------\n");
    char d1[100]="this,is funking",d2[100]="really a,thing oh man kill,me";
    crossoverTheWord(d1,d2);
    printf("字符串交叠后形成的新字符串为:\n%s\n",d1);
    printf("------第五题------\n");
    unsigned int w[4]={3,6,9,12};
    printf("数组中所有数的最大公约数为%d\n",maxCommonDivisor(w,4));
    printf("------第六题------\n");
    int f=9;
    printGraph(f);
    return 0;
}

