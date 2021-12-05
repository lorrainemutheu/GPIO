#include <avr/io.h>      //IO library
#include <util/delay.h>  //delay library
#include <stdint.h>      //datatypes library

int main(void){
  int counter;          //set datatype of counter to integer
  DDRD |= 0b11111100;     //set direction of all bits except bit 0 and 1 for port D to output
  DDRB &= 0b11111001;    // set bit 1 and 2 to input 
  PORTB = (1 << PORTB1) | (1 << PORTB2); //write PORTxn to logic 1 so as to activate pull up resistor when PINxn is configured as input

  while(1){
     //initialize counter to 4
     //alternate between PD4 and PD7 in lighting the LEDS with a delay of 1s
     if((PINB & (1<<PINB1)) == 0){
     for(counter = 4; counter <= 128; counter*=2){
        PORTD = counter;
        _delay_ms(1000);
      }
     }

      if((PINB & (1<<PINB2)) == 0){
      for(counter = 128; counter >= 4; counter/=2){
         PORTD = counter;
         _delay_ms(1000);
      }
      }
   }
}
