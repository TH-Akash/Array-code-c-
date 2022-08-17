#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][3],i,j,sum=0,row,col;
    cout<<"Enter the row and coloum :";
    cin>>row>>col;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] =";
            cin>>A[i][j];
        }
    }

    cout<<" Matrix A ="<<endl;
    for(int i=0; i<row; i++)
    {

        for(int j=0; j<col; j++)
        {
            cout<<A[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    // Digonal Matrix :
    cout<<" Digonal :";

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)

                sum = sum+A[i][j];

        }

    }
    cout<<sum;
    return 0;

}

