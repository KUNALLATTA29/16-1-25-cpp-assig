#include <bits/stdc++.h>
using namespace std;

void sol(string &str, int s, int e){
    if(s>=e){
        return;
    }
    swap(str[s],str[e]);
    sol(str, s+1,e-1);
}

int main()
{
    string str = "kunal";
    sol(str,0,str.length()-1);
    cout<<str;
    

    return 0;
}