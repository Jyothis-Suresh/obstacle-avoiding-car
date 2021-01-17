#define ENA   14          // Enable/speed motors Right        GPIO14(D5)
#define ENB   12          // Enable/speed motors Left         GPIO12(D6)
#define IN_1  15          // L298N in1 motors Right           GPIO15(D8)
#define IN_2  4          // L298N in2 motors Right           GPIO4(D2)
#define IN_3  2           // L298N in3 motors Left            GPIO2(D4)
#define IN_4  0           // L298N in4 motors Left            GPIO0(D3)
#define IR 16
void setup() {
 pinMode(ENA, OUTPUT);
 pinMode(ENB, OUTPUT);  
 pinMode(IN_1, OUTPUT);
 pinMode(IN_2, OUTPUT);
 pinMode(IN_3, OUTPUT);
 pinMode(IN_4, OUTPUT);
 pinMode(IR, INPUT);
 Serial.begin(9600);
}

void loop() {
  int ir1 = digitalRead(16);

  if(ir1==LOW)
  {
    Serial.println(ir1);
    digitalWrite(IN_1, LOW);
    digitalWrite(IN_2, LOW);
    digitalWrite(ENA, LOW);
 
    digitalWrite(IN_3, LOW);
    digitalWrite(IN_4, LOW);
    digitalWrite(ENB, LOW);

    delay(1000);

    digitalWrite(IN_1, HIGH);
    digitalWrite(IN_2, LOW);
    digitalWrite(ENA, HIGH);
 
    digitalWrite(IN_3, HIGH);
    digitalWrite(IN_4, LOW);
    digitalWrite(ENB, HIGH);

    delay(1000);

    digitalWrite(IN_1, HIGH);
    digitalWrite(IN_2, LOW);
    digitalWrite(ENA, HIGH);
 
    digitalWrite(IN_3, LOW);
    digitalWrite(IN_4, HIGH);
    digitalWrite(ENB, HIGH);

    delay(1000);
  }
  else
  {
      Serial.println(ir1);
      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, HIGH);
      digitalWrite(ENA, HIGH);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, HIGH);
      digitalWrite(ENB, HIGH);
  }
}
