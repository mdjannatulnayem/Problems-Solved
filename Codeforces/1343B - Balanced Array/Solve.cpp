#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T>0){
        int n,q;
        cin >> n;
        q=n/2;
        if(q%2!=0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            int s=0;
            for(int i=1;i<=q;i++){
                s+=(i*2);
                cout << i*2 << " ";
            }
            for(int i=1,j=1;i<q;i++,j+=2){
                s-=j;
                cout << j << " ";
            }
            cout << s << endl;
        }
        T--;
    }
    return 0;
}
