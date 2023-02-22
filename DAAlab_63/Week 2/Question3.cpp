#include<bits/stdc++.h>
using namespace std;

void counter(int arr[],int size,int key)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]-arr[i]==key || arr[i]-arr[j]==key )
            {
                count++;
            }
        }
    }
    cout<<count;
}


int main()
{
    int t;
    
    cout<<"Enter the number of cases: "<<endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"Enter the size of array: "<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter the elements of the array: "<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int key;
        cout<<"Enter the key: "<<endl;
        cin>>key;
        
        counter(a,n,key);
        
        
        return 0;

    }
}