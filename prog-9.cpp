#include <bits/stdc++.h>
using namespace std;

int sol(int a, int b){
    if(b==0){
        return a;
    }
    return sol(b,a%b);
}

int main()
{
    int num1 = 20, num2 = 38;
    cout<<sol(num1,num2);

    return 0;
}