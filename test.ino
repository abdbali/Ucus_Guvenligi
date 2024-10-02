const int redLedPin = 2;    // Kırmızı LED için pin
const int greenLedPin = 3;  // Yeşil LED için pin

void setup() {
  pinMode(redLedPin, OUTPUT);   // Kırmızı LED pinini çıkış olarak ayarla
  pinMode(greenLedPin, OUTPUT); // Yeşil LED pinini çıkış olarak ayarla
}

void loop() {
  digitalWrite(redLedPin, HIGH);   // Kırmızı LED'i yak (sol kanat)
  digitalWrite(greenLedPin, LOW);  // Yeşil LED'i söndür (sağ kanat)
  delay(2000);                     // 2 saniye bekle
  
  digitalWrite(redLedPin, LOW);    // Kırmızı LED'i söndür
  digitalWrite(greenLedPin, HIGH); // Yeşil LED'i yak
  delay(2000);                     // 2 saniye bekle
}
