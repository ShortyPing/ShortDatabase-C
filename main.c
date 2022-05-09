#include <stdio.h>
#include "const.h"
#include "repl.h"
#include "commands/command_man.h"
int main() {
    printf("%s v%s made by %s\n", APPLICATION_NAME, APPLICATION_VERSION, APPLICATION_AUTHOR);
    InitCommandManager();
    REPL_Start();
    return 0;
}
