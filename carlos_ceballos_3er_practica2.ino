/*Fundacion Kinal
  Centro educativo tecnico laboral kinal
  Quinto perito
  Quinto electronica
  Codigo Tecnico:EB5AV
  Curso: taller de electronica digital
  Proyecto:Interrupciones por software
  Dev: Carlos Enrique Ceballos Vilanueva
  fecha: 8/06/2023 */


#define led 3
#define pot A0

//variables insigned
int intensidad; 
int brillo; // marca la intensidad de brillo

void setup () {
  pinMode(led, OUTPUT);
}
void loop () {
  // map usado para los valores del potenciometro
  intensidad = analogRead(pot);
  intensidad  = map(analogRead(pot), 0, 1023, 0, 255);
analogWrite(led, intensidad);
}
