#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[10][10],B[10][10],row,col,i,j,transform[10][10];
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
    // Transpose Matrix :
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            transform[j][i]= A[i][j];
        }
    }
    cout<<" Matrix A =";
    for(int i=0; i<row; i++)
    {
        printf("\t");
        for(int j=0; j<col; j++)
        {
            cout<<A[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose ="<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<transform[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;

}
