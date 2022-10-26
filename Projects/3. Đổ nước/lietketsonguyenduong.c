#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int n,m;
int S[100];
int T=0;

void inkq(){
    for(int i=0;i<=m-1;i++){
        printf("%d ",S[i]);
    }
    printf("\n");
}

bool check(int j, int i){
    if(j<m-1) return true;
    return T+i==n;

}
void try(int j){
    for(int i=1;i<=n-T-(m-j-1);i++){
        if (check(j,i)){
            S[j]=i;
            T=T+S[j];
            if(j==m-1) inkq();
            else try(j+1);
            T=T-S[j];
        }
    }
}

int main(){
    scanf("%d%d",&n,&m);
    try(0);
}