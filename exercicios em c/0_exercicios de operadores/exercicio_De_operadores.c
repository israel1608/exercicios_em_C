#include<stdio.h>
#include<math.h>


main(){
    float a,b,s,sub,mult,div;
    printf("escolha o primeiro numero: ");
    scanf("%f",&a);
    printf("escolha o segundo numero: ");
    scanf("%f",&b);
    s = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    printf("\n%.0f + %.0f = %.0f\n",a,b,s);
    printf("%.0f - %.0f = %.0f\n",a,b,sub);
    printf("%.0f * %.0f = %.0f\n",a,b,mult);
    printf("%.0f / %.0f = %.2f\n",a,b,div);

}
