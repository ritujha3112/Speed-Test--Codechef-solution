#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int aDist,aTime,bDist,bTime;
	    cin>>aDist>>aTime>>bDist>>bTime;
	    //speed = dist/time
	    float aSpeed=float(aDist)/aTime;
	    float bSpeed=float(bDist)/bTime;
	    if(aSpeed>bSpeed){
	        cout<<"Alice"<<endl;
	    }
	    else if(aSpeed<bSpeed){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Equal"<<endl;
	    }
	}
	return 0;
}