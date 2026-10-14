#include <bits/stdc++.h>

using namespace std;

void fun(int n) {
    int c=0;
	for(int i=0;i<n;i++)
	{
	    for(int j =0;j<i;j++){
	        if(c%2==0){
	            cout<<1;
	        }
	        else{
	            cout<<0;
	        }
	        c+=1;
	    }
	    cout<<endl;
	}

}
int main() {
    int n;
    cin >> n;
    fun(n);
}