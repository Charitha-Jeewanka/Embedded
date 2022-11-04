#include <LiquidCrystal.h>
#include <Keypad.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

const byte ROWS = 4;
const byte COLS = 3;

char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}  
};

byte rowPins[ROWS] = {4,3,2,1};
byte colPins[COLS] = {7,6,5};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
  lcd.begin(16, 2);
}

void loop(){
  char key = keypad.getKey();
  if(key){
    lcd.print(key);
  }
}