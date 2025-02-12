#ifndef MILLISTIMER_H
#define MILLISTIMER_H

#include <Arduino.h>

class MillisTimer {
public:
  //! Tworzy obiekt Astratimer
  //! @param countDelay czas w ms
  MillisTimer(int countDelay);

  //! inicjalizuje obiekt (opcjonalne)
  void reset();

  //! sprawdza czy minął czas i funkcja może być wywołana
  bool canExecute();

  //! zmienia opóźnienie czasu na bieżąco w ms
  void updateDelay(int time);

private:
  int _countDelay;                 // Czas odliczania w ms
  unsigned long _previousMillis;   // Ostatni czas wykonania
};

#endif
