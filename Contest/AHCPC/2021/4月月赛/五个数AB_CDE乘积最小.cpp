/*
题目描述
输入5个个位数 ABCDE（至少2个非0），要求按组合出一个三位数和2位数，
使得乘积最小，你的任务是输出这个乘积。

样例输入
1 2 3 4 5
样例输出
3185             
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    sort(a,a+5);

    int min3,min2;//三位数最高位  两位数最高位
    int b,c;   //三位数  两位数

    if(a[0]==0 &&a[1]!=0)
    {
        min3=a[2];
        min2=a[1];
        b=min3*100+a[3]*10+a[4];
        c=min2*10+a[0];
        cout<<b*c;
    }
    else if(a[0]==0 && a[1]==0 &&a[2]!=0)
    {
        min3=a[3];
        min2=a[2];
        b=min3*100+a[1]*10+a[4];
        c=min2*10+a[0];
        cout<<b*c;

    }
    else if(a[0]==0 && a[1]==0 && a[2]==0 &&a[3]!=0)
    {
        min3=a[4];
        min2=a[3];
        b=min3*100+a[1]*10+a[2];
        c=min2*10+a[0];
        cout<<b*c;

    }
    else
    {
        min3=a[1];
        min2=a[0];
        b=min3*100+a[3]*10+a[4];
        c=min2*10+a[2];
        cout<<b*c;
    }

    return 0;
}
