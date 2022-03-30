#include<cctype>
#include<iostream>
using namespace std;

int main(){
    int n,flag,i=0;
    std::string a,b;
    std::cin >> a;
    std::cin >> b;
    if(a.size()!=b.size() && a.size()>100){
        return 0;
    }
    for(int i=0;i<a.size();i++){
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
    }
    while(i<a.size()){
        if(a[i]>b[i]){
            flag=1;
            break;
        }
        else if(a[i]<b[i]){
            flag=-1;
            break;
        }
        else{
            flag=0;
        }
        i+=1;
    }
    std::cout << flag << std::endl;
    return 0;
}
