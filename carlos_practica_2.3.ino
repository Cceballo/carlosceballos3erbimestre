/*
   Fundacion KinaL
   Centro educativo tecnico LaboraL KinaL
   Quinto perito
   Quinto eLectronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: TaLLer de eLectronica digitaL y reparacion de computadoras I
   Proyecto: Contador
   aLumno:carlos Enrique Cebalos villanueva
   Fecha: 1/06/2023
*/
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD (0x27,16,2);

void setup (){
  LCD.init();
  LCD.backlight(); 
}
void loop (){
 float r2 = 10000;
 float vout = analogRead(A0);
 float vout2= map(vout,0,1023,0,500000);
 float vout3= vout2/100000;
 float V1= (r2*5)/ vout3+0.01 ;
 float r1 = V1 - r2;
 LCD.setCursor(0, 0);
 LCD.print(r1); 
}
