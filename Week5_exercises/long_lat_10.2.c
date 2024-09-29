#include<stdio.h>
#include"long_lat_10.2.h"
#include<stdbool.h>

void scan_long_lat_data(long_lat_t *long_lat)
{
    printf("Enter degrees: ");
    scanf("%d", &long_lat->degrees);

    printf("Enter minutes: ");
    scanf("%d", &long_lat->minutes);

    printf("Enter direction: ");
    scanf(" %c", &long_lat->direction);

}

bool long_lat_equal(long_lat_t long_lat1, long_lat_t long_lat2)
{
    return long_lat1.direction == long_lat2.direction && long_lat1.degrees == long_lat2.degrees
    && long_lat1.minutes == long_lat2.minutes;
}


void print_long_lat(long_lat_t long_lat)
{
    printf("%-15s: %d\n", "Degrees", long_lat.degrees);
    printf("%-15s: %d\n", "Minutes", long_lat.minutes);
    printf("%-15s: %c\n", "Direction", long_lat.direction);
}

