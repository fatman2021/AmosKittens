
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <proto/exec.h>
#include "amosKittens.h"

char *cmdDir(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdDirStr(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdParent(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdSetDir(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdDfree(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdKill(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdRename(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdFselStr(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdExist(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdDirFirstStr(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdDirNextStr(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdDevFirstStr(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdDevNextStr(struct nativeCommand *cmd, char *tokenBuffer);

char *cmdPrintOut(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdInputIn(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdLineInputFile(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdOpenIn(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdOpenOut(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdAppend(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdClose(struct nativeCommand *cmd, char *tokenBuffer);

char *cmdInputStrFile(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdSetInput(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdLof(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdPof(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdEof(struct nativeCommand *cmd, char *tokenBuffer);

char *cmdOpenRandom(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdField(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdGet(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdPut(struct nativeCommand *cmd, char *tokenBuffer);
char *cmdAt(struct nativeCommand *cmd, char *tokenBuffer);

