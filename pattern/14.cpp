#include <bits/stdc++.h>

using namespace std;

void fun(int n) {
    int c=1 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=i; j++) {
            cout <<" "<<c;
            c+=1;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    fun(n);
}