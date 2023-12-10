int PIN_SENSOR1 = A0;
int PIN_SENSOR2 = A1;
int PIN_SENSOR3 = A2;
int PIN_SENSOR4 = A3;
int PIN_SENSOR5 = A4;
int PIN_SENSOR6 = A5;

int RATA_RATA1 = 736;
int RATA_RATA2 = 716;
int RATA_RATA3 = 628;
int RATA_RATA4 = 711;
int RATA_RATA5 = 814;
int RATA_RATA6 = 689;

String bandingkan(int NILAI_SENSOR, int RATA_RATA = 0);
String hasil();

int RODA_KANAN_1 = 10;
int RODA_KANAN_2 = 9;
int RODA_KIRI_1 = 6;
int RODA_KIRI_2 = 5;

void maju(int kecepatan = 0);
void mundur(int kecepatan = 0);
void belok_kiri(int kecepatan = 0);
void belok_kanan(int kecepatan = 0);
void gerak(int speed_kiri = 0, int speed_kanan = 0);

void setup() {
  pinMode(RODA_KANAN_1, OUTPUT);
  pinMode(RODA_KANAN_2, OUTPUT);
  pinMode(RODA_KIRI_1, OUTPUT);
  pinMode(RODA_KIRI_2, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  String hasil_sensor = hasil();

  if (hasil_sensor == "100000") {
    Serial.println("belok kiri ++++");
    gerak(30, 150);
  } else if (hasil_sensor == "110000") {
    Serial.println("belok kiri +++");
    gerak(30, 125);
  } else if (hasil_sensor == "010000") {
    Serial.println("belok kiri ++");
    gerak(30, 100);
  } else if (hasil_sensor == "011000") {
    Serial.println("belok kiri +");
    gerak(30, 90);
  } else if (hasil_sensor == "001000") {
    Serial.println("belok kiri ");
    gerak(30, 80);
  }

  else if (hasil_sensor == "001100") {
    Serial.println("maju");
    gerak(50, 50);
  } else if (hasil_sensor == "000100") {
    Serial.println("belok kanan ");
    gerak(90, 30);
  } else if (hasil_sensor == "000110") {
    Serial.println("belok kanan + ");
    gerak(100, 30);
  } else if (hasil_sensor == "000010") {
    Serial.println("belok kanan ++ ");
    gerak(125, 30);
  } else if (hasil_sensor == "000011") {
    Serial.println("belok kanan +++");
    gerak(130, 30);
  } else if (hasil_sensor == "000001") {
    Serial.println("belok kanan ++++");
    gerak(150, 30);
  } else if (hasil_sensor == "000000") {
    Serial.println("maju");
    mundur(50);
  } else if (hasil_sensor == "111111") {
    Serial.println("mundur");
    mundur(50);
  } else if (hasil_sensor == "000111") {
    gerak(150, 30);
  }

  else {
    mundur(50);
  }


  delay(20);
}
