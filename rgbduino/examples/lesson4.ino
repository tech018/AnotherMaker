//This sketch will move some leds around to the right of the digital pins when you push the
//button on the board.
int LED = 4;
int Button = 2;
void setup()
{
pinMode(4, OUTPUT);
pinMode(2, INPUT_PULLUP);
}
void loop()
{
if (digitalRead(Button) == LOW)
digitalWrite(LED, HIGH);
else if (digitalRead(Button) == HIGH)
digitalWrite(LED, LOW);
}
