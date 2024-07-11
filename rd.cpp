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
int main(){
	int n; cin>>n;
	vector<int> dp(n+1,n);
	if(n<=9){
		cout<<"1";
		return 0;
	}
	for(int i=1;i<=9;i++){
		dp[i]= 1;
	}
	for(int x=10;x<=n;x++){
		int val = x;
		while(val >0){
			int i = val%10;
			
			dp[x] = min(dp[x] , 1+dp[x-i]);
			//cout<< " "<<dp[x]<<" ";
			val = val/10;
		}
	}
	cout<<dp[n]<<endl;
	return 0;
 }