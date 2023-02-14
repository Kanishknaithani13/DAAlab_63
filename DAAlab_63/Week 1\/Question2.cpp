#include<iostream>
using namespace std;

    

int binarysearch(int arr[],int key,int low,int high)
{
    int mid;
    while(low<=high)
    {
    {
        mid=high+(low-high)/2;
    }
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    }
    return -1;
}


int main()
{
    int t;
    int key;
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
        cout<<"Enter the key to be find: "<<endl;
        cin>>key;
        int search= binarysearch(A,key,0,n-1);
        if(search==-1)
        {
            cout<<"Key Not Found "<<endl;
        }
        else{
            cout<<"Position of  the key is: "<<search+1<<endl;
        }
        return 0;


    }
}