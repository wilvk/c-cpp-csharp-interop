#include <stdio.h>

extern "C" {
  #include "test.h"
}

int main()
{
  void ReturnNothing();

  const char * returnStringString = ReturnString();
  printf("%s\n", returnStringString);

  const char * originalString = "OriginalString";
  const char * takeAndReturnNewStringString = TakeAndReturnNewString(originalString);
  printf("%s\n", takeAndReturnNewStringString);

  int returnIntInt = ReturnInt();
  printf("%d\n", returnIntInt);

  int originalInt = 8;
  int takeOneIntAndReturnNewIntInt = TakeOneIntAndReturnNewInt(originalInt);
  printf("%d\n", takeOneIntAndReturnNewIntInt);

  return 0;
}
