#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array1[100],array2[100],n,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>array1[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<array1[i]<<endl;
    }
    for(int i=0;i<n;i++){
        array2[i]=array1[i];
    }
    cout<<"array2 value"<<endl;
    for(int i=0;i<n;i++){

        cout<<array2[i]<<endl;
    }
    return 0;
}
