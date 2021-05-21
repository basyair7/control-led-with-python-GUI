#define led_1 7
#define led_2 13

String mydata;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //mydata = Serial.readStringUntil('\n');
  mydata = Serial.readString();

  // process in led 1
  // on
  if(mydata == "led_1_on") {
    digitalWrite(led_1, HIGH);
  }

  // off
  else if(mydata == "led_1_off") {
    digitalWrite(led_1, LOW);
  }

  // process in led 2
  // on
  else if(mydata == "led_2_on") {
    digitalWrite(led_2, HIGH);
  }

  // off
  else if(mydata == "led_2_off") {
    digitalWrite(led_2, LOW);
  }

  // all led
  // on
  else if(mydata == "all_leds_are_on") {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, HIGH);
  }

  // off
  else if(mydata == "all_leds_are_off") {
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
  }
}
