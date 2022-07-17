#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f;
void dfs(ll i, vector<ll> adj[], ll color[])
{
    
    ll j, l=adj[i].size();
    
    for(j=0; j<l; j++)
    {
        if(color[adj[i][j]]==-1)
        {
            color[adj[i][j]]=1-color[i];
            dfs(adj[i][j], adj, color);
        }else if(color[i]==color[adj[i][j]]){
            f++;
            break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, a, b, i;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        f=0;
        
        vector<ll> adj[n+1];
        ll color[n+1];
        
        for(i=1; i<=n; i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
            
            color[i]=-1;
        }
        
        for(i=1; i<=n; i++)
        {
            if(adj[i].size()>2){
                f++;
                break;
            }
        }
        
        for(i=1; i<=n && f==0; i++)
        {
            if(color[i]==-1)
            {
                color[i]=0;
                dfs(i, adj, color);
            }
        }
        
        if(f==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
