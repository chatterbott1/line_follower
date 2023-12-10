String bandingkan(int NILAI_SENSOR, int RATA_RATA = 0) {


  if (NILAI_SENSOR < RATA_RATA) {
    return "0";
  } else {
    return "1";
  }
}

String hasil() {
  int NILAI_SENSOR1 = analogRead(PIN_SENSOR1);
  int NILAI_SENSOR2 = analogRead(PIN_SENSOR2);
  int NILAI_SENSOR3 = analogRead(PIN_SENSOR3);
  int NILAI_SENSOR4 = analogRead(PIN_SENSOR4);
  int NILAI_SENSOR5 = analogRead(PIN_SENSOR5);
  int NILAI_SENSOR6 = analogRead(PIN_SENSOR6);

  String hasil = bandingkan(NILAI_SENSOR6, RATA_RATA6)
                 + bandingkan(NILAI_SENSOR5, RATA_RATA5)
                 + bandingkan(NILAI_SENSOR4, RATA_RATA4)
                 + bandingkan(NILAI_SENSOR3, RATA_RATA3)
                 + bandingkan(NILAI_SENSOR2, RATA_RATA2)
                 + bandingkan(NILAI_SENSOR1, RATA_RATA1);


  return hasil;
}