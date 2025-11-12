/*
* Name: övningsprojekt
* Author: Victor Huke
* Date: 2025-10-8
* Description: This project uses a ds3231 to measure time and displays the time to an 1306 oled display, 
* Further, it measures temprature and displays a mapped value to a 9g-servo-motor
*/

// Include Libraries
#include <RTClib.h>
#include <Wire.h>
#include "U8glib.h"

// Init constants

// Init global variables

// Construct objects
RTC_DS3231 rtc;
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NO_ACK);




void setup() {
  // init communication
  Serial.begin(9600);
  Wire.begin();

  // Init Hardware
  rtc.begin();

  // Settings
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
}

void loop() {

  oledWrite(getTime(), getTemp());  //remove comment when the function is written
  //servoWrite( getTemp() ); //remove comment when the function is written

  Serial.println(getTime());

  getTime();

  delay(200);
}


/*
*This function reads time from an ds3231 module and package the time as a String
*Parameters: Void
*Returns: time in hh:mm:ss as String
*/
String getTime() {
  DateTime now = rtc.now();
  return String(now.hour()) + ":" + String(now.minute()) + ":" + String(now.second());
}

String getTemp() {
 return String(rtc.getTemperature()) + " oC";
}

/*
* This function takes temprature from ds3231 and returns as a float
*Parameters: Void
*Returns: temprature as float
*/
float getTemp(String temp) {
   
}

/*
* This function takes a string and draws it to an oled display
*Parameters: - text: String to write to display
*Returns: void
*/
void oledWrite(String time, String getTemp) {
  u8g.setFont(u8g_font_unifont);

  // Picture loop
  u8g.firstPage();
  do {

    u8g.drawStr(0,20, time.c_str());
    u8g.drawStr(0, 40, getTemp.c_str()); 

  } while (u8g.nextPage());
}

/*
* takes a temprature value and maps it to corresppnding degree on a servo
*Parameters: - value: temprature
*Returns: void
*/
void servoWrite(float value) {

}