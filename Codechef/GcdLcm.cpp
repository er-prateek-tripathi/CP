#include <iostream>
using namespace std;

int gcdValue(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    long int a,b;
	    cin>>a>>b;
	    int gcd=gcdValue(a,b);
	    cout<<gcd<<" "<<(a*b)/gcd<<endl;
	    t=t-1;
	}
	return 0;
}
