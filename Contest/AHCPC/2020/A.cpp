/*
题目描述
足球场地长为100,宽为20,对方的球门坐标为(100,10),你要控制一个个机器人踢球，初始位置为(x,y).
机器人可以朝任何方向移动，但不能超出场地边界，当机器人与球门距离不超过10时，可以射门。 问机器
人从初始位置出发到射门，最少要移动多少距离? (四舍五人到小数点后3位)

输入
每组输人为2个整数，分别为x ,y
0<= x<=100
0<= y<=20
输出
输出最小移动的距离

样例输入
10 10
样例输出
80.000
*/
//思路：两点间距离公式
//     圆心到任意点间距离减10
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
    double dist;
    double dx=100-x;
    double dy=10-y;
    dist=sqrt(dx*dx+dy*dy)-10;
    cout<<fixed<<setprecision(3)<<dist;
	return 0;
}
