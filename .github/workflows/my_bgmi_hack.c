#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <mach/mach.h>

// YOUR 37 EXTRACTED OFFSETS
#define OFFSET_UWORLD        0x060ce282
#define OFFSET_GNAMES        0x061583a0
#define OFFSET_GOBJECTS      0x061617f0
#define OFFSET_LOCAL_PLAYER  0x061c5f30
#define OFFSET_PLAYER_ARRAY  0x071c4364
#define OFFSET_WEAPON        0x071c4de0
#define OFFSET_VIEW_MATRIX   0x07454c70
#define OFFSET_SCREEN_W      0x07447ad8
#define OFFSET_SCREEN_H      0x0744f928

#define BASE_ADDR 0x100000000

__attribute__((constructor))
void InitMyHack() {
    printf("\n========================================\n");
    printf("  MY CUSTOM BGMI HACK v1.0\n");
    printf("  Using 37 custom offsets from BGMI 4.3\n");
    printf("========================================\n\n");
    printf("[+] Hack loaded successfully!\n");
}
