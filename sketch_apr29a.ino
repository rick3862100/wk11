// C++ code
//


byte bt , pins[7]={2,3,4,5,6,7,8};
byte show[16][7]={
  {0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 1, 1, 1, 1},
  {0, 0, 1, 0, 0, 1, 0},
  {0, 0, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0},
  {0, 1, 0, 0, 1, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0},
  {0, 0, 0, 1, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {0, 1, 1, 1, 0, 0, 0},
};

void setup()
{
  for (byte i = 0; i < 7; i++) {
   pinMode(pins[i], OUTPUT); 
  }
  pinMode(9,INPUT_PULLUP);
}

void loop()
  {
  for(byte i=0;i<16;i++){
    for(int l=0;l<1000;l++){
      bt = digitalRead(9);
      if(bt == HIGH){
        for(byte j=0;j<7;j++){
          digitalWrite(pins[j],show[i][j]);
        }
      }
      else {
        for(byte k=0;k<7;k++){
          digitalWrite(pins[k],1);
        }
      }
      delay(1);
    }
  }
}
