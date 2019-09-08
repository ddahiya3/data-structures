#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>

using namespace cs225;


void rotate(std::string inputFile, std::string outputFile) {

  PNG* input = new PNG();
  input->readFromFile(inputFile);

  unsigned width = input->width();
  unsigned height = input->height();

  PNG* output = new PNG(width, height);

  for (unsigned y = 0; y < height; y ++) {
    for (unsigned x = 0; x < width; x ++) {

      HSLAPixel& afterRotation = input->getPixel(width - x - 1, height - y - 1);

      HSLAPixel& currOutPixel = output->getPixel(x,y);

      currOutPixel = afterRotation;

    }
  }

  output->writeToFile(outputFile);

  delete input;
  delete output;

}



double get_random(double min, double max) {
  return (max - min) * ( (double)rand() / (double)RAND_MAX ) + min;
}

double pick_random_hue(unsigned x_to_consider, double green, double orange, double random) {
  if (x_to_consider % 2 == 0) {
        return orange + random;
      } else {
        return green + random;
      }
}


cs225::PNG myArt(unsigned int width, unsigned int height) {
  double base_hue_orange = 11; // orange
  double base_hue_green = 97; //green
  cs225::PNG png(width, height);

  for (unsigned y = 0; y < height; y++) {
    for (unsigned x = 0; x < width; x++) {

      double random = get_random(-1.7 * x, 1.7 * y); // 1.7 seemed to print pretty artworks :)

      double random_hue = pick_random_hue(x,base_hue_green,base_hue_orange,random);

      HSLAPixel &current_pixel = png.getPixel(x,y);
      current_pixel.h = random_hue;
      current_pixel.s = 1;
      current_pixel.l = 0.5;

    }
  }

  return png;
}


