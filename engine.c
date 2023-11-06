/*****************************************************************//**
 * \file   engine.c
 * \brief  Engine Generator
 * 
 * \author Ezequiel Santos
 * \date   November 2023
 *********************************************************************/
#include "car.h"

#define _CRT_SECURE_NO_WARNINGS


void choose_random_engine(char* engine_string) {
    const char* engine_layouts[] = { "Inline-", "60° V", "90° V", "Boxer-" };
    int min_cylinders[][4] = { {3, 4, 5, 6}, {6, 8, 12}, {6, 8, 10}, {4, 6} };

    int layout_index = generate_random_number(0, sizeof(engine_layouts) / sizeof(engine_layouts[0]) - 1);
    const char* layout = engine_layouts[layout_index];
    const int* min_cyl = min_cylinders[layout_index];

    int cylinders = min_cyl[generate_random_number(0, sizeof(min_cyl) / sizeof(min_cyl[0]) - 1)];

    sprintf(engine_string, "%s%d", layout, cylinders);
}
