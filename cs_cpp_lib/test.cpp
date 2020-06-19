#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

extern "C" void DoNothing();

extern "C" const char * ReturnString();

extern "C" const char * TakeAndReturnNewString(char * OriginalString);

extern "C" int ReturnInt();

extern "C" int TakeOneIntAndReturnNewInt(int OriginalInt);

void DoNothing()
{
  int a = 1;
  a = a + 1;
}

const char * ReturnString()
{
  return "NewString";
}

const char * TakeAndReturnNewString(char * OriginalString)
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
