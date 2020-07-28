#include<stdio.h>
#include<stdlib.h>
int getAns(int arr[],int N){
    int sumOne = 0;
    int sumTwo = 0;
    int minArr[N-1];
    int i,j;
    for(i=0;i<N-1;i++){
        sumTwo = 0;
        sumOne+=arr[i];
        for(j=i+1;j<N;j++){
            sumTwo+=arr[j];
        }
        minArr[i] = abs(sumOne- sumTwo);
    }
    int ans = minArr[0];
    for(i=0;i<N-1;i++){
        if(minArr[i]<ans){
            ans = minArr[i];
        }
    }
    return ans;
}

int main(){
    int num;
    scanf("%d",&num);
    int arr[num],i,j;
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
        if(0<arr[i] && arr[i]>=1024){
            return 0;
        }
    }
    printf("%d",getAns(arr,num));
}