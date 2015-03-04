#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int correct = 0;

  if (strcmp(argv[1],"p1") == 0) {
    if (strcmp(argv[2],"18P") == 0) {
      correct = 1;
    }
  } else if (strcmp(argv[1],"p2") == 0) {
    if (strcmp(argv[2],"24D") == 0) {
      correct = 1;
    }
  } else if (strcmp(argv[1],"p3") == 0) {
    if (strcmp(argv[2],"20H 24P") == 0) {
      correct = 1;
    }
  } else if (strcmp(argv[1],"p4") == 0) {
    if (strcmp(argv[2],"18M 21H") == 0) {
      correct = 1;
    }
  } else if (strcmp(argv[1],"p5") == 0) {
    if (strcmp(argv[2],"24P 36P 40H 41D") == 0) {
      correct = 1;
    }
  }

  if(correct == 0) {
    printf("nah b you done goofed\n");
  } else if (correct == 1) {
    printf("swag\n");
  }

  return 0;
}
