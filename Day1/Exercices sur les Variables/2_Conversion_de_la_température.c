// Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

// K = C + 273.15

#include <stdio.h>

int main(){
  float userTemperatureInput;
  float userTemperatureInKelvin;
  printf("enter the temperature: ");
  scanf("%f",&userTemperatureInKelvin);
  userTemperatureInKelvin = userTemperatureInput + 273.15;
  printf("\n%f",userTemperatureInKelvin);
}