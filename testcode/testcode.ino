#define _PinBitsUsed_ 7
#define _WiggleDelay_ 5

/*

*/
#define _ParallelDelay_ 5

int mode = 0;
int pins[6]={7, 6, 5, 4, 3, 2};

void setup()
{
  // set all pins to output
  for(int i : pins)
  {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    switch(mode)
  {
    case 0:
    wiggle();
      break;
      case 1:

      break;
  }

}

void setPins(int pinconfig)
{
  for(int i = 0; i < _PinBitsUsed_; i++)
  {
    byte pinMode = bitRead(pinconfig, i);
    digitalWrite(pins[i], pinMode);
  }
}

void wiggle()
{
  setPins(0b101010);
  delay(_WiggleDelay_);
  setPins(0b010101);
  delay(_WiggleDelay_);
}