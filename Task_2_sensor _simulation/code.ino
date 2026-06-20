// Pin Assignments
const int PIR_INPUT_PIN = 2;   
const int LED_ALERT_PIN = 13;  
const int BUZZER_PIN = 8;      

int motionSensorState = LOW;   

void setup() {
  pinMode(PIR_INPUT_PIN, INPUT);     
  pinMode(LED_ALERT_PIN, OUTPUT);    
  pinMode(BUZZER_PIN, OUTPUT);       

  Serial.begin(9600);
  Serial.println("--- System Initialization Complete ---");
}

void loop() {
  motionSensorState = digitalRead(PIR_INPUT_PIN);

  if (motionSensorState == HIGH) {
    digitalWrite(LED_ALERT_PIN, HIGH);     
    tone(BUZZER_PIN, 1000);                
    Serial.println("[ALERT!!] Motion Detected!");
    delay(200);                            
  } 
  else {
    digitalWrite(LED_ALERT_PIN, LOW);      
    noTone(BUZZER_PIN);                    
    Serial.println("[STATUS: SAFE] No movement.");
    delay(500);                            
  }
}
