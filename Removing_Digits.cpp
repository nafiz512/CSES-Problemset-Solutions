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
#define inf 1e9
const int mod =1e9+7;
const int N=2*1e6+2;
const string yes="YES",no="NO";
//cout << fixed << setprecision(20) << p << endl;

void solve()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,inf);
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        vector<int>d;
        int n1=i;
        while(n1>0)
        {
            if(n1%10!=0)
            {
                d.pb(n1%10);
            }
            n1/=10;
        }
        for(int x:d)
        {
            dp[i]=min(dp[i],dp[i-x]+1);
        }
    }
    cout<<dp[n]<<endl;
}
signed main()
{
    fast;
    //solve(); return 0;
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}