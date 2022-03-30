#include<stdio.h>
#include<string.h>

int main(){
    int n,flag,i=0;
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    n=strlen(str1);
    char *a=strupr(str1);
    char *b=strupr(str2);
    while(i<n){
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
    printf("%d\n",flag);
    return 0;
}
