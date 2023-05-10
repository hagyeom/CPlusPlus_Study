// 최댓값을 찾는 알고리즘
int ArrayMax(int score[],int n){
  int tmp=score[0];
  for(int i=1;i<n;i++){
    if(score[i]>tmp){
      tmp=score[i];
    }
  }
  return tmp;
}
#include <cstdio>
int main(){
  int arr[5]={1,2,3,4,5};
  int tmp=ArrayMax(arr,5);
  printf("배열의 최댓값:%d\n",tmp);
}
