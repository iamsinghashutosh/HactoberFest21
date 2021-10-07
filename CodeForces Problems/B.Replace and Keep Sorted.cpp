#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define int         long long
#define mod         1000000007
#define FAST        ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define f(i,n)      for(int i=0;i<n;i++)
#define fp(i,k,n)   for(int i=k;i<=n;i++)
#define fr(i,k,n)   for(int i=k;i>=n;i--)
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define dbg(x)      cout << (#x) << " is " << (x) << '\n' 
#define F           first
#define S           second
#define sz(x)       (int)(x).size()
#define lb          lower_bound
#define ub          upper_bound
#define mems(x)     memset(x,0,sizeof(x))
#define all(a)      a.begin(),a.end()
// typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
 
/*---------------------------------------------------------------------------------------------------*/ 


void solve()
{   
  int n,q,k;
  cin >> n >> q >> k;
  int a[n+1]={0};
  int pre[n+2]={0};
  pre[n+1]=k+1;
  fp(i,1,n)
   cin >> a[i],pre[i]=a[i]-a[i-1]-1;
  int dp[n+1]={0};
  fp(i,1,n)
  {
      dp[i]=pre[i]+pre[i+1];
      dp[i]+=dp[i-1];
  }
  while(q--)
  {
      int l,r;
      cin >> l >> r;
      cout << dp[r-1]+pre[r]+k-a[r]-dp[l]+pre[l+1]+a[l]-1 << '\n';
  }
}

signed main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
  FAST
  int T=1;
//   cin >> T;
  while(T--)
  {
    solve();
  }
  return 0;
}
