/*
题目描述
超市收银台出了故障,需要帮忙完成收银和找零的工作,如果顾客买的东西的总价值含有"分",就进位计算.如:购买了总价值9.91元的物品,收到20元,应找零10元整.如钱不够，输出-1

输入
第一行输入正整数T，表示数据的组数。
每组数据的第一行是购买的物品的种类数n 和顾客给的钱的总数m(顾客给的钱不会有"分"),接下来有n行[1,100],
每行两个数字,第一个数字是该物品的价格Pi([0.01,10000]),第二个数字是该物品的数量Ci([1,10])。
输出
对于每组数据，输出一行，格式为'Case t: x'，t 为数据的组号，x 为题目要求的结果。

样例输入
3
5 200.00
9.99 1
8.88 1
0.50 1
1.00 1
2.33 3
1 10.00
9.99 1
2 100.00
98.99 1
1.02 1
样例输出
Case 1: 172.60
Case 2: 0.00
Case 3: -1
*/
//数学 模拟
#include<bits/stdc++.h>
using namespace std;

const int maxn=10000;
int main()
{
    int T;
    cin>>T;
     int cnt=0;
    while(T--)
    {

        int  i;
        int n,ci[100];
        double m,pi[maxn];
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>pi[i]>>ci[i];
        }
        double value=0;
        for(i=0; i<n; i++)
        {
            value+=pi[i]*ci[i];
        }
        //cout<<value<<endl;  //test
        double change;
        change=m-value;
        //判断是否小数位是否有效、有效小数有几位  即是否含有角、分
        int  angle=value*10;
        int  points=value*100;
        int  integer=(int)value;
        if(integer*10==angle && integer*100==points) //无角和分
        {
            if(change<0)
            {
                cout<<"Case "<<++cnt<<": "<<-1<<endl;
            }
            else
            {
                cout<<"Case "<<++cnt<<": "<<fixed<<setprecision(2)<<change<<endl;
            }

        }
        else if(integer*10<angle && angle*10==points) //只含有角
        {
            if(change<0)
            {
                cout<<"Case "<<++cnt<<": "<<-1<<endl;
            }
            else
            {
                cout<<"Case "<<++cnt<<": "<<fixed<<setprecision(2)<<change<<endl;
            }
        }


        else //含有角、分 if(integer*10<angle && integer*100<points || integer*10==angle && integer*100<points )
        {
            if(change<0)
            {
                cout<<"Case "<<++cnt<<": "<<-1<<endl;
            }
            else
            {
                cout<<"Case "<<++cnt<<": "<<fixed<<setprecision(2)<<m-(angle/10.0+0.1)<<endl;
            }
        }

    }
    return 0;
}
