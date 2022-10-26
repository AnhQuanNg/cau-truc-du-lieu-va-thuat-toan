#include<stdio.h>

int BinarySearch(int *A,int key,int left,int right){
        if(left > right) return -1;
        int mid=(left+right)/2;
        if(*(A+mid)==key) return mid;
        if(*(A+mid)>key) return BinarySearch(A,key,left,mid-1);
        if(*(A+mid)<key) return BinarySearch(A,key,mid +1,right);

    
}
int main(){
    int B[10]={1,2,3,4,5,6,7,8,9,10};
    int *A=B;
    int key;
    scanf("%d",&key);
    printf("%d",BinarySearch(A,key,0,9));
}