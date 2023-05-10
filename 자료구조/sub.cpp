// 함수의 파라미터로서의 배열
#include <cstdio>
#define MAX_SIZE 10
// 배열을 파라미터로 받는 함수
void sub(int x,int arr[]){
  x=10;
  arr[0]=10;
}
// 주 함수
int main(){
  int var; 
  int list[MAX_SIZE];

  var=0; 
  list[0]=0;
  sub(var,list); // 변수와 배열을 매개변수로 전달
  printf("var=%d,list[0]=%d\n",var,list[0]); // var=0,list[0]=10
  // 함수 sub()의 실행 이후에도 변수 var의 값은 변경되지 않았지만
  // 배열의 원소 내용은 변경됨.
  // 배열의 이름이 포인터의 역할을 하여 배열의 주소를 함수로 전달하기 때문.
}
