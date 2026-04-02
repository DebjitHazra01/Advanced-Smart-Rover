#include <WiFi.h>

const char* ssid = "RoverCar";
const char* password = "12345678";

WiFiServer server(80);

int m1A = 14, m1B = 27, m2A = 26, m2B = 25;
int trigPin = 5;
int echoPin = 18;

long duration;
int distance;

void setup() {
  pinMode(m1A, OUTPUT);
  pinMode(m1B, OUTPUT);
  pinMode(m2A, OUTPUT);
  pinMode(m2B, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  WiFi.softAP(ssid, password);
  server.begin();
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;
}

void stopMotors() {
  digitalWrite(m1A, LOW);
  digitalWrite(m1B, LOW);
  digitalWrite(m2A, LOW);
  digitalWrite(m2B, LOW);
}

void loop() {
  WiFiClient client = server.available();
  distance = getDistance();

  if (distance < 20) {
    stopMotors();
  }

  if (client) {
    String request = client.readStringUntil('\r');

    if (request.indexOf("/F") != -1) {
      digitalWrite(m1A, HIGH); digitalWrite(m1B, LOW);
      digitalWrite(m2A, HIGH); digitalWrite(m2B, LOW);
    }
    if (request.indexOf("/B") != -1) {
      digitalWrite(m1A, LOW); digitalWrite(m1B, HIGH);
      digitalWrite(m2A, LOW); digitalWrite(m2B, HIGH);
    }
    if (request.indexOf("/L") != -1) {
      digitalWrite(m1A, LOW); digitalWrite(m1B, HIGH);
      digitalWrite(m2A, HIGH); digitalWrite(m2B, LOW);
    }
    if (request.indexOf("/R") != -1) {
      digitalWrite(m1A, HIGH); digitalWrite(m1B, LOW);
      digitalWrite(m2A, LOW); digitalWrite(m2B, HIGH);
    }
    if (request.indexOf("/S") != -1) {
      stopMotors();
    }

    client.println("HTTP/1.1 200 OK");
    client.println("Content-type:text/html\n");

    client.println("<h1>Smart Rover</h1>");
    client.println("<a href='/F'>Forward</a><br>");
    client.println("<a href='/B'>Backward</a><br>");
    client.println("<a href='/L'>Left</a><br>");
    client.println("<a href='/R'>Right</a><br>");
    client.println("<a href='/S'>Stop</a><br>");

    client.stop();
  }
}
