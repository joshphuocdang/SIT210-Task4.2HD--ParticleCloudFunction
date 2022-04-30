int red = D3;
int yellow = D4;
int green = D5;

void allOff()
{
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
}

void setup() {
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    Particle.function("colorSwitch", colorSwitch);
}


void loop() {

}



int colorSwitch(String color)
{
    if (color == "red")
    {
        allOff();
        digitalWrite(red, HIGH);
        return 1;
    }
    if (color == "yellow")
    {
        allOff();
        digitalWrite(yellow, HIGH);
        return 1;
    }
    if (color == "green")
    {
        allOff();
        digitalWrite(green, HIGH);
        return 1;
    }
    else return 0;
}