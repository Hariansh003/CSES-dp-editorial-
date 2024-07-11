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
int mod = 1e9+7;
int main(){
	int n ,tar;
	cin>>n>>tar;
	vector<int> arr(n,0);
	rep(i,n){
		int x;
		cin>>x;
		arr[i] = x;
	}
	vector<vector<int>> dp(n+1 , vector<int> (n+1,0));
	dp[0][0]=1;
	for(int x =1;x<=tar;x++){
		for(int i =1;i<=n ;i++){
			if(arr[i] <=x){
				dp[i][x] = dp[i][x-arr[i]];
			}
			dp[i][x] += (dp[i-1][x])%=mod;
		}
	}
	cout<<dp[n][tar];
	return 0;
 }