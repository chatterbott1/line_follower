void maju(int kecepatan = 0) {
  analogWrite(RODA_KANAN_1, kecepatan);
  analogWrite(RODA_KANAN_2, 0);
  analogWrite(RODA_KIRI_1, 0);
  analogWrite(RODA_KIRI_2, kecepatan);
  
}
void mundur(int kecepatan = 0) {
  analogWrite(RODA_KANAN_1, kecepatan);
  analogWrite(RODA_KANAN_2, 0);
  analogWrite(RODA_KIRI_1, kecepatan);
  analogWrite(RODA_KIRI_2, 0);
}
void belok_kiri(int kecepatan = 0) {
  analogWrite(RODA_KANAN_1, kecepatan);
  analogWrite(RODA_KANAN_2, 0);
  analogWrite(RODA_KIRI_1, kecepatan);
  analogWrite(RODA_KIRI_2, 0);
}

void belok_kanan(int kecepatan = 0) {
  analogWrite(RODA_KANAN_1, 0);
  analogWrite(RODA_KANAN_2, kecepatan);
  analogWrite(RODA_KIRI_1, 0);
  analogWrite(RODA_KIRI_2, kecepatan);
}


void gerak(int speed_kiri = 0, int speed_kanan = 0){
 analogWrite(RODA_KANAN_1,speed_kanan);
  analogWrite(RODA_KANAN_2, 0);
  analogWrite(RODA_KIRI_1, 0);
  analogWrite(RODA_KIRI_2, speed_kiri);

}