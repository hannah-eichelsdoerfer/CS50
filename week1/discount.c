#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage); // like this, when compiling main has already seen the word discount before

int main(void){
  float regular = get_float("Regular Price: ");
  int percent_off = get_int("Percent Off: ");
  float sale = discount(regular, percent_off); // takes of 15% of the regular price
  printf("Sale Price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
  // float sale = price * 0.85;
  // return sale;
  return price * (100 - percentage) / 100;
}