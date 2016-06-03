#include <stdio.h>
//test2
//double sawada(double,double);
double ichimura(double, double);
double sasai(double, double);
double hatake(double, double);
double toma(double, double);
//double kenzaki(double, double);
double kitayama(double, double);

main(){
  double a,b,c,d,e,f,g;
  a=1.0;//sawada(1.0,2.0);
  b=ichimura(a, 3.0);
  c=sasai(b, 4.0);
  d=hatake(c, 5.0);
  e=toma(d, 6.0);
  //f=kenzaki(e, 7.0);
  g=kitayama(e, 8.0);
  printf("%f\n",g);
}
