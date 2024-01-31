#include <cstdlib>

int random(int min, int max)
{
  int r = rand() % max + min;

  if(r > max)
  {
    r = max;
  }
  if(r < min)
  {
    r = min;
  }

  return r;
}
