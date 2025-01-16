#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> arr, int n, int num){
    if(n==0){
        return 0;
    }
    return (arr[n-1]==num)+sol(arr,n-1,num);
}

int main()
{
    vector<int> arr={1,2,3,4,5,2,6};
    int num = 2;
    cout<<sol(arr,arr.size(),num);

    return 0;
}