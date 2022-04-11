//Proj.CppScript
#include <iostream>
#include <algorithm>

int binarySearch(int arr[],int n,int elem){
    int mid,start=0,end=n-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(elem==arr[mid]){
            return mid;
        }
        else if(elem<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int T,n,q,a,b,count,*arr=NULL;
    std::cin >> T;
    for(int i=1;i<=T;i++){
        std::cin >> n >> q;
        arr=new int[n];
        for(int i=0;i<n;i++){
            std::cin >> arr[i];
        }
        std::sort(arr,arr+n);
        std::cout << "Case " << i << ":\n";
        while(q--){
            std::cin >> a >> b;
            if(a>arr[0]){
                a=arr[0];
            }
            if(b>arr[n-1]){
                b=arr[n-1];
            }
            count=0;
            for(int i=a,x;i<=b;i++){
                if((x=binarySearch(arr,n,i))!=-1){
                    count++;
                }
            }
            std::cout << count << "\n";
        }
    delete [] arr;
    }
    return 0;
}
