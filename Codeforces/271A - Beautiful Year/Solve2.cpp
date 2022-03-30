#include <bits/stdc++.h>

int check(int x){
    int flag=1;
    std::set<int> n;
    for(int i=0;i<4;i++){
        n.insert(x%10);
        x/=10;
    }
    return n.size();
}

int main(){
    int result,year;
    std::cin >> year;
    year+=1;
    while((result=check(year))!=4){
        year++;
    }
    std::cout << year << std::endl;
    return 0;
}
