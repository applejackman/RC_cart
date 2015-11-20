#define LEFT_PIN 4
#define RIGHT_PIN 6
int lastLeft = LOW;
int lastRight = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Controller has started");
  pinMode(LEFT_PIN, INPUT);
  pinMode(RIGHT_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int currentLeft = digitalRead(LEFT_PIN);
  if (currentLeft != lastLeft) {
      Serial.print("Left pin: ");
      Serial.println(currentLeft);
      lastLeft = currentLeft;
  }
       int currentRight = digitalRead(RIGHT_PIN);
       if (currentRight != lastRight) {
      Serial.print("Right pin: ");
      Serial.println(currentRight);
      lastRight = currentRight;
  }
}
