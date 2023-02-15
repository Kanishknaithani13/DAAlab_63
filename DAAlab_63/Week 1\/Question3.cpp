#include<iostream>
#include<cmath>
using namespace std;



int search(int a[], int n, int item) {
   int i = 0;
   int m = sqrt(n); 

   while(a[m] <= item && m < n)
    { 
      
      i = m;  
      m += sqrt(n);
      if(m < n - 1)  
         return -1; 
    }

   for(int x = i; x<m; x++) 
   {
      if(a[x] == item)
      return x; 
   }
   return -1;
}



int main()
{
    int t;
    int key;
    cout<<"Enter the total number of cases"<<endl;
    cin>>t;

    for(int k=0;k<t;k++)
    {
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of an array: "<<endl;
    for(int i =0;i<n;i++)
    { 
        cin>>a[i];
    }
    
    cout<<"Enter key to find: "<<endl;
    cin>>key;
    int jump=search(a,n,key);
    if(jump)
    {
        cout<<"Item found at position "<<jump+1<<endl;
    }
    else
    {
        cout<<"Item not Found"<<endl;
    }
    }


}