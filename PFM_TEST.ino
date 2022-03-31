int analogPin = 3;
int val = 0;
int y = 0;
int val1=0;
int analogPin1 = 4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

val = analogRead(3);//get the value of signal
//Serial.println(val);
y=map(val,0,255,0,1/1000);//1/10000 is 1/f so the frquncy should be 10000hz map() can equal the ratio between  value and frequcy
digitalWrite(8, HIGH);
delay(y);
digitalWrite(8, LOW);
delay(1/1000-y);
val1 = analogRead(4);
Serial.println(val);
}
