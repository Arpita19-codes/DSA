#include <bits/stdc++.h>

using namespace std;

void fun(int n) {
    int c = 65;
    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++) {
            cout << char(j+65);
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    fun(n);
}