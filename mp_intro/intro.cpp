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



cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  return png;
}
