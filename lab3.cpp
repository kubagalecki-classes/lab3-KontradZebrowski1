#include <iostream>

class Figura
{
  protected:
    double pole = 0.;
  public:
    /*void set_pole(double p)
    {
      pole = p;
    }*/
    double get_pole()
    {
      return pole;
    }
  
};

class Kolo : Figura 
{
  Kolo(double r)
  {
    //double p =r*r;
    //set_pole(p);
    pole = r*r;
  }
};
class Kwadrat : Figura 
{
  Kwadrat(double a, double b)
  {
    //double p = a*b;
    //set_pole(p);
    pole = a*b;
  }
};

int main()
{
    puts("Hello, World!");
}
