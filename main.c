/*****************************************************************//**
 * \file   main.c
 * \brief  
 * 
 * \author Ezequiel Santos
 * \date   November 2023
 *********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "car.h"

#define _CRT_SECURE_NO_WARNINGS

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

int main() {
    srand((unsigned int)time(NULL));

    char car_description[256];

    while (1) {
        generate_random_car(car_description);

        printf("Your next car will be:\n%s\n", car_description);
        printf("\n...Press Enter to generate another car idea and clear the console...\n");
        getchar();  // Wait for a key press

        // Clear the console
        system(CLEAR_SCREEN);
    }

    return 0;
}
