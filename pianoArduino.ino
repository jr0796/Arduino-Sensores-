#define NOTA_DO 262
#define NOTA_RE 294
#define NOTA_MI 330
#define NOTA_FA 349
#define NOTA_SOL 392
#define NOTA_LA 440
#define NOTA_SI 493

int buzzer = 13, valor2,valor3,valor4,valor5,valor6,valor7,valor8;
void setup() {
pinMode(buzzer,OUTPUT);
}
void loop() {
valor2 = readCapacitivePin(2);
valor3 = readCapacitivePin(3);
valor4 = readCapacitivePin(4);
valor5 = readCapacitivePin(5);
valor6 = readCapacitivePin(6);
valor7 = readCapacitivePin(7);
valor8 = readCapacitivePin(8);

//pino 2
if(valor2>3){
tone(buzzer, NOTA_DO);
delay(100);
}
else{
noTone(buzzer);
}

//pino 3
if(valor3>3){
tone(buzzer, NOTA_RE);
delay(100);
}
else{
noTone(buzzer);
}

//pino 4
if(valor4>3){
tone(buzzer, NOTA_MI);
delay(100);
}
else{
noTone(buzzer);
}

//pino 5
if(valor5>3){
tone(buzzer, NOTA_FA);
delay(100);
}
else{
noTone(buzzer);
}

//pino 6
if(valor6>3){
tone(buzzer, NOTA_SOL);
delay(100);
}
else{
noTone(buzzer);
}

//pino 7
if(valor7>3){
tone(buzzer, NOTA_LA);
delay(100);
}
else{
noTone(buzzer);
}

//pino 8
if(valor8>3){
tone(buzzer, NOTA_SI);
delay(100);
}
else{
noTone(buzzer);
}

}
// readCapacitivePin
// Input: Arduino pin number
// Output: A number, from 0 to 17 expressing
// how much capacitance is on the pin
// When you touch the pin, or whatever you have
// attached to it, the number will get higher
#include "pins_arduino.h" // Arduino pre-1.0 needs this
uint8_t readCapacitivePin(int pinToMeasure) {
// Variables used to translate from Arduino to AVR pin naming
volatile uint8_t* port;
volatile uint8_t* ddr;
volatile uint8_t* pin;
// Here we translate the input pin number from
// Arduino pin number to the AVR PORT, PIN, DDR,
// and which bit of those registers we care about.
byte bitmask;
port = portOutputRegister(digitalPinToPort(pinToMeasure));
ddr = portModeRegister(digitalPinToPort(pinToMeasure));
bitmask = digitalPinToBitMask(pinToMeasure);
pin = portInputRegister(digitalPinToPort(pinToMeasure));
// Discharge the pin first by setting it low and output
*port &= ~(bitmask);
*ddr |= bitmask;
delay(1);
// Make the pin an input with the internal pull-up on
*ddr &= ~(bitmask);
*port |= bitmask;
// Now see how long the pin to get pulled up. This manual unrolling of the loop
// decreases the number of hardware cycles between each read of the pin,
// thus increasing sensitivity.
uint8_t cycles = 17;
if (*pin & bitmask) { cycles = 0;}
else if (*pin & bitmask) { cycles = 1;}
else if (*pin & bitmask) { cycles = 2;}
else if (*pin & bitmask) { cycles = 3;}
else if (*pin & bitmask) { cycles = 4;}
else if (*pin & bitmask) { cycles = 5;}
else if (*pin & bitmask) { cycles = 6;}
else if (*pin & bitmask) { cycles = 7;}
else if (*pin & bitmask) { cycles = 8;}
else if (*pin & bitmask) { cycles = 9;}
else if (*pin & bitmask) { cycles = 10;}
else if (*pin & bitmask) { cycles = 11;}
else if (*pin & bitmask) { cycles = 12;}
else if (*pin & bitmask) { cycles = 13;}
else if (*pin & bitmask) { cycles = 14;}
else if (*pin & bitmask) { cycles = 15;}
else if (*pin & bitmask) { cycles = 16;}
// Discharge the pin again by setting it low and output
// It's important to leave the pins low if you want to 
// be able to touch more than 1 sensor at a time - if
// the sensor is left pulled high, when you touch
// two sensors, your body will transfer the charge between
// sensors.
*port &= ~(bitmask);
*ddr |= bitmask;
return cycles;
}
