//Question code :  NEWPIECE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    if(a==p && b==q){
	        cout<<0<<"\n";
	    }else if(((a+b)%2==0 &&(p+q)%2==0)||((a+b)%2==1 &&(p+q)%2==1)){
	        cout<<2<<"\n";
	    }else{
	        cout<<1<<"\n";
	    }
	}
	return 0;
}
