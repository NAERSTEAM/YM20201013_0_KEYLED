//0CT 13 2020 T.I. multi-output sample
//OCT 13 2020 T.I. created this file.

int key_0=3;
int key_1=4;
int key_2=5;

int led_0=11;
int led_1=12;
int led_2=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(key_0,INPUT_PULLUP);
  pinMode(led_0,OUTPUT);
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(LOW==digitalRead(key_0))
  {
     digitalWrite(led_0,HIGH);
     digitalWrite(led_1,HIGH);
     digitalWrite(led_2,HIGH);
  }
  else
  {
     digitalWrite(led_0,LOW);
     digitalWrite(led_1,LOW);
     digitalWrite(led_2,LOW);
  }
  
}
