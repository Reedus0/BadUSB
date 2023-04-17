#include <Keyboard.h>
#define DELAY 450

void pressEnter(){
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.release(KEY_RETURN);
}

void keyboard_print(String command){
  delay(DELAY);
  Keyboard.print(command); 
  delay(DELAY);
  pressEnter();
}

void setup() {
  Keyboard.begin(); 
  
  delay(DELAY);
  Keyboard.press(KEY_LEFT_GUI);
  delay(DELAY);
  Keyboard.release(KEY_LEFT_GUI);
  
  keyboard_print("cmd");
  keyboard_print("echo Hello, World!");
}

void loop() {}
