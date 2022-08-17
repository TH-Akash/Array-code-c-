#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][4],B[3][4],n;
    int i,j;
    cout<<"Enter the A matrix :";
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<"array["<<i<<"]["<<j<<"] =";
            cin>>A[i][j];
        }
        cout<<endl;
    }
    // A matrix print :
    cout<<"A = ";
    for(int i=0; i<3; i++)
    {
        // cout<<"\t"<<endl;
        printf("\t");


        for(int j=0; j<4; j++)
        {
            cout<<A[i][j];
            cout<<" ";

        }
        cout<<endl;
    }
    // input B matrix:
    cout<<endl;

    cout<<"Enter  the B matrix"<<endl;

    cout<<"B =";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<"array["<<i<<"]["<<j<<"] =";
            cin>>B[i][j];

        }
        cout<<endl;
    }
    cout<<"B = ";
    for(int i=0; i<3; i++)
    {
        // cout<<"\t"<<endl;
        printf("\t");


        for(int j=0; j<4; j++)
        {
            cout<<B[i][j];
            cout<<" ";

        }
        cout<<endl;
    }
    cout<<"B = ";
    for(int i=0; i<3; i++)
    {
        // cout<<"\t"<<endl;
        printf("\t");


        for(int j=0; j<4; j++)
        {
            cout<<B[i][j];
            cout<<" ";

        }
        cout<<endl;
    }





    return 0;
}
