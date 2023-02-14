PImage img;
void setup(){
  size(2000,2000);
  img = loadImage("map.png");
}
void draw(){
  image(img, 0, 0);
}
