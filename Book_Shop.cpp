#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define int long long 
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

void solve()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>c(n);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    vector<int>p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int dp[n+1][x+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            dp[i][j]=0;
            
            int p1=0;
            if(i!=0)
            {
                p1=dp[i-1][j];
            }
            int p2=0;
            if(j-c[i]>=0)
            {
                if(i==0)
                {
                    p2=p[i];
                }
                else
                    p2=dp[i-1][j-c[i]]+p[i];
            }
            dp[i][j]=max(p1,p2);
            
        }
    }
    cout<<dp[n-1][x]<<endl;
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