
// #define BATERRY_ADC A0

#define  SHARP_L  A1
#define  SHARP_C  A2
#define  SHARP_R  A3


#define M1  4
#define E1  5
#define E2  6
#define M2  7

#define MOT_PWM1  5
#define MOT_PWM2  6
#define MOT_DIR1  4
#define MOT_DIR2  7

//enum pins { BATERRY_ADC = A0, SHARP_L = A1, SHARP_L = A2, SHARP_L = A3};

uint8_t sharp_values[3] = {100,100,100};

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);

  // H-Bridge
  pinMode(MOT_PWM1, OUTPUT);
  pinMode(MOT_PWM2, OUTPUT);
  pinMode(MOT_DIR1, OUTPUT);
  pinMode(MOT_DIR2, OUTPUT);
}

void loop() {
  // for (uint8_t i = 0; i < 3; i++)
  // {
  //   sharp_values[i] = 4;
  // }

  /*
  Serial.print(analogRead(SHARP_L));
  Serial.print("\t");
  Serial.print(analogRead(SHARP_C));
  Serial.print("\t");
  Serial.println(analogRead(SHARP_R));
delay(50);
*/


/*
// CHECK DIRECTIONS
digitalWrite(MOT_DIR1,LOW);
digitalWrite(MOT_DIR2,HIGH);

analogWrite(MOT_PWM1,100);
analogWrite(MOT_PWM2,100);
delay(1000);

digitalWrite(MOT_DIR1,HIGH);
digitalWrite(MOT_DIR2,LOW);
delay(1000);
*/

digitalWrite(MOT_DIR1,LOW);
digitalWrite(MOT_DIR2,HIGH);

for (size_t i = 0; i < 255; i++)
{
delay(10);
analogWrite(MOT_PWM1,i);
analogWrite(MOT_PWM2,i);
}

digitalWrite(MOT_DIR1,HIGH);
digitalWrite(MOT_DIR2,LOW);

for (size_t i = 0; i < 255; i++)
{
delay(10);
analogWrite(MOT_PWM1,i);
analogWrite(MOT_PWM2,i);
}

}
