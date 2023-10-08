#include <math.h>
float funck(float n, float m) {
float z;
if (n*n+m*m<2) {
 z=pow(1-sin(n*n+m*m),2);
 }
else {
 z=sqrt(n*n*m+8);
}
return z;
}
#include <stdio.h>
int main() {
float sum=0;
int k=0;
for (float x=0.2; x<=1; x+=0.5) {
 for (float y=1; y<=3; y+=1.2) {
  printf("При x=%f, y=%f, z(x,y)=%f\n", x,y, funck(x,y));
if (funck(x,y)>=0.5){
sum=sum+funck(x,y);
k++;
}
 }
}
printf("Среднее арифметичееское значений функции z = %f\n",sum/k);
return 0;
}
