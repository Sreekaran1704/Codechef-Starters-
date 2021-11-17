// Question Code : CHEFVACATION
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,z,t;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y>>z;
	    if(x+y<=z){
	        cout<<("YES")<<"\n";
	    }else{
	        cout<<("NO")<<"\n";
	    }
	}
	return 0;
}
