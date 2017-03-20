/*
 * Description:
 * Flash an LED using the ToggleMillis library.
 *
 * The toggle() function toggles the state of the
 * specified digital output pin without needing to know the
 * current state of the pin. It does this by writing to the
 * PIN register instead of using digitalWrite() which uses
 * the PORT register.
 * 
 ************
 * The pin can be toggled by calling digitalWrite() and
 * alternating the state of the pin. This produces an
 * output with a 7.4uS period, or ~135kHz and takes
 * 10 bytes per call (20 per toggle):
 *
 *    digitalWrite(ledPin,HIGH);  
 *    digitalWrite(ledPin,LOW);  
 *
 ************
 * The pin can be toggled by calling toggle(). This
 * produces an output with a 5.1uS period, or ~196kHz and
 * takes 8 bytes per toggle.
 * 
 *    toggle(ledPin);
 *
 ************
 * The pin can be toggle by calling toggleFast().
 * This produces an output with a 4.1uS period, or 244kHz
 * and takes 44 bytes per call.
 * 
 *    toggleFast(ledPin);
 *
 ************
 * The pin can be toggled by calling toggleMillis. This
 * produces an output with a user defined period in 
 * millisecond or frequency (frequency = 1/period).
 * 
 *    toggleMillis(ledPin, time_ms);
 *
 */
 


#include <ToggleMillis.h>

#define LED11 11
#define LED12 12
#define LED13 13



void setup() {

	pinMode(LED11, OUTPUT);
	pinMode(LED12, OUTPUT);
	pinMode(LED13, OUTPUT);
}


void loop(){
	
	delay(100);
	toggle(LED11);
	toggleFast(LED12)
	toggleMillis(LED13, 200);
}

