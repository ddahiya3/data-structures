#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image csgo; 
  csgo.readFromFile("csgo.png");
  csgo.scale(4);

  Image first;    
  first.readFromFile("enderman.png");

  Image first_s;
  first_s.readFromFile("enderman.png");
  first_s.illinify();

  Image second;
  second.readFromFile("creeper.png");
  
  StickerSheet sheet(csgo, 5);
  sheet.addSticker(first,20,50);
  sheet.addSticker(second,800,350);
  sheet.addSticker(first_s,1000,500);


  sheet.render().writeToFile("myImage.png");

  return 0;
}
