//1558C语言阶段考试题
//考试时间到 中午 12:00 截止,个人作答结果,必须将整个工程压缩打包,上传至我的代码库.
//具体作答要求在所有题目下方.
//注意考场纪律.一旦发现作弊抄袭,立即开除.

/**
 注意:
 所有题目在同一个工程中作答.
 工程名为"班级编号-学号-姓名"
 例如:"ios1558-07-张伟"
 
 每个题 必须封装成一个函数
 每个函数,必须在main函数中调用,测试结果
 每个题 必须有明确的结果
 每个题 不能有scanf语句,getchar,getch等输入语句.
 
 下面是 main函数中的 测试例子,大家按照这个格式来测试每个题.
 */


//int main(int argc, const char * argv[])
//{
//    //第一题
//    printf("第一题\n");
//    char arr[30] = "abcdefg";
//    printf("逆序之前:%s\n",arr);
//    reverseString(arr);
//    printf("逆序之后:%s\n",arr);
//    //第二题
//    printf("第二题\n");
//    char p[100] = "Yes, she is my love.";
//    printf("单词个数为:%d\n",countWords(p));
//    //第三题
//    printf("第三题\n");
//    printf("单词个数为:%d\n",countWordAgain("Yes, she&is@my^love.+="));
//    //第四题
//    sumOfFactorial(p);

//    return 0;
//}

//1.编写自定义函数,传入一个字符串,统计给定字符串中单词的个数(单词间可能是任何非字母字符).(15)
//例如:传入"she&is@my^love.+="
//返回值为:4
int countWords(const char *str);

//2.编写自定义函数,传入一个字符串，清除字符串中所有的标点符号.(15)
//传入"www.@qian,feng.@com!"
//清除后"www@qianfeng@com"
//清除标点符号后的结果还放入原字符串中.
void clearAllSymbols(char *str);

//3.编写自定义函数,实现一个功能类似strcmp的函数.(20分)
int myStrcmp(const char * s1,const char * s2);

//4.编写自定义函数,传入两个字符串,把两个字符串中的单词交叠后形成一个新的字符串.(20分)
//例如:传入"this,is funking" 和 "really a,thing oh man kill, me"
//返回:"this really is a funking thing "
char * crossoverTheWord(char * s1,char * s2);

//5.编写自定义函数,传入数组,返回数组中所有数的最大公约数(20分)
//a 是数组的首元素的地址
//n 是数组的元素个数
//返回值是数组中所有数的最大公约数
unsigned int maxCommonDivisor(unsigned int * a, int n);
//6.编写自定义函数,传入一个奇数,打印图形(10分)
/*例如:传入 5
  打印:
    *
   ***
  *****
 
*/
void printGraph(int n);
