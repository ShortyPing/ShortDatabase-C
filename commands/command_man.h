//
// Created by shortping on 09.05.22.
//

#ifndef DATABASE_COMMAND_MAN_H
#define DATABASE_COMMAND_MAN_H
typedef void (*execute)(char** args);

typedef struct {
    char* name;
    char* description;
    execute run;
} CMD;
void InitCommandManager();
void RegisterCommand(CMD*);
void Cleanup();


#endif //DATABASE_COMMAND_MAN_H
