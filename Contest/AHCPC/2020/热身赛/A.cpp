/*
注意数据范围
20%的数据满足0<a,b<100
50%的数据满足0<a,b<10000
100%的数据满足0<a,b<100000000
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<min(a,b)*min(a,b);

	return 0;
}
