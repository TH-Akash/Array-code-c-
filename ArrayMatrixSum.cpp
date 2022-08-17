#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfRow,numOfCollum,i,j;
    int A[10][10],B[10][10],C[10][10];
    //A matrix start :
    cout<<"Enter the Matrix A :";
    cout<<endl;
    cin>>numberOfRow>>numOfCollum;
    for(int i=0; i<numberOfRow; i++)
    {
        for(int j=0; j<numOfCollum; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]=";
            cin>>A[i][j];
        }
        cout<<endl;
    }

    cout<<"Enter the Matrix B :";

    cout<<endl;
    cin>>numberOfRow>>numOfCollum;
    for(int i=0; i<numberOfRow; i++)
    {
        for(int j=0; j<numOfCollum; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]=";
            cin>>B[i][j];
        }
        cout<<endl;
    }
    cout<<" A =";
    for(int i=0; i<numberOfRow; i++)
    {
        printf("\t");
        for(int j=0; j<numOfCollum; j++)
        {
            cout<<A[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<" B =";
    for(int i=0; i<numberOfRow; i++)
    {
        printf("\t");
        for(int j=0; j<numOfCollum; j++)
        {
            cout<<B[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    // Matrix C :

    cout<<endl;

    for(int i=0; i<numberOfRow; i++)
    {
        printf("\t");
        for(int j=0; j<numOfCollum; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
        cout<<endl;
    }
    cout<<" A +B = ";
    cout<<endl;
    for(int i=0; i<numberOfRow; i++)


    {
        for(int j=0; j<numOfCollum; j++)
        {
            cout<<C[i][j];
            cout<<" ";
        }
        cout<<endl;

    }



    return 0;
}

