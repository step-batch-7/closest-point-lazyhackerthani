#include <math.h>
#include "point.h"

double distance_of_points(POINT point1, POINT point2) {
  return sqrt(pow((point2.x - point1.x),2) + pow((point2.y - point1.y),2));
}

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location)
{
  double distance = distance_of_points(current_location, food_points[0]);
  *closest_food_location = food_points[0];
  for(int i = 1; i < points_length; i++) {
    double distance_to_current_food = distance_of_points(current_location, food_points[i]);
    if(distance > distance_to_current_food) {
      distance = distance_to_current_food;
      *closest_food_location = food_points[i];
    }
  }
}