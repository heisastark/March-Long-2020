#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)

ll count1s(ll n){
  ll count=0;
  while(n!=0){
  	n = n&(n-1);
  	count++;
  }
  return count;
}

int main(){
	ll t; cin>>t;
	while(t--){
		ll n, q; cin>>n>>q;
		ll A[n];
		for(ll i=0; i<n; i++){
			cin>>A[i];
		}
		ll P[q];
		for(ll i=0; i<q; i++){
			cin>>P[i];
		}
		for(ll i=0; i<q; i++){
			ll even=0, odd=0;
			for(ll j=0; j<n; j++){
				ll ixorj=P[i]^A[j];
				ll onecount = count1s(ixorj);
				if(onecount%2==0) even++;
				else if(onecount%2!=0) odd++;
			}
			cout << even << " " << odd << endl;
		}
	}
}