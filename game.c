#include <stdio.h>

int main()
{
  char title[] = "==== << C Shanty  >> ====\n";
  char subTitle[] = "a text based adventure\n";
  printf("%s\n", title);
  printf("%s\n", subTitle);

  printf("I love you");

  return 0;
}

// TODO - figure out what syntax to use for function parameter
// takes one argument: an array of strings
// prints them to the console
void printInputOptions(char *options) {
  printf("%s\n", options);
}

// TODO - rework entirely, mostly just here so I have a baseline
int getUserInput() {
  int myNum;
  printf("==> ");
  scanf("%d", &myNum);
  // TODO
  // typecheck myNum, handle any errs
  return myNum;
}
