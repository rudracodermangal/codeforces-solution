#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int arr[n];
       int arr1[n];
       for (int i = 0; i < n; i++) {
           cin>>arr[i];
           arr1[i]=i+1;
       }
       int c=0;
       if(n==1){
           cout<<"-1\n";
       }else{
           
       for(int i=0;i<n;i++){
           
           if(arr[i]==arr1[i]){
               if(i==n-1){
               c=arr1[n-2];
               arr1[n-2]=arr1[n-1];
               arr1[n-1]=c;
               }else{
               c=arr1[i];
               arr1[i]=arr1[i+1];
               arr1[i+1]=c;
               }
           }
           
       }
           for (int i = 0; i < n; i++) {
                cout<<arr1[i]<<" ";
            }
            
       }
        cout<<endl;
    }

    return 0;
}

