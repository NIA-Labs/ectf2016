#include <stdio.h>
#include <sys/ptrace.h>
#include <stdlib.h>
#include <string.h>

typedef int bool;
#define true 1
#define false 0

static char *bomb_going_off = "\n\
     _.-^^---....,,--\n\
 _--                  --_\n\
<                        >)\n\
|                         |\n\
 \\._                   _./\n\
    ```--. . , ; .--'''\n\
          | |   |\n\
       .-=||  | |=-.\n\
       `-=#$%&%$#=-'\n\
          | ;  :|\n\
 _____.,-#%&$@%#&#~,._____ ";

void set_off_bomb() {
  printf("%s", bomb_going_off);
  printf("\n");
  exit(0);
}


// Palindrome check.
bool level1(char* str) {    
    int l = 0;
    int h = strlen(str) - 1;
 
    while (h > l) {
        if (str[l++] != str[h--]) {
            return false;
        }
    }
  return true;
}

// XOR of all characters is 0
bool level2(char *str) {
  long long int total_sum = 0;
  int i;

  for(i=0;i<strlen(str);i++) {
    total_sum = total_sum ^ str[i];
  }

  if (total_sum == 0) {
    return true;
  } else {
    return false;
  }
}

// Find non-ascii characters and check that they are all the same and that their
// sum is "_"*4
bool level3(char *str) {
    int count=0;
    int i, asc;
    int sum=0;
    char c1 = 'z';
    char c2;
      
    for(i=0;i<strlen(str);i++) {
      c2 = str[i];
      asc = (int)c2;
      // printf("%d\n", asc);
      if(asc<65 || (asc>90 && asc<97) || asc>122) {
        if(c1 == 'z') {
          c1 = c2;
          count++;
          sum += asc;
        } else if(c1 == c2) {
          count++;
          sum += asc;
        } else {
          return false;
        }
      }
    }
    if (count==4 && sum==380) {
      return true;
    } else {
      return false;
    }
}

// Substring search
bool level4(char *str) {
  if(strstr(str, "roor") != NULL) {
    return true;
  } else {
    return false;
  }
}

bool check_if_cool(char *str) {
  if (str[0] == 'd' && str[1] == 'u' && str[2] == 'd') {
    return true;
  } else {
    return false;
  }
}

int main() {
  if (ptrace(PTRACE_TRACEME, 0, NULL, 0) == -1) {
    printf("BOOOM! The bomb went off!");
    set_off_bomb();
    exit(0);
  }
  
  char s[20];
  scanf("%s", s);

  if (level1(s)) {
    printf("[*] Level 1 cleared.\n");
    if (level2(s)) {
      printf("[*] Level 2 cleared.\n");
      if (level3(s)) {
        printf("[*] Level 3 cleared.\n");
        if (level4(s)) {
          printf("[*] Level 4 cleared.\n");
          printf("[*] Bomb defused. Checking coolness quotient..\n");
          if (check_if_cool(s)) {
            printf("[*] You did it. Now report this string to the service!\n");
          } else {
            printf("[*] You were not cool enough.\n");
          }
        } else {
          printf("[*] BOOM! You were very close. The bomb went off at level 4.\n");
          set_off_bomb();
        }
      } else {
        printf("[*] BOOM! You were getting closer! The bomb went off at level 3.\n");
        set_off_bomb();
      }
    } else {
      printf("[*] BOOM! You set off the bomb at level 2.\n");
      set_off_bomb();
    }
  } else {
    printf("[*] BOOM! The bomb ticked out at level 1.\n");
    set_off_bomb();
  }
}
