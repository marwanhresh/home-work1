#include "myMath.h"
#define exp 2.7182
double pow_(double x, int y){

double res =1.0000;
if(y==0){
return 1;
}
int i;
for(i=0; i<y; i++)
{
res= res*x;
}
return res;
}

double Exp(int x){
double result =0;
result =pow_(exp,x);
return result;
}
