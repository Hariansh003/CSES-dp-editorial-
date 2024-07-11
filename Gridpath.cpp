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
int mod = 1e9 +7;
int main(){
	int n ;cin>>n;
	vector<vector<char>> v(n, vector<char> (n , '#'));
	rep(i,n){
		rep(j,n){
			char x;
			cin>>x;
			v[i][j] = x;
		}
	}
	vector<vector<int>> dp(n+1 , vector<int>(n+1 , 0));
	dp[0][0]= 1;
	for(int i = 0; i<n;i++)
	{
		for(int j=0;j<n;j++){
			//down 
			if(v[i][j] == '*'){
				dp[i][j] =0;
				continue;
			}
			int left = 0;
			int right = 0;
			if(i-1 >=0 && v[i-1][j] != '*' ){
				(dp[i][j] += dp[i-1][j]) %= mod;
			}
			if(j-1 >=0 && v[i][j-1] != '*'){
				(dp[i][j] += dp[i][j-1]) %= mod;
			}
			
		}
		cout<<endl;
	}
	cout<<(dp[n-1][n-1])<<endl;
	return 0;
 }