#include <bits/stdc++.h>
using namespace std;

void fun(int n) {
	int i,j;
	for(i=1;i<n+1;i++){
	    for(j=1;j<i+1;j++){
	        cout<<j;
	    }
	    cout<<endl;
	}
}
int main(){
    int n;
    cin>>n;
    fun(n);
}

