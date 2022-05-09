//
// Created by shortping on 09.05.22.
//

#include "command_man.h"
#include "stdlib.h"
#include "stdio.h"
CMD** registeredCommands;
int currentPtr = 0;

void InitCommandManager() {
    registeredCommands = malloc(sizeof(CMD) * 16);
    printf("Initialized CommandManager (%p)\n", registeredCommands);
}

CMD* CreateCommand(char* name, char* description, execute run) {
    CMD* cmd = malloc(sizeof(CMD));
    cmd->name = name;
    cmd->description = description;
    cmd->run = run;

    return cmd;
}

void RegisterCommand(CMD* cmd) {
    registeredCommands[currentPtr++] = cmd;

}

void Cleanup() {
    for(int i = 0; i < currentPtr; i++) {
        free(registeredCommands[i]);
    }
}
