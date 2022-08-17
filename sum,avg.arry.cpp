#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[100],n,sum=0,avg=0,a;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
    for(int i=0;i<a;i++){
        sum=sum+array[i];
    }
    cout<<sum<<endl;
    return 0;
}

