#include "point.h"
#include<stdio.h>

int main(void)
{
 POINT food_points[] = FOOD_POINTS;
 POINT organism_locations[] = ORGANISM_LOCATIONS;
 POINT closest_food_location ;
 for (int i = 0; i < LENGTH; i++)
 {
   get_closest_food(food_points, LENGTH, organism_locations[i], &closest_food_location);
   printf("Location of organism: [%d %d],  Closest food location: [%d %d]\n", organism_locations[i].x, organism_locations[i].y, closest_food_location.x, closest_food_location.y);
 }
  return 0;
}