#include <bits/stdc++.h>

using namespace std;

void fun(int n) {
     for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++) {
            int top=i;
            int right=(2*n-2)-j;
            int left=j;
            int down=(2*n-2)-i;
            cout<<(n-min((top,down),min(top,down)));
            
        }
        cout<<endl;
      
    }

	
   
}
int main() {
    int n;
    cin >> n;
    fun(n);
}