#include<iostream>
using namespace std;

bool f(int num, int *temp) {
if ( num >= 0 and num <=9) {
int ldt = (*temp)%10;
(*temp)/= 10;
return (num == ldt);
}
 bool result (f(num/10 , temp) and (num%10) ==  ((*temp)%10));
 (*temp) /= 10 ;
 return result;
}

int main(){
int num = 1221;
int anothernumber = num;
int *temp = &anothernumber;
cout<< f(num, temp);


return 0;
}