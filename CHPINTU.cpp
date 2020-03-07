#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)

int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n, m; cin>>n>>m;
		vector<ll> f, p;
		for(ll i=0; i<n; i++){
			ll x; cin>>x; f.pb(x);
		}
		for(ll i=0; i<n; i++){
			ll x; cin>>x; p.pb(x);
		}
		map<ll, ll> mp;
		for(ll i=0; i<n; i++){
			mp[f[i]]+=p[i];
		}
		ll minmp = INT_MAX;
		for(auto x: mp){
			if(minmp>x.second) minmp=x.second;
		}
		cout << minmp << endl;
	}
}