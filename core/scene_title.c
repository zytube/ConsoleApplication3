#include <stdio.h>
#include "scene_title.h"
#include "../system/utils.h"

void ShowTitle() {
    ClearScreen();

    printf("=================================================\n");
    printf(" ███████╗ ███████╗██╗ ██╗ ██████╗ ███████╗\n");
    printf(" ██╔════╝ ██╔════╝██║ ██║██╔════╝ ██╔════╝\n");
    printf(" ███████╗ █████╗ ███████║██║ ███╗█████╗\n");
    printf(" ╚════██║ ██╔══╝ ██╔══██║██║ ██║██╔══╝\n");
    printf(" ███████║ ███████╗██║ ██║╚██████╔╝███████╗\n");
    printf(" ╚══════╝ ╚══════╝╚═╝ ╚═╝ ╚═════╝ ╚══════╝\n");
    printf("\n                E C H O E S   O F   V A L O R\n");
    printf("      \"In the silence of the past, courage still echoes...\"\n");
    printf("---------------------------------------------------------\n");
    printf("         Press [Enter] to continue...\n");
    printf("=================================================\n");

    getchar();  // wait for enter
}
