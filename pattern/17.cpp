#include <bits/stdc++.h>

using namespace std;

void fun(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <=i; j++) {
            cout << char(i + 65);
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    fun(n);
}