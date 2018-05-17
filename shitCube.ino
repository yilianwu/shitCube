int xpin = A0;
int ypin = A1;
int zpin = A2;
int num[16] = {2, 3, 4, 5, 6, 7, 8, 9, 22, 24, 26, 28, 30, 32, 34, 36};
void setup() {
  //----------正極(幾號房)-------------
  //!!!!!!!!!!!要亮的HIGH!!!!!!!!!!!!!!
  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
  for (int j = 22; j < 39; j += 2) {
    pinMode(j, OUTPUT);
  }

  /* 5  9 28 36
     4  8 26 34
     3  7 24 32
     2  6 22 30
  */
  //---------負極(幾樓)------------------
  //!!!!!!!!!!!要亮的LOW!!!!!!!!!!!!!!
  for (int k = 39; k < 54; k += 2) {
    pinMode(k, OUTPUT);
  }
  for (int k = 39; k < 54; k += 2) {
    digitalWrite(k, HIGH);
  }

  /*  8F 53
      7F 51
      6F 49
      5F 47
      4F 45
      3F 43
      2F 41
      1F 39
  */

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {


  for (int i = 39; i < 54; i += 2) {

    int mydelay = random(10, 500);
    digitalWrite(i, LOW);
    digitalWrite(i + 2, LOW);
    delay(mydelay);
    digitalWrite(i, HIGH);
    digitalWrite(i + 2, HIGH);
    int x = analogRead(xpin);
    int y = analogRead(ypin);
    int z = analogRead(zpin);
    Serial.println("--------------------------");
    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.print(z);
    Serial.println('\t');
    Serial.println("--------------------------");
    if ((y > 591) ) {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], HIGH);
      digitalWrite(num[2], HIGH);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], LOW);
      digitalWrite(num[5], HIGH);
      digitalWrite(num[6], HIGH);
      digitalWrite(num[7], LOW);
      digitalWrite(num[8], LOW);
      digitalWrite(num[9], LOW);
      digitalWrite(num[10], LOW);
      digitalWrite(num[11], LOW);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], LOW);
      digitalWrite(num[14], LOW);
      digitalWrite(num[15], LOW);
    }
    if ((y < 580) ) {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], LOW);
      digitalWrite(num[2], LOW);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], LOW);
      digitalWrite(num[5], LOW);
      digitalWrite(num[6], LOW);
      digitalWrite(num[7], LOW);
      digitalWrite(num[8], LOW);
      digitalWrite(num[9], HIGH);
      digitalWrite(num[10], HIGH);
      digitalWrite(num[11], LOW);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], HIGH);
      digitalWrite(num[14], HIGH);
      digitalWrite(num[15], LOW);
    }
    if ((x > 390)) {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], LOW);
      digitalWrite(num[2], LOW);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], LOW);
      digitalWrite(num[5], LOW);
      digitalWrite(num[6], HIGH);
      digitalWrite(num[7], HIGH);
      digitalWrite(num[8], LOW);
      digitalWrite(num[9], LOW);
      digitalWrite(num[10], HIGH);
      digitalWrite(num[11], HIGH);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], LOW);
      digitalWrite(num[14], LOW);
      digitalWrite(num[15], LOW);
    }
    if ((x < 371)) {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], LOW);
      digitalWrite(num[2], LOW);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], HIGH);
      digitalWrite(num[5], HIGH);
      digitalWrite(num[6], LOW);
      digitalWrite(num[7], LOW);
      digitalWrite(num[8], HIGH);
      digitalWrite(num[9], HIGH);
      digitalWrite(num[10], LOW);
      digitalWrite(num[11], LOW);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], LOW);
      digitalWrite(num[14], LOW);
      digitalWrite(num[15], LOW);
    }
    else {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], LOW);
      digitalWrite(num[2], LOW);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], LOW);
      digitalWrite(num[5], HIGH);
      digitalWrite(num[6], HIGH);
      digitalWrite(num[7], LOW);
      digitalWrite(num[8], LOW);
      digitalWrite(num[9], HIGH);
      digitalWrite(num[10], HIGH);
      digitalWrite(num[11], LOW);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], LOW);
      digitalWrite(num[14], LOW);
      digitalWrite(num[15], LOW);

    }
  }
  for (int j = 51; j > 40; j -= 2) {
    int mydelay = random(10, 500);
    digitalWrite(j, LOW);
    digitalWrite(j - 2, LOW);
    delay(mydelay);
    digitalWrite(j, HIGH);
    digitalWrite(j - 2, HIGH);
    int x = analogRead(xpin);
    int y = analogRead(ypin);
    int z = analogRead(zpin);
    Serial.println("--------------------------");
    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.print(z);
    Serial.println('\t');
    Serial.println("--------------------------");
    if ((y > 591) ) {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], HIGH);
      digitalWrite(num[2], HIGH);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], LOW);
      digitalWrite(num[5], HIGH);
      digitalWrite(num[6], HIGH);
      digitalWrite(num[7], LOW);
      digitalWrite(num[8], LOW);
      digitalWrite(num[9], LOW);
      digitalWrite(num[10], LOW);
      digitalWrite(num[11], LOW);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], LOW);
      digitalWrite(num[14], LOW);
      digitalWrite(num[15], LOW);
    }
    if ((y < 580) ) {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], LOW);
      digitalWrite(num[2], LOW);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], LOW);
      digitalWrite(num[5], LOW);
      digitalWrite(num[6], LOW);
      digitalWrite(num[7], LOW);
      digitalWrite(num[8], LOW);
      digitalWrite(num[9], HIGH);
      digitalWrite(num[10], HIGH);
      digitalWrite(num[11], LOW);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], HIGH);
      digitalWrite(num[14], HIGH);
      digitalWrite(num[15], LOW);
    }
    if ((x > 390)) {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], LOW);
      digitalWrite(num[2], LOW);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], LOW);
      digitalWrite(num[5], LOW);
      digitalWrite(num[6], HIGH);
      digitalWrite(num[7], HIGH);
      digitalWrite(num[8], LOW);
      digitalWrite(num[9], LOW);
      digitalWrite(num[10], HIGH);
      digitalWrite(num[11], HIGH);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], LOW);
      digitalWrite(num[14], LOW);
      digitalWrite(num[15], LOW);
    }
    if ((x < 371)) {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], LOW);
      digitalWrite(num[2], LOW);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], HIGH);
      digitalWrite(num[5], HIGH);
      digitalWrite(num[6], LOW);
      digitalWrite(num[7], LOW);
      digitalWrite(num[8], HIGH);
      digitalWrite(num[9], HIGH);
      digitalWrite(num[10], LOW);
      digitalWrite(num[11], LOW);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], LOW);
      digitalWrite(num[14], LOW);
      digitalWrite(num[15], LOW);
    }
    else {
      digitalWrite(num[0], LOW);
      digitalWrite(num[1], LOW);
      digitalWrite(num[2], LOW);
      digitalWrite(num[3], LOW);
      digitalWrite(num[4], LOW);
      digitalWrite(num[5], HIGH);
      digitalWrite(num[6], HIGH);
      digitalWrite(num[7], LOW);
      digitalWrite(num[8], LOW);
      digitalWrite(num[9], HIGH);
      digitalWrite(num[10], HIGH);
      digitalWrite(num[11], LOW);
      digitalWrite(num[12], LOW);
      digitalWrite(num[13], LOW);
      digitalWrite(num[14], LOW);
      digitalWrite(num[15], LOW);

    }
  }
  // put your main code here, to run repeatedly:

}
