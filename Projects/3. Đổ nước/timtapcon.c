#include<stdio.h>

int n;
int m;
int S[100];

void inkq(){
    for (int i=1;i<=m;i++)
        printf("%d",S[i]);
    printf("\n");
}

void try(int i){
    int j;
    for(j=S[i-1]+1;j<=n-m+i;j++){
        S[i]=j;
        if(i==m) inkq();
        else try(i+1);
    }
}
int main(){
    
    scanf("%d%d",&m,&n);
    try(1);
}