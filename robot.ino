// const int MOTOR_A_1 = ;
// const int enableA = ;

// const int MOTOR_B_1 = ;
// const int enableB = ;

// const int MOTOR_C_1 = ;
// const int enableC = ;

// const int MOTOR_D_1 = ;
// const int enableD = ;

// int motorspeed = 100;

// void setup() {
//   pinMode(MOTOR_A_1, OUTPUT);
//   pinMode(enableA, OUTPUT);

//   pinMode(MOTOR_B_1, OUTPUT);
//   pinMode(enableB, OUTPUT);

//   pinMode(MOTOR_C_1, OUTPUT);
//   pinMode(enableC, OUTPUT);

//   pinMode(MOTOR_D_1, OUTPUT);
//   pinMode(enableD, OUTPUT);
// }

// void loop() {
//   // เดินหน้า
//   controlMotors(HIGH);
//   delay(2000); 
//   stopMotors();
//   delay(1000);

//   // ถอยหลัง
//   controlMotors(LOW);
//   delay(2000);
//   stopMotors();
//   delay(1000);
// }

// void controlMotors(int direction1) {
//   digitalWrite(MOTOR_A_1, direction1);
//   analogWrite(enableA, motorspeed);

//   digitalWrite(MOTOR_B_1, direction1);
//   analogWrite(enableB, motorspeed);

//   digitalWrite(MOTOR_C_1, direction1);
//   analogWrite(enableC, motorspeed);

//   digitalWrite(MOTOR_D_1, direction1);
//   analogWrite(enableD, motorspeed);
// }

// void stopMotors() {
//   int motorPins[] = {MOTOR_A_1, MOTOR_A_2, MOTOR_B_1, MOTOR_B_2, MOTOR_C_1, MOTOR_C_2, MOTOR_D_1, MOTOR_D_2};
//   for (int i = 0; i < 8; i++) {
//     digitalWrite(motorPins[i], LOW);
//   }
// }


const int MOTOR_A_1 = ;
const int enableA = ;

const int MOTOR_B_1 = ;
const int enableB = ;

const int MOTOR_C_1 = ;
const int enableC = ;

const int MOTOR_D_1 = ;
const int enableD = ;

int motorspeed = 100;

void setup() {
  pinMode(MOTOR_A_1, OUTPUT);
  pinMode(enableA, OUTPUT);

  pinMode(MOTOR_B_1, OUTPUT);
  pinMode(enableB, OUTPUT);

  pinMode(MOTOR_C_1, OUTPUT);
  pinMode(enableC, OUTPUT);

  pinMode(MOTOR_D_1, OUTPUT);
  pinMode(enableD, OUTPUT);
}

void loop() {
  // เดินหน้า
  controlMotors(HIGH);
  delay(2000); 
  stopMotors();
  delay(1000);

  // ถอยหลัง
  controlMotors(LOW);
  delay(2000);
  stopMotors();
  delay(1000);
}

void controlMotors(int direction1) {
  digitalWrite(MOTOR_A_1, direction1);
  analogWrite(enableA, motorspeed);

  digitalWrite(MOTOR_B_1, direction1);
  analogWrite(enableB, motorspeed);

  digitalWrite(MOTOR_C_1, direction1);
  analogWrite(enableC, motorspeed); 

  digitalWrite(MOTOR_D_1, direction1);
  analogWrite(enableD, motorspeed);
}

void stopMotors() {
  analogWrite(enableA, 0);
  analogWrite(enableB, 0);
  analogWrite(enableC, 0);
  analogWrite(enableD, 0);
}
