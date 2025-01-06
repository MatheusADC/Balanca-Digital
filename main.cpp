#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define endereco 0x27
#define colunas 16
#define linhas 2
LiquidCrystal_I2C lcd(endereco, colunas, linhas);
#include <HCSR04.h>
#define p_trigger 2
#define p_echo 3
double distancia;
double const = gravidade = 9.81;
double const c_elastica = 133.96;
double const c_elastica2 = 166.19;

UltraSonicDistanceSensor distanceSensor(p_trigger, p_echo);

void(*funcReset)() = 0;

void setup() {
    Serial.begin(9600);
    lcd.init();
    lcd.backlight();
    lcd.celar();
    lcd.print("Balança Digital");
    delay(1000);
    lcd.clear();
    lcd.SetCursor(0, 0);
    lcd.print("Coloque o Objeto");
    delay(10000);
}

void loop() {
    distancia=distanceSensor.measureDistanceCm();
    Serial.println(distancia);
    delay(1000);

    if(distancia >= 7.50 && distancia <= 10.60) {
        lcd.clear();
        lcd.SetCursor(0, 0);
        lcd.print("Massa em Kg:");
        lcd.setCursor(0, 1);
        lcd.print(((10.60 - distancia) * c_elastica/gravidade/100) - 1.00);
        delay(3000);
        funcReset();
    }

    if(distancia >= 5.40 && distancia < 7.50) { 
        lcd.clear();
        lcd.SetCursor(0, 0);
        lcd.print("Massa em Kg:");
        lcd.setCursor(0, 1);
        lcd.print(((10.60 - distancia) * c_elastica2/gravidade/100) - 0.80);
        delay(3000);
        funcReset();
    }

    funcReset();
}