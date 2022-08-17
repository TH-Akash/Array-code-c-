#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[]= {1,2,3,4,5,6,7,8};
    int position=-1, value;
    cin>>value;
    for(int i=0; i<8; i++)
    {
        if(value==array[i])
        {
            position=i+1;
            break;


        }
    }
    if(position==-1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"pod"<<position<<endl;
    }

    return 0;

}
