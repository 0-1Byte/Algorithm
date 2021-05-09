/*
题目描述

给出 N 个线段，对于线段 i，给出线段在数轴上的左端点 li 和右端点 ri，对于线段 i 和 j，
假如 lj < li 并且 ri < rj 就说明线段 i 嵌套在线段 j 中。找到所有嵌套在至少一个其他线段中的线段。

输入
第一行是一个整数 N，1 <= N <= 100。 接下来 N 行，每行两个整数 li, ri 表示第 i 个线段的端点

输出
所有嵌套在其它线段中的线段个数

样例输入
4
0 5
2 6
3 4
0 7

样例输
2

提示:
(3, 4) 和 (2, 6) 包含在 (0, 7) 中
*/

////method01
#include<bits/stdc++.h>
using namespace std;
struct segment
{
    int left;
    int right;
} a[101];

bool cmp(segment x,segment y)
{
    if(x.left!=y.left)return x.left>y.left;    //根据题意，不能等于
    else return x.right>y.right;

}
int main()
{

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i].left>>a[i].right;
    }
    sort(a,a+n,cmp);
    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)    //排好序后从上往下不回头的遍历，j=i 循环少
        {
            if(a[i].left>a[j].left && a[i].right<a[j].right)
            {
                ans++;
                break;
            }
        }
    }

    cout<<ans;
    return 0;
}


////method02
#include<bits/stdc++.h>
using namespace std;
struct segment
{
    int left;
    int right;
} a[101];
int main()
{

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i].left>>a[i].right;
    }

    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)   //不排序  但是每次都需要从头遍历
        {
            if(a[i].left>a[j].left && a[i].right<a[j].right)
            {
                ans++;
                break;
            }
        }
    }

    cout<<ans;
    return 0;
}



