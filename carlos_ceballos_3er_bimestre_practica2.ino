// librerias
#include <Ticker.h>
#include <OneWire.h>
#include <DallasTemperature.h>

//directivas de procesado
#define boton 2
//funcion ISR
void sensortemp();
void cc_boton();

//constructores
Ticker accion_temperatura(sensortemp,3000);
Ticker state_boton(cc_boton,6000);
 OneWire ourWire(4);
 DallasTemperature sensor(&ourWire);

  void setup(){
    Serial.begin(9600);
    pinMode(boton,INPUT);
    accion_temperatura.start();
    state_boton.start();
    }

    void loop(){
    accion_temperatura.update();
    state_boton.update();
    }

    void sensortemp(){
      sensor.requestTemperatures();//envia el mando 
                                  //para leer la temperatura
      float temp= sensor.getTempCByIndex(0); //Se obtiene la temperatura
                                             // en C
      Serial.println("sensor de temperatura");    
      Serial.print("La temperatura es:");
      Serial.print(temp);
      Serial.println("C");
      } 
      void cc_boton(){
      int estado = digitalRead(boton);
        
      if(estado == HIGH){ 
      Serial.println("Boton presionado"); 
      }

      if(estado == LOW);{
      Serial.println("Boton NO presionado");  
        
        }
        } 





    
