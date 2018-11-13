int outputPins[] = {13, 12, 11, 10, 9, 8, 7, 6};
int numArray[10][8] = {
//{13,12,11,10,9,8,6,7} output pins 
  {0,0,1,0,1,0,0,0},// number one
  {1,1,0,0,1,1,0,1},// number two
  {0,1,1,0,1,1,0,1},// number three
  {0,0,1,0,1,0,1,1},// number four
  {0,1,1,0,0,1,1,1},// number five
  {1,1,1,0,0,1,1,1},// number six
  {0,0,1,0,1,1,0,0},// number seven
  {1,1,1,0,1,1,1,1},// number eight
  {0,1,1,0,1,1,1,1},// number nine
  {1,1,1,0,1,1,1,0}// number zero
  };
void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 8; i++){
    pinMode(outputPins[i], OUTPUT);
  }
}
void numbers(int setnum[10][8], int outPutPins[]) {
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 8; j++ ){
      digitalWrite(outputPins[j], setnum[i][j]);
    }
    delay(1000);
 }
}
void loop() {
  numbers(numArray, outputPins);
}
