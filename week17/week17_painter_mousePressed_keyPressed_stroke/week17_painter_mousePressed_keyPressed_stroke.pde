void setup(){
  size(400,400);
  background(#FFFFFF);
}
void draw(){
  if(mousePressed){
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed(){
  if(key=='1') stroke(255,0,0);//紅色
  if(key=='2') stroke(0,255,0);//綠色
}
