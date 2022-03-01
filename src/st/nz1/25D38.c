#include "common.h"
#include "dra.h"

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A5D38);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A5E18);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A5E9C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A62E4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A67D4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A6ACC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A6B6C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A6C54);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A7118);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A7424);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A74E4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A7970);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A7DC4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A7FD4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A824C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A8354);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A857C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A88E4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A8A94);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A8D6C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A8EA0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A8F80);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A9154);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A94CC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A97C4);

#ifdef NON_MATCHING
INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A9A5C);
#else
void func_801B082C(u16 *arg0);
extern s16 D_800733DA;
extern s16 D_800733FC;
extern u16 D_80180B58[];
extern s32 g_CurrentRoomX;

void func_801A9A5C(Entity *entity) {
    if (entity->initState) {
        if (entity->initState < 2) {
            if (entity->initState) {
                return;
            }

            func_801B082C(D_80180B58);
            entity->hitboxWidth = 16;
            entity->hitboxHeight = 32;
            entity->unk3C = 1;
        }
        else
        {
            if (entity->initState != 2) {
                return;
            }

            if (entity->unk48 == 0) {
                entity->initState--;
            }

            if (D_800733DA < entity->posX.Data.high) {
                g_CurrentRoomX = 256;
                playerX = 240;
                D_800733DA = 0x0070;
                D_800733FC = 0x005F;
                g_CurrentRoomLeft++;
            }
        }
    }

    if (playerX < 256 &&
        func_801AFE1C() < entity->hitboxWidth &&
        func_801AFE58() < entity->hitboxHeight) {
        g_CurrentRoomX = 256;
        g_CurrentRoomLeft++;
        playerX -= 256;
        entity->initState = 16;
    }
}
#endif

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A9BEC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A9D18);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801A9DCC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AA08C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AA244);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AA288);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AA41C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AA48C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AA814);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AAB0C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AAB90);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801ABBF0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801ABD68);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801ABFE8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AC354);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AC528);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AC6E0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AC710);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801ACA0C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801ACB14);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801ADC2C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE2D0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE394);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE4AC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE5C4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE610);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE668);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE764);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE878);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE8C4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AE91C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AEA18);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AEB2C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AECA4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AED58);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AEDCC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AEE48);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AEEC0);

void DestroyEntity(Entity* item) {
    int i, length;
    u32* ptr;

    if (item->unk34 & 0x800000) {
        D_8003C7B4(item->unk64);
    }

    ptr = item;
    length = sizeof(Entity) / sizeof(s32);
    for (i = 0; i < length; i++)
        *ptr++ = 0;
}

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AFB88);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AFC04);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AFC4C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AFD04);

s16 func_801AFE1C(void) {
    s16 value = D_8006C3B8->posX.Data.high - D_800733DA;
    if (value < 0) {
        value = -value;
    }
    return value;
}

s32 func_801AFE58(void) {
    s32 value = D_8006C3B8->posY.Data.high - D_800733DE;
    if (value < 0) {
        value = -value;
    }
    return value;
}

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AFE8C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AFED0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AFF00);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801AFF2C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B01A4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B038C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B03EC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0418);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0434);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B04A0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B04D8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0520);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0568);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B05C0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B064C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B067C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B06B4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B06FC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B075C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B077C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0798);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B082C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0928);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0950);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0A78);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0BD0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0F14);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B0FCC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B1050);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B11AC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B122C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B1308);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B1420);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B14C4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B1514);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B153C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B1DB0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B1EAC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B1F50);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B2538);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B27E8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B32B8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B33E0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B393C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B3A2C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B3B3C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B3C6C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B3D54);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B3E44);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B3F38);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B4168);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B4264);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B47E4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B48E4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B49B0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B4A78);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B4B30);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B4D08);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B52E8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B59E8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B5BE0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B5CD8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B5EA8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B6B2C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B6EC0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B7370);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B745C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B778C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B7894);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B8414);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B8D20);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B920C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B95A0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B97FC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801B9AA0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BA250);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BA52C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BA7F8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BA92C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BB628);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BB7C0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BB9E8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BBAC4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BBBA0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BBC0C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BC4C8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BC5F8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BC71C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BC9BC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BCC90);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BD970);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BDA50);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BDDBC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BDE3C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BDEBC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BE73C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BE82C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BE8E0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BEBE8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BEC98);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BF104);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BF5BC);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BFC60);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BFD64);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BFE6C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801BFEA0);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C01C8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0394);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C03B8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C059C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0984);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0AD4);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0B04);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0B80);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0C08);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0CE8);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0D3C);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0D68);

INCLUDE_ASM("asm/st/nz1/nonmatchings/25D38", func_801C0DCC);
