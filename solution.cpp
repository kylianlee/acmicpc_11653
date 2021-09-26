//
// Created by Kylian Lee on 2021/09/26.
//

#include <iostream>

using namespace std;

int main(){
  int num;
  cin >> num;
  while(num > 1){
    for(int i = 2; i <= num; i++){
      if(!(num % i)){
        num /= i;
        printf("%d\n", i);
        break;
      }
    }
  }
  return 0;
}