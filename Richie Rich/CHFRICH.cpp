#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    int a,b,x; //a=his assets. b=needs. x=increase 
	    cin>>a>>b>>x;
	    
	    int diff = b-a;
	    cout<<diff/x<<endl;
	    
	}
	return 0;
}
