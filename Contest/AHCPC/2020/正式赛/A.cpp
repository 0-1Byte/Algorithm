#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    char a[20];cin>>a;
    LL b;cin>>b;
    LL sum=0;
    LL n=strlen(a);
    sort(a,a+n);
    do{
    	next_permutation(a,a+n);
	}while(a[0]=='0');//排除含有前导0的数字排列组合
    for(int i=0;i<n;i++){
    		sum=sum*10+(a[i]-'0');
		}
		 if(sum>b)cout<<-1<<endl;
		else{
			bool flag=0;
		while(next_permutation(a,a+n)){
    	LL ans=sum;
    	sum=0;
    	for(int i=0;i<n;i++){
    		sum=sum*10+(a[i]-'0');
		}

		if(sum>b){
			cout<<ans<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)cout<<sum<<endl;
	}


    return 0;
}
