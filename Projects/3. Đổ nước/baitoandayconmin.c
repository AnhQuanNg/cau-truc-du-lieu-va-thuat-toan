#include<stdio.h>
#include<math.h>

int n;
int S[100];
int T[100];
int K[100];
int ans;
int start_index[100];


void solve(){
    T[1]=S[1];
    
    start_index[1]=1;
    for(int i=2;i<=n;i++){
        if(T[i-1]<=0) {
            T[i]=S[i];
            start_index[i]=i;
        }
        else {
            T[i]=T[i-1]+S[i];
            start_index[i]=start_index[i-1];
        }
    }
}

int main(){
    int trongso;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&S[i]);
    solve();
    ans=S[1];
    K[1]=S[1];
    for(int i=2;i<=n;i++){
        K[i]=fmax(T[i],K[i-1]);
        if(K[i]>ans) {
            ans=K[i];
    }
    printf("%d",ans);
}






