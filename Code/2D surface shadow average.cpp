#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;


int main() {
  int cycles = 1000000;
  double avg = 0;
  double sum = 0;
  for (int i = 0; i < cycles; i++) {
    //Definitions 
    double surface_area = 100;
    double shadow_area;
    double neg_shadow_area = 0;
    double random_num = 0;
    double angle = 0;
    //Random number generation and reduction too 000.00 format
    random_num = (rand() % 36000); 
    angle = random_num/100;
    //Shadow Area calculation
    neg_shadow_area = cos(angle)*surface_area;
    shadow_area = abs(neg_shadow_area);
    //Print shadow area for diagnostics
    //*cout << shadow_area << " ";
    //
    sum += shadow_area;
  }
  //Average calculation
  avg = sum / cycles;
  cout << "Average = " << avg;
  return 0;
}
