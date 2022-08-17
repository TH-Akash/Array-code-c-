#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[10]= {1,2,3,4,5,7,11,20};
    int position=-1,value;
    cin>>value;
    for(int i=0; i<10; i++)
    {
        if(value==array[i])
        {
            position=i+1;
            break;
        }

    }
    if(position==-1)
    {
        cout<<"not for found"<<endl;
    }
    else
    {
        cout<<value<<endl;
    }



    return 0;

}



