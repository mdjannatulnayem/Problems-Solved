#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n,k;
	vector<int> vec;
	vector<int> neg;
	vector<int> pos;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> k;
		if(k<0){
			neg.push_back(k);
		}
		else if(k>0){
			pos.push_back(k);
		}
		else{
			vec.push_back(k);
		}
	}
	if(pos.size()==0){
		for(int i=0;i<2;i++){
			k=*(neg.end()-1);
			pos.push_back(k);
			neg.pop_back();
		}
	}
	if(neg.size()%2==0){
		k=*(neg.end()-1);
		vec.push_back(k);
		neg.pop_back();
	}
	cout << neg.size() << " ";
	for(auto i:neg){
		cout << i << " ";
	}
	cout << endl;
	cout << pos.size() << " ";
	for(auto i:pos){
		cout << i << " ";
	}
	cout << endl;
	cout << vec.size() << " ";
	for(auto i:vec){
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
