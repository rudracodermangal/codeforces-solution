#include <iostream>
using namespace std;
int main() {
    int k,n,w;
    cin>>k>>n>>w;
    // k 1 banana cost ,, n totql money,, w total banana want to buy
    
    int q = ((w)*(2*k+(w-1)*k))/2;
    int e = q-n;
    if(e>0){
        cout<<e<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}
