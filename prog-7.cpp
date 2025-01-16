#include <bits/stdc++.h>
using namespace std;

int sol(int base, int ex){
    if(ex==0){
        return 1;
    }
    return base * sol(base,ex-1);
}

int main()
{
    int base =2, ex = 4;
    cout<<sol(base,ex);
    

    return 0;
}