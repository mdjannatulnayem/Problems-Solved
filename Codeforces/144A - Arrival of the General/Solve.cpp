#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j]<arr[end]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}

void quickSort(int arr[],int start,int end){
    int pivot;
    if(start<end){
        pivot=partition(arr,start,end);
        //recursive calls after partition!
        quickSort(arr,pivot+1,end);
        quickSort(arr,start,pivot-1);
    }
}

int linearSearch(int arr[],int n,int elem,int order){
    if(order==1){
        for(int i=0;i<n;i++){
            if(arr[i]==elem){
                return i;
            }
        }
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(arr[i]==elem){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    int n,i,x;
    cin >> n;
    if(n<2 || n>100){
        return 0;
    }
    int arr[n],arr2[n];
    for(i=0;i<n;i++){
        cin >> x;
        if(x<1 || x>100){
            i--;continue;
        }
        arr[i]=x;
        arr2[i]=arr[i];
    }
    quickSort(arr2,0,n-1);
    int si=linearSearch(arr,n,arr2[n-1],1);
    int ei=linearSearch(arr,n,arr2[0],0);
    if(si<ei){
        cout << si+n-ei-1 << endl;
    }
    else{
        cout << si+n-ei-2 << endl;
    }
    return 0;
}
