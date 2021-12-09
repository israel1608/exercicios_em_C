#ifndef UTIL_H
#define UTIL_H
#include<math.h>
int fatR(int a);
int fatR(int a){
     int fat = 1;
   for(int i=1;i<=a;i++){
       fat = fat * i;
    }
    printf("%i",fat);
}
#endif 