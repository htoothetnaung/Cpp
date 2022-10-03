#include<stdio.h>
#include<math.h>
#define WinHtut 20
int main(){
    int remainder[WinHtut];
    char hexa[WinHtut];
    int i=0;
    int x=0;
    int y=0;
    int decimal=0;
    int length=0;
    printf("Please enter your Hexadecimal number :");
    gets(hexa);

    for(i=0; hexa[i]!='\0'; i++){

        if (hexa[i] >='0' && hexa[i] <='9')
          decimal += (hexa[i]-48)*pow(16,i);


        if (hexa[i] >='A' && hexa[i] <='F')
          decimal += (hexa[i]-55)*pow(16,i);


        if (hexa[i] >='a' && hexa[i] <='f')
          decimal += (hexa[i]-87)*pow(16,i);
        }


    printf("The decimal value is %d\n",decimal);


    while(decimal!=0){

        remainder[x]=decimal%2;
        decimal=decimal/2;
        x++;

    }


    printf("The size of the binary array is %d\n",x);
    printf("The final result of binary number is = ");


    for(y=x-1;y>=0 ;y++){

      printf("%d",remainder[y]);
    }


    return 0;
}

