#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[100];
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
   int  min=array[0];
    for(int i=0;i<a;i++){
        if(min>array[i])
            min=array[i];
    }
    cout<<min<<endl;

}
