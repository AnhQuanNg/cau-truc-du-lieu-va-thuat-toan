#include<stdio.h>
#include<math.h>

int F[10000][10000];
char trace[100][100];
int i,j;

int A[100];
int B[100];

void input(){
    scanf("%d%d",&i,&j);
    for(int a=1;a<=i;a++){
        scanf("%d",&A[a]);
    }
    for(int b=1;b<=j;b++){
        scanf("%d",&B[b]);
    }
    
}

void dodai(){

    for(int m=0;m<=i;m++){
        F[m][0]=0;
    }
    for(int n=0;n<=j;n++){
        F[0][n]=0;
    }
    for(int a=1;a<=i;a++){
        for(int b=1;b<=j;b++){
            if(A[a]==B[b]) {
                F[a][b]=F[a-1][b-1]+1;
                trace[a][b]='C';
            }
            else if(F[a-1][b]>F[a][b-1]){
                F[a][b]=F[a-1][b];
                trace[a][b]='L';
            }
            else{
                F[a][b]=F[a][b-1];
                trace[a][b]='U';
            }
        }
    }
}

void solution(){
    while(i!=0){
        if(trace[i][j]=='C') {
            printf("%d ",A[i]);
            i=i-1;
            j=j-1;
        }
        else if(trace[i][j]=='L'){
            i=i-1;
        }
        else j=j-1;
    }
}

int main(){
    input();
    dodai();
    solution();
    return 0;
    
}

