/*
 * 8relays
 * 
 * A 8-Relays cards controling example
 * This example can control 2 cards.
 * 
 * Hardware requarements except your favorite processor: 
 * 1) 8-RELAYS 8-Layer Stackable Card for Raspberry Pi: https://sequentmicrosystems.com/product/raspberry-pi-relays-stackable-card/
 * 2) S-Bridge : https://sequentmicrosystems.com/product/raspberry-pi-replacement-card/
 */
#include <SM_8relay.h>

SM_8relay card1 = SM_8relay();
SM_8relay card2 = SM_8relay();

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   Serial.print("8-Relays card 1 init");
  if(0 == card1.begin(0)) // set the stack level to 0
  {
    Serial.println(" Done");
  }
  else
  {
    Serial.println(" Fail!");
  }
  
  Serial.print("8-Relays card 2 init");
  if(0 == card2.begin(1)) // set the stack level to 1
  {
    Serial.println(" Done");
  }
  else
  {
    Serial.println(" Fail!");
  }
delay (1000);
}

void loop() {
  int i;
  // put your main code here, to run repeatedly:
  for(i = 1; i < 9; i++) //turn relays ON, one by one 
  {
    card1.writeChannel(i, 1);
    card2.writeChannel(i, 1);
    delay(250);
  }
  //Serial.println(card1.readAll());
  delay (1000);
  for(i = 1; i < 9; i++)//turn relays OFF, one by one 
  {
    card1.writeChannel(i, 0);
    card2.writeChannel(i, 0);
    delay(250);
  }
  //Serial.println(card1.readAll());
  delay (1000);
}
