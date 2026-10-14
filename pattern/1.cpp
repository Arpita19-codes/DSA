#include <bits/stdc++.h>
using namespace std;

void fun(int n) {
	int i,j;
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        cout<<"*";
	    }
	    cout<<endl;
	}
}
int main(){
    int n;
    cin>>n;
    fun(n);
}
