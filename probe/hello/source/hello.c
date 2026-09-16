/* Minimální ověření, že devkitA64 + libnx v Actions vyrobí .nro.
 * Není to nic jiného než "nástrojová řetězce žije". */
#include <stdio.h>
#include <string.h>
#include <switch.h>

static PadState pad;

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    padInitializeDefault(&pad);
    padUpdate(&pad);

    u64 down = padGetButtonsDown(&pad);
    if (down & HidNpadButton_Home) {
        return 0;
    }

    char msg[64];
    snprintf(msg, sizeof(msg), "arena probe ok: %s", "libnx");
    (void)msg;

    return 0;
}
