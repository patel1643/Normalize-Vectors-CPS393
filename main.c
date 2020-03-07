#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define MAXINPUT 200
#define MAX_COMPONENT_LENGTH 15
#define MAX_VECTOR_SIZE 9

int firstNum(int max, int *initInt){
    char num[100], trash[100];
    int validity = scanf("%s", &num[0]);

    if(validity == EOF || (num[0] == '0' && num[1] == '\0')){
        *initInt = 0;
        return 0;
    }
    else if((atoi(&num[0]) < 1) || (atoi(&num[0]) > max) || num[1] != '\0'){
        fgets(trash, 100, stdin);
        fprintf(stderr, "BAD INPUT\n");
        return 1;
    }else{
        *initInt = atoi(&num[0]);
        return 0;
    }
}
