#define led1 D2
#define led2 D5
#define switch1 D3
#define switch2 D4
void setup() {
pinMode(led1,OUTPUT);
pinMode(switch1,INPUT);
pinMode(led2,OUTPUT);
pinMode(switch2,INPUT);// put your setup code here, to run once:

}

void loop() {
  boolean state1,state2;
  state1=digitalRead(switch1);
  state2=digitalRead(switch2);
  if(state1==LOW)
  {
    digitalWrite(led1,0);
    digitalWrite(led2,1);
  }
  if(state2==LOW)
  {
    digitalWrite(led1,1);
    digitalWrite(led2,0);
  }
  }
  // put your main code here, to run repeatedly:
