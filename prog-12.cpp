#include <bits/stdc++.h>
using namespace std;

void sol(int s, int e, int &eve, int &odd) {
    if (s > e){
        return;
    }

    if (s % 2 == 0) eve += s;
    else odd += s;

    sol(s + 1, e, eve, odd);
}

int main() {
    int s = 1, e = 10;
    int eve= 0, odd = 0;
    sol(s, e, eve, odd);

    cout<<"Sum of even numbers: "<<eve<<endl;
    cout<<"Sum of odd numbers: "<<odd<<endl;
    return 0;
}
