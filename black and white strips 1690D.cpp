/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>arr(n+1);
        arr[0]=0;
        for(int i=0;i<n;i++){
          arr[i+1]=arr[i];
          if(s[i]=='W'){
              arr[i+1]++;
          }
        }
        int ans=n;
        for (int i = 0; i <= n-k; i++) {
            ans=min(ans,arr[k+i]-arr[i]);
        }
        cout<<ans<<endl;
        
    }

    return 0;
}

