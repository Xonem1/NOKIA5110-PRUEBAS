#include "mbed.h"

PwmOut buzzer(D6);

int main(){
    buzzer.period(1.0/440.0);
    buzzer=0.5;
}