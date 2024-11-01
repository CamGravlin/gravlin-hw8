/*  File name: derek_LED2.cpp

*/

#include<iostream>
#include<fstream>
#include<sstream>
#include<unistd.h>
#include "derek_LED2.h"
using namespace std;

LED::LED(int number) {
  this->number = number;
  ostringstream s;
  s << LED_PATH << number;
  path = string(s.str());
}

void LED::writeLED(string filename, string value) {
  ofstream fs;
  fs.open((path + filename).c_str());
  fs << value;
  fs.close();
}

void LED::removeTrigger() {
  writeLED("/trigger", "none");
}

void LED::turnOn() {
  cout << "Turning LED" << number << " on." << endl;
  removeTrigger();
  writeLED("/brightness", "1");
}

void LED::turnOff() {
  cout << "Turning LED" << number << " off." << endl;
  removeTrigger();
  writeLED("/brightness", "0");
}

void LED::flash(string delayms = "50") {
  cout << "Making LED" << number << " flash." << endl;
  writeLED("/trigger", "timer");
  writeLED("/delay_on", delayms);
  writeLED("/delay_off", delayms);
}

void LED::outputState() {
  ifstream fs;
  fs.open( (path + "/trigger").c_str());
  string line;
  while(getline(fs,line)) cout << line << endl;
  fs.close();
}

void LED::blink(int num) {
  cout << "Blinking LED: " << number << endl;
  removeTrigger();
  writeLED("/brightness", "1");
  sleep(1);
  writeLED("/brightness", "0");
  sleep(1);
}

LED::~LED() {
  cout << "destroying the LED with path: " << path << endl;
}
