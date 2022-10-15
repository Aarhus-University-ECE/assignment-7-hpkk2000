extern "C"{
    #include "../include/taylor_sine.h"
}
#include <assert.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    //// Test cases for Exercise 1b) den printede outpur viser os forskellen mellem de 2 funktioner
    for (int i = -31; i < 32; i++) {
        double x = i * 0.1;
        printf("\n\n");
        double y = taylor_sine(x,1);
        double z = sin(x);
        printf("\n");

        printf("x = %f, taylor_sine(x) = %f, sin(x) = %f", x, y, z);
        }
        
    //Intervallerne af input x hvor de 2 funktioner er mest ens, er når x er tæt på 0:
    //Dette kan ses ved for loopet ovenover
    //En større præcisions værdi vil bestemme hvor mange interaktioner loopet i Taylor_sine funktionen vil køre. Hvis x er langt fra 0 vil funktionen være nød til at skulle køre flere interaktioner

    return 0;
}