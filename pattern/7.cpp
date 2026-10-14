#include <bits/stdc++.h>
using namespace std;

void fun(int n) {
	int i,j;
	for(i=n;i>=0;i--){
	    for(j=1;j<i+1;j++){
	        cout<<i;
	    }
	    cout<<endl;
	}
}
int main(){
    int n;
    cin>>n;
    fun(n);
}

