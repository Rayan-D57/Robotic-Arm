int actuatorPin1 = 9;  // طرف التحكم الأول
int actuatorPin2 = 10; // طرف التحكم الثاني

void setup() {
  pinMode(actuatorPin1, OUTPUT);
  pinMode(actuatorPin2, OUTPUT);
}

void loop() {
  // تحريك المشغل للأمام (رفع الذراع)
  digitalWrite(actuatorPin1, HIGH);
  digitalWrite(actuatorPin2, LOW);
  delay(2000); // يعمل لمدة ثانيتين
  
  // إيقاف المشغل
  digitalWrite(actuatorPin1, LOW);
  digitalWrite(actuatorPin2, LOW);
  delay(1000); // انتظار

  // تحريك المشغل للخلف (خفض الذراع)
  digitalWrite(actuatorPin1, LOW);
  digitalWrite(actuatorPin2, HIGH);
  delay(2000);
  
  // إيقاف المشغل
  digitalWrite(actuatorPin1, LOW);
  digitalWrite(actuatorPin2, LOW);
  delay(1000);
}
