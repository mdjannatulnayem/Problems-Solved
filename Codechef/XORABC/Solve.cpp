#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
	ll t,i=0;
	cin>>t;
	while(t--)
	{
	   ll n;
	   cin>> n;
	    ll a = n& ~(n-1);
	    if(n&1 || n==a)
            cout<<-1 << endl;
        else
            cout<<a/2<<" "<<n/2<<" "<<(n-a)/2<<endl;
	}
}
