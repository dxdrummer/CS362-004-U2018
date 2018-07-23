#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char *returner;

char inputChar()
{
    // TODO: rewrite this function
    int randChar = rand() % 9 + 1; //chooses a value between 1 and 9. This value enters the switch statement and selects one of the values in the testme() function
    switch(randChar){
        case 1:
            return '[';
            break;
        case 2:
            return '(';
            break;
        case 3:
            return '{';
            break;
        case 4:
            return ' ';
            break;
        case 5:
            return 'a';
            break;
        case 6:
            return 'x';
            break;
        case 7:
            return '}';
            break;
        case 8:
            return ')';
            break;
        case 9:
            return ']';
            break;
    }

    return ' ';
}

char *inputString(){
    // TODO: rewrite this function
	int stringLen = 5;
	int randChar = 0;
	char *stringer= malloc(6*sizeof(char));
	int i=0;
	for(i=0; i<stringLen;i++){
		randChar = rand() %5 + 1;
		switch(randChar){
            case 1:
                stringer[i]='r';
                break;
            case 2:
                stringer[i]='e';
                break;
            case 3:
                stringer[i]='s';
                break;
            case 4:
                stringer[i]='e';
                break;
            case 5:
                stringer[i]='t';
                break;
		}

	}

	stringer[5]='\0';
    return stringer;
}

void testme()
{
  int tcCount = 0;
  char *s;
  char c;
  int state = 0;
  while (1)
  {
    tcCount++;
    c = inputChar();
    s = inputString();
    printf("Iteration %d: c = %c, s = %s, state = %d\n", tcCount, c, s, state);

    if (c == '[' && state == 0) state = 1;
    if (c == '(' && state == 1) state = 2;
    if (c == '{' && state == 2) state = 3;
    if (c == ' '&& state == 3) state = 4;
    if (c == 'a' && state == 4) state = 5;
    if (c == 'x' && state == 5) state = 6;
    if (c == '}' && state == 6) state = 7;
    if (c == ')' && state == 7) state = 8;
    if (c == ']' && state == 8) state = 9;
    if (s[0] == 'r' && s[1] == 'e'
       && s[2] == 's' && s[3] == 'e'
       && s[4] == 't' && s[5] == '\0'
       && state == 9)
    {
      printf("error ");
      exit(200);
    }
  }
}


int main(int argc, char *argv[])
{
    srand(time(NULL));
    testme();
    return 0;
}
