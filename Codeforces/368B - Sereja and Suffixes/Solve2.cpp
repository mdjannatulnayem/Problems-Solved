#include <set>
#include <iostream>
using namespace std;

int main() {
	set<int> s;
	int n,m,k;
	int *q=NULL,*p=NULL;
	cin >> n >> m;
	p=new int[n];
	q=new int[n];
	for(int i=0;i<n;i++){
		cin >> p[i];
	}
	for(int i=n-1;i>=0;i--){
		s.insert(p[i]);
		q[i]=s.size();
	}
	while(m--){
		cin >> k;
		cout << q[k-1] << endl;
	}
	delete [] p;
	delete [] q;
	return 0;
}
