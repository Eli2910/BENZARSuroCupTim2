// INPUT LIBRARIES BELOW

//Variable declaration, INPUT1 is set to PIN 4, INPUT2 is set to PIN 5, INPUT3 is set to PIN 7, INPUT4 is set to PIN 8
int INPUT1 = 4;
int INPUT2 = 5;
int INPUT3 = 7;
int INPUT4 = 8;

//Declaration of PIN roles, All 4 input pins are set to OUTPUT
void setup() {
  // put your setup code here, to run once:
  pinMode(INPUT1, OUTPUT);
  pinMode(INPUT2, OUTPUT);
  pinMode(INPUT3, OUTPUT);
  pinMode(INPUT4, OUTPUT);
}

//Main function of the robot. More will be added.
void loop() {
  // put your main code here, to run repeatedly:
  FORWARD(); // FORWARD FUNCTION CALL
  delay(1500); // DELAT (FOR TESTING)
  LEFT(); // LEFT FUNCTION CALL
  delay(1500); // DELAY (FOR TESTING)
  RIGHT(); // RIGHT FUNCTION CALL
  delay(1500); // DELAY (FOR TESTING)
  BACKWARDS(); // BACKWARDS FUNCTION CALL
  delay(1500); // DELAY (FOR TESTING)
}

int FORWARD() { //FORWARD FUNCTION
  digitalWrite(INPUT1, HIGH);
  digitalWrite(INPUT2, LOW);
  digitalWrite(INPUT3, HIGH);
  digitalWrite(INPUT4, LOW);
}

int LEFT() { //LEFT FUNCTION
  digitalWrite(INPUT1, LOW);
  digitalWrite(INPUT2, LOW);
  digitalWrite(INPUT3, HIGH);
  digitalWrite(INPUT4, LOW);
}

int RIGHT() { //RIGHT FUNCTION
  digitalWrite(INPUT1, HIGH);
  digitalWrite(INPUT2, LOW);
  digitalWrite(INPUT3, LOW);
  digitalWrite(INPUT4, LOW);
}

int BACKWARDS() { //BACKWARDS FUNCTION
  digitalWrite(INPUT1, LOW);
  digitalWrite(INPUT2, HIGH);
  digitalWrite(INPUT3, LOW);
  digitalWrite(INPUT4, HIGH);
}