#include <bits/stdc++.h>
using namespace std;

int sol(int a, int b) {
    if (b == 0) {
        return 0; 
    }
    if (b > 0) {
        return a + sol(a, b - 1);  
    }
    return -sol(a, -b);  
}

int main() {
    int num1 = 5, num2 = -3;
    cout<<sol(num1, num2);
    return 0;
}
