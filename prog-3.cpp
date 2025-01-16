#include <bits/stdc++.h>
using namespace std;

int sol(int n){
    if(n<=1){
        return n;
    }
    return sol(n-1)+sol(n-2);
}

int main()
{
    int n = 15;
    cout<<sol(n);

    return 0;
}