#include<iostream>

int check(int x){
    int flag,n[4];
    for(int i=0;i<4;i++){
        n[i]=x%10;
        x/=10;
    }
    flag=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i!=j && n[i]==n[j]){
                flag=0;break;
            }
        }
        if(!flag){
            break;
        }
    }
    return flag;
}

int main(){
    int result,year;
    std::cin >> year;
    year+=1;
    while((result=check(year))!=1){
        year++;
    }
    std::cout << year << std::endl;
    return 0;
}
