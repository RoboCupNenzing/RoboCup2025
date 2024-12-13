#define pwm_a 3   // hinten Links 
#define dir_a 2

#define pwm_b 9   // hinten Rechts
#define dir_b 8

#define pwm_c 5   // vorne Rechts
#define dir_c 4

#define pwm_d 10  // vorne Links
#define dir_d 12

void setup() {

  pinMode(pwm_a, OUTPUT);
  pinMode(dir_a, OUTPUT);
  pinMode(pwm_b, OUTPUT);
  pinMode(dir_b, OUTPUT);
  pinMode(pwm_c, OUTPUT);
  pinMode(dir_c, OUTPUT);
  pinMode(pwm_d, OUTPUT);
  pinMode(dir_d, OUTPUT);

}

void loop() {

  digitalWrite(dir_a,HIGH);
  digitalWrite(dir_b,HIGH);
  digitalWrite(dir_c,HIGH);
  digitalWrite(dir_d,HIGH);
  analogWrite(pwm_c, 250);
  analogWrite(pwm_d, 250); 
  analogWrite(pwm_a, 250);
  analogWrite(pwm_b, 250);  
  delay(1000);
  analogWrite(pwm_c, 0);
  analogWrite(pwm_d, 0); 
  analogWrite(pwm_a, 0);
  analogWrite(pwm_b, 0);  
  delay(1000);

  digitalWrite(dir_a,LOW);
  digitalWrite(dir_b,LOW);
  digitalWrite(dir_c,LOW);
  digitalWrite(dir_d,LOW);  
  analogWrite(pwm_a, 250);
  analogWrite(pwm_b, 250);
  analogWrite(pwm_c, 250);
  analogWrite(pwm_d, 250);
  delay(1000);
  analogWrite(pwm_c, 0);
  analogWrite(pwm_d, 0); 
  analogWrite(pwm_a, 0);
  analogWrite(pwm_b, 0);  
  delay(1000);

}
