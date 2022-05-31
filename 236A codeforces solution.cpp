#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   int n = s.size();
   int count=0;
   for (int i = 0; i < s.size(); i++) {
       if(s[i]==s[i+1]){
           count++;
       }
   }
   int q = n-count;
   if(q%2==0){
       cout<<"CHAT WITH HER!";
   }else{
       cout<<"IGNORE HIM!";
   }

    return 0;
}
