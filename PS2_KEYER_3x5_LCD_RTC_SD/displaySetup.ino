void displaySetup()
{
  
  tft.fillScreen(BLUE);               // Clear the screen
  tft.drawRect(0, 0, 479, 319,WHITE);
  tft.fillRect(0, 108, 479, 2,WHITE);  
  tft.fillRect(0, 270, 479, 2,WHITE);  
  tft.fillRect(0, 293, 479, 2,WHITE);  
  tft.setTextColor(BLACK, BLUE); 
  tft.setCursor(174, 4);
  tft.print("WD9GYM");
  tft.setCursor(175, 5);
  tft.print("WD9GYM");
  tft.setCursor(176, 6);
  tft.setTextColor(WHITE, BLUE); 
  tft.print("WD9GYM");
  tft.setCursor(70, 40);
  tft.print("UTC");
  tft.setCursor(320, 40);
  tft.print("Local");
  optionsWhite();
  tft.setCursor(10, 150); 
  tft.print("1 - QSO RCV Info");
  tft.setCursor(10, 170); 
  tft.print("2 - Send TNX");
  tft.setCursor(10, 190); 
  tft.print("3 - My Sig Info");
  tft.setCursor(10, 210); 
  tft.print("4 - Write QSO Log");
  tft.setCursor(10, 230);
  tft.print("5 - Set UTC Clock");
  tft.setCursor(5, 255);
  tft.setTextSize(1);  
  tft.print("[ % - Options | S - Snd CQ | T - Tune | # - Chg CW Speed | D - Decoder on/off ]");
  tft.setTextSize(2);  
  tft.setCursor(320, 150);
  tft.print("QSO Info");
  tft.setCursor(260, 170);
  tft.print("Rx Id  -");
  tft.setCursor(260, 190);
  tft.print("Rx Sig -");
  tft.setCursor(260, 210);
  tft.print("Freq   -");
  tft.setCursor(260, 230);
  tft.print("My Sig -");

  tft.setCursor(10, 276);
  tft.print("CW Rx");
  tft.setCursor(10, 298);
  tft.print("CW Tx");

}

void optionsWhite()
{
  tft.setTextSize(3);
  tft.setTextColor(WHITE, BLUE); 
  tft.setCursor(176, 117);
  tft.print("Options");
  tft.setTextSize(2);

}

void optionsGreen()
{
  tft.setTextSize(3);
  tft.setTextColor(GREEN, BLUE); 
  tft.setCursor(176, 117);
  tft.print("Options");
  tft.setTextSize(2);

}
