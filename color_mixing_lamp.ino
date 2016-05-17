
const int redpwmpin = 9 ;
const int greenpwmpin = 10 ;
const int bluepwmpin = 11 ; 

void setup() {

 Serial.begin(9600);
  
pinMode( redpwmpin , OUTPUT);
pinMode( greenpwmpin , OUTPUT);
pinMode(bluepwmpin , OUTPUT);

}

void loop() {

int redSensorReading = analogRead(A0);

delay(10);

int greenSensorReading = analogRead(A1);

delay(10);

int blueSensorReading = analogRead(A2);



Serial.print("red sensor reading =");
Serial.println(redSensorReading/4);

Serial.print("green sensor reading =");
Serial.println(greenSensorReading/4);

Serial.print("blue sensor reading =");
Serial.println(blueSensorReading/4);

Serial.println("");

delay(1000);

analogWrite(redpwmpin , redSensorReading/4);
analogWrite(greenpwmpin , greenSensorReading/4);
analogWrite(bluepwmpin , blueSensorReading/4);

}
