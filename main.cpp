#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string adress = "C:/redactor-main/img/Стены/Wall_C_02.bmp";

  FILE *f1 = fopen(adress.c_str(), "rb");

  unsigned char headerinfo[54];
  fread(headerinfo, sizeof(unsigned char), 54, f1);

  int w = *(int*)&headerinfo[18];
  int h = *(int*)&headerinfo[22];

  cout << w << endl;
  cout << h << endl;

  return 0;

}
