#include <stdio.h>
#include <stdlib.h>

void escreveInvertidoRec(int n);

int main() {
 escreveInvertidoRec(12345);
  return 0;
}
void escreveInvertidoRec(int n){
printf("%d", n % 10);
if(n >= 10){
escreveInvertidoRec(n/10);
}
}