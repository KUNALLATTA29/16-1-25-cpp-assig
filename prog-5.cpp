#include <bits/stdc++.h>
using namespace std;

void sol(vector<int> &arr,int n, int &mini, int &maxi){
    if(n==1){
        mini = maxi = arr[0];
        return;
    }
    sol(arr,n-1,mini,maxi);
    
    mini=min(mini, arr[n-1]);
    maxi=max(maxi,arr[n-1]);
}

int main()
{
    vector<int> arr = {4,3,6,5,1,8};
    int mini,maxi;
    sol(arr,arr.size(),mini,maxi);
    cout<<"minimum value "<<mini<<endl;
    cout<<"maximum value "<<maxi<<endl;
    

    return 0;
}