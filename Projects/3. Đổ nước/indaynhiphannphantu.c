#include<stdio.h>
int n;
int S[100];
void inkq(){
    for(int i=1;i<=n;i++)
        printf("%d",S[i]);
    printf("\n");
}

void try(int i){
    for(int j=0;j<=1;j++){
        
            S[i]=j;
            if(i==n) {
                inkq();
            }else {
                try(i+1);
            }
        

}}

int main(){
    scanf("%d", &n);
    try(0);
    return 0;

}