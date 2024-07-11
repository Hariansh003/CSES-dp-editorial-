#include<bits/stdc++.h>
using namespace std;
typedef  long long  int ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define pb push_back
#define pbb pop_back
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
//--------------------------------------------------------------------------------------------------------------------------------

const int N = 0;
int mod =1e9+7;
int main(){
    int n ; 
    cin>>n;
    int tar ;
    cin>> tar;
    vector<int> v;
    rep(i,n){
        int x ; cin>>x;
        v.push_back(x);
    }
	vector<int> dp(tar+1,0);
    dp[0]=1;
    for(int x =1; x<=tar ; x++){
        for(int i = 0;i<n && v[i] <= x;i++){
            dp[x]= (dp[x] + dp[x-v[i]])%mod;
        }
    }
    cout<<dp[tar]<<endl;
		
	
	return 0;
 }