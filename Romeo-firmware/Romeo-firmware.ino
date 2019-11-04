
// #define BATERRY_ADC A0

#define  SHARP_L  A1
#define  SHARP_C  A2
#define  SHARP_R  A3

//enum pins { BATERRY_ADC = A0, SHARP_L = A1, SHARP_L = A2, SHARP_L = A3};

uint8_t sharp_values[3] = {100,100,100};

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // for (uint8_t i = 0; i < 3; i++)
  // {
  //   sharp_values[i] = 4;
  // }
  Serial.print(analogRead(SHARP_L));
  Serial.print("\t");
  Serial.print(analogRead(SHARP_C));
  Serial.print("\t");
  Serial.println(analogRead(SHARP_R));
delay(50);
}
