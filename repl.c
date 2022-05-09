//
// Created by shortping on 09.05.22.
//

#include "repl.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
void REPL_Start() {
    char input[1024];

    while(1) {
        printf("> ");
        fgets(input, 1024, stdin);
        input[strcspn(input, "\n")] = 0;
        printf("Input: %s\n", input);
    }
}