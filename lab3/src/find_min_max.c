#include "find_min_max.h"
#include "stdio.h"

#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min = array[begin];
  min_max.max = array[begin];

  for(int i=begin; i<end+1; i++){    
    if(min_max.min > array[i]){
      min_max.min = array[i];
      continue;
    }
    else if(min_max.max < array[i]){
      min_max.max = array[i];      
    }
  }
  return min_max;
}
