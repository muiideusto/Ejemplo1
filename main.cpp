/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME_MS 1 //Etiqueta con la constante del tiempo de espera entre iteración del while

DigitalOut led(D5); //Diodo led conectado en el pin D5
DigitalIn boton(D4); //Boton conectado en el pin D4

int main()
{
    printf("Hola mundo\n"); //Mensaje de comienzo de programa

    while (true) // Bucle para que se ejecute constantemente
    {
        if(boton){  //Miro si el boton esta pulsado
                led=1; //Enciendo el led, asignando un 1 directamente al objeto led.
        }else{
            led.write(0); //Apago el led llamando al metodo write del objeto led.
        }
        
        thread_sleep_for(WAIT_TIME_MS); //Espero el tiempo indicado en la etiqueta antes de volver a sondear el boton.
    }
}
