#include <cstdio>
#include <cstdlib>
#include <ctime>
int main(){
  clock_t start,finish;
  double duration;
  start=clock();
  // 실행 시간을 측정하고자 하는 코드
  finish=clock();
  duration=(double)(finish-start)/CLOCKS_PER_SEC;
  printf("%f 초입니다.\n",duration);
}
