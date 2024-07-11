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
	int n;
	cin>>n;
	vector<int> dp(n+1,0);
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=6 && j<=i;j++){
			dp[i] = (dp[i] + dp[i-j])%mod;
		}
	}
	cout<<dp[n]%mod<<endl;
	return 0;
 }