/*
    Project name : ESP8266 Water Level Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-water-level-sensor
*/

const int waterLevelPin = A0; // Analog pin connected to the water level sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read analog voltage from water level sensor
  int sensorValue = analogRead(waterLevelPin);

  // Convert analog value to percentage of water level
  float waterLevelPercent = map(sensorValue, 0, 1023, 0, 100);

  // Print water level percentage to Serial Monitor
  Serial.print("Water Level: ");
  Serial.print(waterLevelPercent);
  Serial.println("%");

  delay(1000); // Add a small delay before the next reading
}
