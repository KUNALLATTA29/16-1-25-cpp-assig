#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> arr, int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sol(arr,n-1);
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    cout<<sol(arr,arr.size());

    return 0;
}