#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;cin>>n;
		int b[n],c=0;
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(int i=1;i<n;i++){
			if(b[i-1]%b[i]!=0){
				c=1;
			}
		}
		if(c==1){
			cout<<-1;
		}
		else{
			for(int i=0;i<n;i++){
				cout<<b[i]<<" ";
			}
		}
		cout<<"\n";
	}
}