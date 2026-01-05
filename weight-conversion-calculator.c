#include <stdio.h>
#include <math.h>

int main() {

int choice ;
float fahrenheit ;
float celsius ;

printf("Fahrenheit to Celsius (1)\n") ;
printf("Celcius to Fahrenheit (2)\n") ;

printf("Please select your choice:") ;
scanf("%d", &choice) ;

if(choice == 1) {
     printf("Enter your fahrenheit value:") ;
     scanf("%f", &fahrenheit) ;
     celsius=(fahrenheit - 32) / (9/5) ;
     printf("Here is your celsius value:%.2f", celsius) ;
}

else if(choice == 2) {
      printf("Enter your celsius value:") ;
      scanf("%f", &celsius) ;
      fahrenheit=celsius * 9/5 + 32 ;
      printf("Here is your fahrenheit value:%.2f", fahrenheit) ;
}


   return 0;
}
