#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[10],a,i;
    cin>>a;
    array[0]=0;
    array[1]=1;
    for(int i=2; i<a; i++)
    {
        array[i]=array[i-1]+array[i-2];
    }
    for(int i=0; i<a; i++)
    {
        cout<<array[i];
    }
    return 0;

}
