#include <bits/stdc++.h>
using namespace std;

bool sol(string str, int s, int e){
    if(s>=e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    return sol(str, s+1,e-1);
}

int main()
{
    string str = "kunal";
    if(sol(str, 0, str.length() - 1)) {
        cout<<str<<" is a palindrome" << endl;
    }else{
        cout<<str<<" is not a palindrome" << endl;
    }

    return 0;
}