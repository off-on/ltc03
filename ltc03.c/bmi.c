#include "stdio.h"

float BMI;
float calcbmi(float W, float H){
  BMI=W*10000/(H*H);
  return BMI;
}

int main(){
  printf("\n\nThis program is going to pretend to be aware of Body Mass Index formula and its meaning.\n");
  float W,H;
  printf("Enter your weight in kg: ");
  scanf("%f",&W);
  printf("Enter your height in cm: ");
  scanf("%f",&H);
  calcbmi(W,H);

printf("Your BMI is: %.3f",BMI);
printf("\nIt could be categorized as: ");

if (BMI<15)                       { printf("Very severely underweight");}
else if ((BMI>=15) && (BMI<16))   { printf("Severely underweight");}
else if ((BMI>=16) && (BMI<18.5)) { printf("Underweight");}
else if ((BMI>=18.5) && (BMI<25)) { printf("Normal (healthy weight)");}
else if ((BMI>=25) && (BMI<30))   { printf("Overweight");}
else if ((BMI>=30) && (BMI<35))   { printf("Moderately obese");}
else if ((BMI>=35) && (BMI<40))   { printf("Severely obese");}
else if (BMI>=40)                 { printf("Very severely obese");};
printf("\n\n\n");
return 0;
}
