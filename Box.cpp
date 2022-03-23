#include "Box.h"
#include <iostream>
#include <cstring>
using namespace std;

// Implement setters and getters
void Box::setlength(double l){
  length=l;
  }
void Box::setwidth(double w){
  width=w;
  }
void Box::setheigth(double h){
  heigth=h;
  }
double Box::getlength(){
   return length;
 }
double Box::getwidth(){
  return width;
}
double Box::getheigth(){
  return heigth;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return lenght*width*heigth;
}
