#include <bits/stdc++.h>

using namespace std;

void fun(int n) {
    for (int i = 0; i < n; i++)
    {
        for (char j ='E'-i; j <='E'; j++) {
            cout <<j;

        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    fun(n);
}