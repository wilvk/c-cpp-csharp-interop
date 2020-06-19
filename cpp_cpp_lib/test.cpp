#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

void DoNothing()
{
  int a = 1;
  a = a + 1;
}

const char * ReturnString()
{
  return "NewString";
}

const char * TakeAndReturnNewString(const char * OriginalString)
{
  const char * additionalString = "AdditionalString";
  char * newString = (char *)malloc(1 + strlen(OriginalString) + strlen(additionalString) );
  strcpy(newString, OriginalString);
  strcat(newString, additionalString);
  return newString;
}

int ReturnInt()
{
  return 16;
}

int TakeOneIntAndReturnNewInt(int OriginalInt)
{
  int newInt = 0;
  newInt = OriginalInt + 24;
  return newInt;
}
