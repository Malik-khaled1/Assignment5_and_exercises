#pragma once  
#include<stdbool.h>

typedef struct 
{
    int degrees; // Grader
    int minutes; // Minutter
    char direction; // Retning (N,S,E,W)
}long_lat_t;


void print_long_lat(long_lat_t long_lat);
bool long_lat_equal(long_lat_t long_lat1, long_lat_t long_lat2);
void scan_long_lat(long_lat_t *p);


