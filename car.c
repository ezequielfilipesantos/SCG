/*****************************************************************//**
 * \file   car.c
 * \brief  Car/Trim Generator
 * 
 * \author Ezequiel Santos
 * \date   November 2023
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "car.h"

#define _CRT_SECURE_NO_WARNINGS

#define START_YEAR 1946
#define END_YEAR 2020

const char* body_types[] = { "Sedan", "Wagon", "Hatchback", "Coupe", "SUV", "Utility", "MPV", "Convertible", "Van" };
const char* engine_locations[] = { "Front", "Mid", "Rear" };
const char* engine_mountings[] = { "Transverse", "Longitudinal" };
const char* drive_types[] = { "FWD", "RWD", "AWD", "4x4" };

int generate_random_number(int min, int max) {
    return rand() % (max - min + 1) + min;
}

const char* choose_random_item(const char* items[], int item_count) {
    return items[generate_random_number(0, item_count - 1)];
}

void generate_random_car(char* result) {
    int year = generate_random_number(START_YEAR, END_YEAR);
    const char* body = choose_random_item(body_types, sizeof(body_types) / sizeof(body_types[0]));
    const char* engine_location = choose_random_item(engine_locations, sizeof(engine_locations) / sizeof(engine_locations[0]));
    const char* engine_mounting = choose_random_item(engine_mountings, sizeof(engine_mountings) / sizeof(engine_mountings[0]));
    const char* drive = choose_random_item(drive_types, sizeof(drive_types) / sizeof(drive_types[0]));

    char engine_string[20];
    choose_random_engine(engine_string);

    sprintf(result, "A %d %s %s with a %s-%s mounted %s!", year, drive, body, engine_location, engine_mounting, engine_string);
}
