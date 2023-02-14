#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the total number of cases"<<endl;
    cin>>t;
    

    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"Enter the size of array"<<endl;
        cin>>n;
        int A[n];
        for(int j=0;j<n;j++)
        {
            cin>>A[j];
        }
        int key;
        cout<<"Enter the key to search: "<<endl;
        cin>>key;
        for(int k=0;k<n;k++)
        {
            if(key==A[k])
            {
                cout<<"Key found at Position: "<<k+1<<endl;
            }
           
        }
        cout<<"Not Found "<<key<<endl;
    }
    return 0;
}