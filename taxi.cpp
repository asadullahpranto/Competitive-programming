#include <iostream>
using namespace std;

int main() {
  int taxi=0, n, total[3]={0,0,0};
  cin >> n;
  int member[n];
  for (int i=0; i<n; i++) {
    cin >> member[i];
    if (member[i]==4) {
      taxi++;
    } else {
      total[member[i]-1]++;
    }
  }
  if (total[0]!=0) {
    if (total[2]>0||total[1]>0){
      while(total[0]>0&&total[2]>0) {
        taxi++;
        total[0]--;
        total[2]--;
      }
      while(total[0]>0&&total[1]>0) {
        taxi++;
        total[0]-=2;
        total[1]--;
      }
    } else if (total[0]>=4) {
      taxi += total[0]/4;
      total[0] %= 4;
    } else {
      taxi++;
      total[0]=0;
    }
  }
  if (total[1]>1){
    taxi += total[1]*2/4;
    total[1] = (total[1]*2%4)/2;
  }
  if (total[0]<4&&total[0]>0) {
    taxi++;
    total[0]=0;
  } else if (total[0]>=4){
    taxi += total[0]/4;
    if (total[0]%4!=0) {
      taxi++;
      total[0]=0;
    } else {
      total[0]=0;
    }
  }
  for (int i=0; i<3; i++) {
    if (total[i]<=0) {
      continue;
    }
    taxi += total[i];
  }
  cout << taxi;

  return 0;
}
