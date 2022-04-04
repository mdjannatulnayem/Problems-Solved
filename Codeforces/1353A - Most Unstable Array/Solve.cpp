
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,n,a,m;
	cin >> T;
	while(T--)
	{
	    cin >> n >> m;
	    if(n==1)
	    {
	        cout << "0" << endl;
	    }
	    else if(n==2)
	    {
	        cout << m << endl;
	    }
	    else if(n==3)
	    {
	        cout << 2*m << endl;
	    }
	    else
	    {
	        a = m/2;
	        cout << ((2*a)+2*abs(m-a)) << endl;
	    }
	}
	return 0;
}
