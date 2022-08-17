#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[3][4],a,n;
    cout<<"Enter the Matrix"<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)

        {

            cout<<"array["<<i<<"]["<<j<<"] =";
            cin>>array[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {

            cout<<array[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
