//GETS TLE!

#include <set>
#include <iostream>
using namespace std;

int main() {
	set<int> s;
	int n,m,k;
	int *p=NULL;
	cin >> n >> m;
	p=new int[n];
	for(int i=0;i<n;i++){
		cin >> p[i];
	}
	while(m--){
		cin >> k;
		for(int i=k-1;i<n;i++){
			s.insert(p[i]);
		}
		cout << s.size() << endl;
		s.clear();
	}
	delete [] p;
	return 0;
}
