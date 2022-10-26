#include<stdio.h>
#include<stdbool.h>
int lan=0;
int n;
int S[10][10];

bool check(int i,int j,int k){
    for(int m=1;m<=i-1;m++){
        if(S[j][m]==k) return false;
    }
    for( int a=1;a<=j-1;a++){
        if(S[a][i]==k) return false;
    }
    return true;
}

void inkq(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",S[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    lan=lan+1;
}
void try(int i,int j){
    for(int m=1;m<=n;m++){
        if (check(i,j,m)){
            S[j][i]=m;
            if(j==n && i==n) lan=lan+1;
            else if(j==n) try(i+1,1);
            else try(i,j+1);
        }
    }
}

int main(){
    scanf("%d",&n);
    try(1,1);
    printf("%d",lan);
}