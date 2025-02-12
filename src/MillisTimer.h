#ifndef MILLISTIMER_H
#define MILLISTIMER_H

#include <Arduino.h>

class MillisTimer {
public:
  //! Create MillisTimer object
  //! @param countDelay czas w ms
  MillisTimer(int countDelay);

  //! Reset timer so it starts counting from 0
  void reset();
  
  //! Check if the function can be executed, use with if statement
  bool canExecute();

  //! Update delay duration in ms
  void updateDelay(int time);

private:
  int _countDelay;            
  unsigned long _previousMillis; 
};

#endif
