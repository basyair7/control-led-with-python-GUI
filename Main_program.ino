char mydata = 0;
int led_1 = 7;
int led_2 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop(){

mydata = int(Serial.read());
  
// process in led 1
// on
if(mydata == '0'){
  digitalWrite(led_1, HIGH);
}

// off
else if(mydata == '1'){
  digitalWrite(led_1, LOW);
}

// process in led 2
// on
else if(mydata == '2'){
  digitalWrite(led_2, HIGH);
}

// off
else if(mydata == '3'){
  digitalWrite(led_2, LOW);
}

// on all led
else if(mydata == '4'){
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
}

// off all led
else if(mydata == '5'){
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
}

}
