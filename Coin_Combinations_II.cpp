#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define ff first
#define sc second
#define endl '\n'
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define Pi 2.0 * acos(0.0)
#define getbit(n, i) (((n) & (1LL << (i))) != 0) 
#define setbit0(n, i) ((n) & (~(1LL << (i)))) 
#define setbit1(n, i) ((n) | (1LL << (i))) 
#define togglebit(n, i) ((n) ^ (1LL << (i))) 
#define firstone(n) ((n) & (-(n))) 
#define lastone(n) ((64-__builtin_clzll(n)))
const int mod =1e9+7;
const int N=2*1e6+2;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;
int cont=0;
vector<int>v(N,-1);
int dp(int n,int x,vector<int>&v)
{
    if(x==0)
    {
        return 1;
    }
        
    if(n<0)return 0;
    if(v[x]!=-1)
        return v[x];
    for(int i=n;i>=0;i--)
    {
        cont++;
        if(x-v[i]<0)
        {
            continue;
        }
        int val=(dp(i-1,x,v)+dp(i,x-v[i],v))%mod;
        v[x]=val;
        return val;
    }
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(all(v));
    cout<<dp(n-1,x,v)<<endl;
    cout<<cont<<endl;
}
signed main()
{
    //fast;
    //solve(); return 0;
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}