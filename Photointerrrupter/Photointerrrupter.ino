int LEDpin = 13;
int interrupt = 2;
void setup()
{
	pinMode(interrupt, INPUT_PULLUP);
	pinMode(LEDpin, OUTPUT);
	Serial.begin(9600);
	attachInterrupt(digitalPinToInterrupt(2), LEDON, RISING);
	attachInterrupt(digitalPinToInterrupt(3), LEDOFF, FALLING);
}

void loop()
{
}

void LEDON()
{
	digitalWrite(LEDpin, HIGH);
	Serial.println("OFF");
}

void LEDOFF()
{
	digitalWrite(LEDpin, LOW);
	Serial.println("OFF");
}
