//
//  main.c
//  ios1558-学号-名字
//
//  Created by YanTianFeng on 15-10-22.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//1.编写自定义函数,找出整型数组中与制定值最接近的元素.
int closeToNum(int * array,int length,int n)
{
    int min_distance = array[0] > n?array[0]-n:n-array[0];//假定一个最小距离
    int min_element = array[0];//假定的最接近n的元素
    for(int i = 1;i < length;i++)
    {
        int new_distance = array[i] > n?array[i]-n:n-array[i];
        if(new_distance < min_distance)
        {
            min_distance = new_distance;
            min_element = array[i];
        }
    }
    return min_element;
}
//2.编写自定义函数,找出数组中第二大的数
int secondMax(int * array,int length)
{
    int max = array[0] > array[1]?array[0]:array[1];//假定一个最大数
    int second_max = array[0] < array[1]?array[0]:array[1];//假定一个第二大数
    for(int i = 2;i < length;i++)
    {
        if(array[i] > max)
        {
            second_max = max;
            max = array[i];
        }
        else if (array[i] > second_max)
        {
            second_max = array[i];
        }
    }
    return second_max;
}
//3.实现一个功能类似strcpy的函数
char * myStrcpy(char * dst,const char * src)
{
    //return strcpy(dst,src);
    char * old_dst = dst;
    while((*dst++ = *src++));
    return old_dst;
}
//4.将字符串按照单词逆序.
//"hello\0my\0world"
//"world my hello"
void reverseWord(char * str)
{
    char * array[10];
    int count = 0;//统计分割到的单词的个数
    //分割得到每个单词的首地址,放入到指针数组array中.
    char * p = strtok(str, " ");
    while(p)
    {
        array[count]= p;
        count++;
        p = strtok(NULL, " ");
    }
    //逆序取得每个指针指向的字符串,并拼接到新字符串中.
    char newStr[100] = {};
    for(int i = count-1;i >= 0;i--)
    {
        //strcpy(newStr, array[i]);
        strcat(newStr, array[i]);
        if(i != 0)
        strcat(newStr, " ");
    }
    //把拼接到的新字符串 放入到原字符串中.
    strcpy(str, newStr);
}
//5.将字符串中单词用空格隔开
//"HELLOmyDEARworld"
//"Hello my dear world"
void separateString(const char * str)
{
    
    char newStr[100] = {};
    int i = 0;//newStr中当前将要存储的字符的下标
    //把所有的大写字母 转换为小写字母
    while(*str)
    {
        char c = *str;
        //大写转小写
        if(c >= 'A' && c <= 'Z')
        {
            c += 32;
        }
        newStr[i++] = c;//放入新字符串中.
        //在单词结尾 添加 ' '
        if((*str >= 'A' && *str <='Z' && *(str+1) >= 'a' && *(str+1) <= 'z') ||
           (*str >= 'a' && *str <='z' && *(str+1) >= 'A' && *(str+1) <= 'Z'))
        {
            newStr[i++] = ' ';
        }
        str++;
    }
    newStr[0] -= 32;//首个单词首字符大写.
    newStr[i] = '\0';//添加字符串结尾标识'\0'
    printf("新字符串为:%s\n",newStr);
}
//6.判断字符串str是否是合法的C变量名
int isCValidVar(const char * str)
{
    //数字开头,不是合法变量
    if(*str >= '0' && *str <= '9')
    {
        return 0;
    }
    //包含有除(数字,字母,下划线)之外的其他字符,不是合法变量
    for(int i = 0;i < strlen(str);i++)
    {
//        if(/*是其他字符*/!(str[i] >= '0' && str[i] <= '9')
//           &&!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//           &&!(str[i] == '_'))
        if(!((str[i] >= '0' && str[i] <= '9')
            ||((str[i] >= 'a' && str[i] <= 'z')
            ||(str[i] >= 'A' && str[i] <= 'Z'))
            ||(str[i] == '_')))
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[])
{
    printf("----第一题----\n");
    int array[6] = {1,2,3,4,5,6};
    printf("最接近%d的元素为:%d\n",7,closeToNum(array,6,7));
    printf("----第二题----\n");
    int array2[5] = {1,2,3,4,5};
    printf("第二大的数是:%d\n",secondMax(array2,5));
    
    printf("----第三题----\n");
    char array3[100] = {};
    char * p = "hello world";
    printf("%s\n",myStrcpy(array3, p));
    printf("%s\n",array3);
    
    printf("----第四题----\n");
    char array4[100] = "hello my dear world ";
    reverseWord(array4);
    printf("逆序的结果为:%s\n",array4);
    printf("----第五题----\n");
    
    separateString("HELLOmyDEARworld");
    printf("----第六题----\n");
    printf("%s\n",isCValidVar("1Abc")?"合法":"不合法");
    
    return 0;
}






