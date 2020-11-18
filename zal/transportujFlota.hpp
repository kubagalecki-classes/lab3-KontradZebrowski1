#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia{};
    // Twoja implementacja tutaj
    unsigned int przetransportowane = 0;
    unsigned int zaglowce = 0;
    while(towar > przetransportowane)
    {
      Statek* s1 = stocznia();
      if (dynamic_cast<Zaglowiec*>(s1) != nullptr)
      {
        zaglowce = zaglowce + 1;
      }
      unsigned int dostarczone = s1->transportuj();
      przetransportowane = przetransportowane + dostarczone;
      delete s1;
    }
    
    return 0;
}