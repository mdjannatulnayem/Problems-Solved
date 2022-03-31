#include<iostream>
using namespace std;

int main(){
    int n,i,flag,s1,s2;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    flag=1;
    s1=0;s2=0;
    for(int start=0,end=n-1;start<=end;){
        if(flag){
            if(arr[start]>arr[end]){
                s1+=arr[start];
                start++;
            }
            else{
                s1+=arr[end];
                end--;
            }
            flag=0;
        }
        else{
            if(arr[start]>arr[end]){
                s2+=arr[start];
                start++;
            }
            else{
                s2+=arr[end];
                end--;
            }
            flag=1;
        }
    }
    cout << s1 << " " << s2 << endl;
    return 0;
}
