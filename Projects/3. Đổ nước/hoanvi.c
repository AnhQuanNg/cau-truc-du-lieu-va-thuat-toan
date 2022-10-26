#include<stdio.h>
#include<stdbool.h>
int n;
int S[100];

void inkq(){
    for(int i=1;i<=n;i++)
        printf("%d",S[i]);
    printf("\n");
}

bool check(int i,int j){
    int k;
    for(k=1;k<i;k++){
        if (S[k]==j) return false;
    }
    return true;
    
}

void try(int k){
    for(int j=1;j<=n;j++){
        if (check(k,j)){
            S[k]=j;
            if(k==n) inkq();
            else try(k+1);
        } 
    }
}

int main(){
    scanf("%d",&n);
    try(1);
}
