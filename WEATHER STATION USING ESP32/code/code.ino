#include <DHT.h> 
#include <WiFi.h> 
#include <WiFiClient.h> 
#include <ThingSpeak.h> 
#include <Adafruit_Sensor.h> 
#include <BMP180>
#define DHTPIN 4 
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE); 
const char* ssid = "vivo T1 5G"; 
//ARDUINO AND RASPBERRY PI BASED PROJECT BEEL456D 
const char* password = "11111111"; 
WiFiClient client; 
unsigned long myChannelNumber = 2783754; 
const char * myWriteAPIKey = "OL9HCJVCMO39CVZ5"; 
uint8_t temperature, humidity , pressure; 
void setup() 
{ 
Serial.begin(9600); 
dht.begin(); 
delay(10); 
//Connect to WiFi network 
Serial.println(); 
Serial.println(); 
Serial.print("Connecting to "); 
Serial.println(ssid); 
WEATHER STATION USING ESP32 2024-25
Dept. of ECE,AIT Bangalore 23
WiFi.begin(ssid, password); 
while (WiFi.status() != WL_CONNECTED) 
{ 
delay(500); 
Serial.print("."); 
} 
Serial.println(""); 
Serial.println("WiFi connected"); 
// Print the IP address 
Serial.println(WiFi.localIP()); 
ThingSpeak.begin(client); 
} 
void loop() 
{ 
temperature = dht.readTemperature(); 
humidity = dht.readHumidity(); 
pressure = dht.readPressure(); 
Serial.print("Temperature Value is :"); 
Serial.print(temperature); 
Serial.println("C"); 
Serial.print("Humidity Value is :"); 
Serial.print(humidity); 
Serial.println("%"); 
Serial.print("Pressure Value is :"); 
Serial.print(Pressure); 
Serial.println("pa"); 
// Write to ThingSpeak. There are up to 8 fields in a channel, 
allowing you to store up to 
// pieces of information in a channel. Here, we write to field 
1 and 2
ThingSpeak.writeField(myChannelNumber, 1, temperature, 
WEATHER STATION USING ESP32 2024-25
myWriteAPIKey); 
ThingSpeak.writeField(myChannelNumber, 2, humidity, 
myWriteAPIKey); 
ThingSpeak.writeField(myChannelNumber, 3, Pressure, 
myWriteAPIKey); 
delay(2000); 
// ThingSpeak will only accept updates every 3 sec.
}