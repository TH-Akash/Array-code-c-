#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[10][10],B[10][10];
    int c1,c2,r1,r2,i,j,sum=0,result[10][10];
    cout<<"Enter the frist Matrix :";
    cin>>r1>>c1;
    cout<<"Enter the second Matrix :";
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"Plz Enter the input row and collum :";
        cout<<"Enter the frist Matrix :";
        cin>>r1>>c1;
        cout<<"Enter the second Matrix :";
        cin>>r2>>c2;


    }
    cout<<" Taking frist  matrix ="<<endl;
    for(int i=0; i<r1; i++)
    {

        for(int j=0; j<c1; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] =";

            cin>>A[i][j];
        }

    }
    cout<<" Taking second  matrix ="<<endl;
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"] =";
            cin>>B[i][j];
        }

    }
    // Taking  Matrix Multiplaying :

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {

            for(int k=0; k<c1; k++)
            {
                sum= sum+ A[i][k]*B[k][j];
            }
            result[i][j]= sum;

            sum=0;
        }
    }
    // print A matrix :
    cout<<" A =";

    for(int i=0; i<r1; i++)
    {
        printf("\t");
        for(int j=0; j<c1; j++)
        {
            cout<<A[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    // print B matrix :
    cout<<" B =";

    for(int i=0; i<r2; i++)
    {
        printf("\t");
        for(int j=0; j<c2; j++)
        {
            cout<<B[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    // print Multiplying  matrix :
    cout<<" result Matrix ="<<endl;

    for(int i=0; i<r1; i++)
    {
        printf("\t");
        for(int j=0; j<c2; j++)
        {

            cout<<result[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
