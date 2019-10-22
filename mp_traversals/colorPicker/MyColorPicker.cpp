#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
  HSLAPixel pixel(hue, saturation , 0.5);
  
  hue += increase;
  if (hue >= 360) {
    hue -= 360;
  }
  saturation += 0.05;
  if (saturation > 1) {
    saturation = 0;
  }

  return pixel;
}

MyColorPicker::MyColorPicker(double initital_hue, double initial_saturation, double inc) {
  hue = initital_hue;
  saturation = initial_saturation;
  increase = inc;
}
