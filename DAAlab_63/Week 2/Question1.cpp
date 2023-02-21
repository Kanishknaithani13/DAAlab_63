#include<iostream>
using namespace std;


int binarysearch(int arr[],int key,int size,int searchFirst)
{
    int low=0;
    int high=size-1;
    int mid;
    int res=-1;
    
    while(low<=high)
    {
    {
        mid=(high+low)/2;
    }
    if(arr[mid]==key)
    {
        res= mid;
        


        if(searchFirst)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
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
    return res;
}

int main()
{
    int siuu;
    cout<<"Enter the number of Cases: "<<endl;
    cin>>siuu;
    for(int i=0;i<siuu;i++)
    {
        int n,key;
        int count=0;
        cout<<"Enter the Size of Array: "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of array: "<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cout<<"Enter the key Element: "<<endl;
        cin>>key;
        int first=binarysearch(arr,key,n,1);
        int last=binarysearch(arr,key,n,0);
        count=last-first+1;;
        if(first!=-1)
        {
            cout<<key<<" - "<<count<<endl;
            
        }
        else
        {
            cout<<"KEY IS NOT FOUND!!!!!!!!!!! "<<endl;
        }

    }
    

}