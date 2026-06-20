/* * CodeAlpha Internship - Task 3: IoT Prototype
 * Project: Real-Time IoT Weather Station via ThingSpeak
 * Developer: Shaikh Suleman Daud
 */

#include <ESP8266WiFi.h>
#include <DHT.h>
#include <ThingSpeak.h>

// --- Network & Cloud Configurations ---
const char* WIFI_SSID = "XYZ";     
const char* WIFI_PASS = "*******"; 

unsigned long CHANNEL_ID = 3521487;       // Channel Id    
const char* WRITE_API_KEY = "8888888";   // Api Key

// --- Hardware Hardware Profiles ---
#define DHTPIN D2                             // NodeMCU Pin
#define DHTTYPE DHT11                         // Sensor type DHT11
DHT dht(DHTPIN, DHTTYPE);

WiFiClient client;

void setup() {
  Serial.begin(115200);
  dht.begin();
  
  // Connect to Local Wi-Fi Network
  Serial.println();
  Serial.print("Connecting to Wi-Fi: ");
  Serial.println(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\n[SUCCESS] Wi-Fi Network Connected Securely!");
  
  // Initialize ThingSpeak API Configuration
  ThingSpeak.begin(client);
}

void loop() {
  // 1. Read Biometric Environmental Channels
  float temp = dht.readTemperature();
  float humid = dht.readHumidity();
  
  // Check if readings failed
  if (isnan(temp) || isnan(humid)) {
    Serial.println("[ERROR] Failed to ingest data strings from DHT11 sensor array!");
    delay(2000);
    return;
  }
  
  // 2. Stream Data Configurations to Local Serial Monitor Dashboard
  Serial.print("Telemetry Input -> Temperature: ");
  Serial.print(temp);
  Serial.print(" °C | Humidity: ");
  Serial.print(humid);
  Serial.println(" %");
  
  // 3. Set ThingSpeak Field Telemetry Layouts
  ThingSpeak.setField(1, temp);   // Field 1 updates temperature metrics
  ThingSpeak.setField(2, humid);  // Field 2 updates humidity metrics
  
  // 4. Push Local Packets straight to ThingSpeak Cloud Server
  int responseCode = ThingSpeak.writeFields(CHANNEL_ID, WRITE_API_KEY);
  
  if (responseCode == 200) {
    Serial.println("[CLOUD STATUS] Packets pushed to ThingSpeak successfully!");
  } else {
    Serial.print("[CLOUD ERROR] HTTP Post failed. Code response: ");
    Serial.println(responseCode);
  }
  
  // ThingSpeak free account mandates a strict 15-second update stream frequency bounding box
  delay(16000); 
}
