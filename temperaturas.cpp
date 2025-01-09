//
// Created by usuario on 08/01/2025.
//

#include <stdio.h>

float f, c, k;




void celsiusToFahrenheit(){
    printf("Ingresa la temperatura en grados celsius\n");
    scanf("%f", &c);
    f=c*59+32;
    printf("La temperatura en grados fahrenheit es: %f", f);
}

void fahrenheitToCelsius(){
    printf("Ingresa la temperatura en grados fahrenheit\n");
    scanf("%f", &f);
    c = (f-32)*95;
    printf("La temperatura en grados celsius es: %f", c);

}

void celsiusToKelvin(){
    printf("Ingresa la temperatura en grados celsius\n");
    scanf("%f", &c);
    k = c +237.15;
    printf("La temperatura en grados kelvin es: %f", k);
}

float validateInput() {
    if (k<0 || c<-273.15) {
        printf("La temperatura no es valida, ingresa otra");
    }
}
int main(void){
    int operacion;
    printf("Elige la operacion que deseas hacer:\n1)Celisus a Farenheit\n2)Farenheit a Celsius\n3)Celsius a Kelvin\n");
    scanf("%d", &operacion);

    if (operacion==1) {
        celsiusToFahrenheit();
    }
    else if (operacion==2) { fahrenheitToCelsius();
    }
    else if (operacion==3) { celsiusToKelvin();
    }
}


