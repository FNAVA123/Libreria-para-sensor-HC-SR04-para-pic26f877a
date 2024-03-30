/*
 * DISTANCIA_LIBRERIA.h

 */

#ifndef DISTANCIA_LIBRERIA_H_
#define DISTANCIA_LIBRERIA_H_

#BYTE TRISA = 0x85       //SENSOR ULTRA
#BYTE PORTA = 0x05
#BYTE T1CON = 0X10
#BYTE TMR1H = 0X0F
#BYTE TMR1L = 0X0E
#bit PINA1 = PORTA.1
#bit PINA2 = PORTA.2

void INICIAR_TIMER(void);
int16 OBTENER_VALOR(void);
void SET_TIMER1_0(void);
void INICIALIZAR_LIBRERIA(void);
float OBTENER_DISTANCIA(void);


#endif /* DISTANCIA_LIBRERIA_H_ */