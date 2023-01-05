#include<stdio.h>
#define PERIOD '.'
int main()
{
    char ch;
    int charcount=0;

    while((ch=getchar())!=PERIOD)  //當輸入的字符不是‘。’時進入循環
    {
        if(ch!='"'&&ch!='\'')      //儅輸入的字符不是雙引號和單引號的時候記一次數（charcount）
             charcount++;
    }
    printf("There are %d non-quote characters.\n",charcount);

   return 0;
}
/*
輸出樣例

I didn't read the "I'm a Programming Fool" best seiler.
There are 50 non-quote characters.

*/
