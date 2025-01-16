#include <bits/stdc++.h>
using namespace std;

int sol(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sol(n/10);
}

int main()
{
    int n = 12345;
    cout<<sol(n);

    return 0;
}