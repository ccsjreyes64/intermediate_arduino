int LEDpin = 3;
int photoPin = 4;
void setup()
{
pinMode(photoPin, INPUT_PULLUP);
pinMode(LEDpin, OUTPUT);
Serial.begin(9600);
attachInterrupt(0, LEDON, RISING);
attachInterrupt(1, LEDOFF, FALLING);
}

void loop()
{
}

void LEDON()
{
digitalWrite(LEDpin, HIGH);
Serial.println("ON");
}

void LEDOFF()
{
digitalWrite(LEDpin, LOW);
Serial.println("OFF");
}
