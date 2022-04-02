#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T,n,k;
    cin >> T;
    int *a=NULL;
    int *b=NULL;
    while(T>0){
        cin >> n >> k;
        a=new int[n];
        b=new int[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n,k>0;i++){
            for(int j=n-1;j>=0;j--){
                if(b[j]>a[i]){
                    swap(a[i],b[j]);
                    k--;
                }
            }
        }
        int s=0;
        for(int i=0;i<n;i++){
            s+=a[i];
        }
        cout << s << endl;
        T--;
        delete [] a;
        delete [] b;
    }
    return 0;
}
