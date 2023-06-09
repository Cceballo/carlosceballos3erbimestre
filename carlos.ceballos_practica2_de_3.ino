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


#define R 3
#define G 5
#define B 6
#define POT A0
 int D;
void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(POT, INPUT);
}

void loop() {
  //transorfa los limites para asi cambiar el delay
  D = map(analogRead(POT), 0, 1023, 100, 1000);

  //analogwrite pone los valores a los leds
  //D son los nuevos limites
  analogWrite(R, 174);
  analogWrite(G, 92);
  analogWrite(B, 230);
  delay(D);
  //2
  analogWrite(R, 255);
  analogWrite(G, 255);
  analogWrite(B, 255);
  delay(D);
  //3
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 255);
  delay(D);
  //4
  analogWrite(R, 189);
  analogWrite(G, 174);
  analogWrite(B, 20);
  delay(D);
  //5
  analogWrite(R, 255);
  analogWrite(G, 87);
  analogWrite(B, 35);
  delay(D);




}
