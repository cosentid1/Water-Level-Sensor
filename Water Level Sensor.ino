#define ACTIVATEPIN 3
#define SENSORPIN A5
#define OUTPUTPIN 7

bool running;

void setup() {
  // put your setup code here, to run once:
  pinMode(ACTIVATEPIN, OUTPUT);
  pinMode(OUTPUTPIN, OUTPUT);
	digitalWrite(ACTIVATEPIN, LOW);
  digitalWrite(OUTPUTPIN, LOW);
  Serial.begin(9600);
  running = false;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(OUTPUTPIN, LOW);
  if(!running) return;
  digitalWrite(ACTIVATEPIN, HIGH);	// Turn the sensor ON
	delay(10);							// wait 10 milliseconds
	int reading = analogRead(SENSORPIN);		// Read the analog value from sensor
	digitalWrite(ACTIVATEPIN, LOW);
  Serial.println(reading);
  if (180 <= reading && reading <= 185){
    digitalWrite(OUTPUTPIN, HIGH);
    Serial.println("1/2 a cup");
  }else if (250 <= reading && reading <= 300){
    digitalWrite(OUTPUTPIN, HIGH);
    Serial.println("3/4 a cup");
  }
  delay(500);
  digitalWrite(OUTPUTPIN, LOW);
}
