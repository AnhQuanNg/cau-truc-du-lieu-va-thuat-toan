#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int n;
int S[100];
 
bool check(int i,int j){
    int k;
    for(k=0;k<=j-1;k++){
        if(i==S[k] || fabs(i-S[k])==fabs(j-k)) return false;
    }
    return true;
 }

void inkq(){
    for(int i=0;i<=n-1;i++){
        printf("%d %d   ",i+1,S[i]+1);
    }
    printf("\n");
 }
 
void try(int i){
    for(int j=0;j<=n-1;j++){
        if (check(j,i)){
            S[i]=j;
            if(i==n-1) inkq();
            else try(i+1);
        }
    }
}
 

int main(){
    scanf("%d",&n);
    try(0);
}
