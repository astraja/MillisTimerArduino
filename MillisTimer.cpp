#include "MillisTimer.h"

MillisTimer::MillisTimer(int countDelay) {
  _countDelay = countDelay;
  _previousMillis = 0;
}

void MillisTimer::reset() {
  _previousMillis = millis();
}

bool MillisTimer::canExecute() {
  if (millis() - _previousMillis >= _countDelay) {
    _previousMillis = millis();
    return true;
  }
  return false;
}

void MillisTimer::updateDelay(int time) {
  _countDelay = time;
}
