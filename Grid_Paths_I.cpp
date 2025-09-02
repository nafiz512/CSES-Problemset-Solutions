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
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    if(s[0][0]=='*' || s[n-1][n-1]=='*')
    {
        cout<<0<<endl;
        return;
    }
    int dp[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 && j==0)
            {
                dp[i][j]=1;
                continue;
            }
            int ui=i-1,uj=j;
            int di=i,dj=j-1;
            int p1=0;
            if(ui>=0 && ui<n && uj>=0 && uj<n)
            {
                if(s[ui][uj]=='.')
                    p1=dp[ui][uj];
            } 
            int p2=0;
            if(di>=0 && di<n && dj>=0 && dj<n)
            {
                if(s[di][dj]=='.')
                    p2=dp[di][dj];
            }
            dp[i][j]=(p1+p2)%mod;
        }
    }
    cout<<dp[n-1][n-1]<<endl;
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