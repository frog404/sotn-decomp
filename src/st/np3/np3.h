#include "stage.h"

void CreateEntityFromCurrentEntity(u16, Entity*);
void ReplaceBreakableWithItemDrop(Entity*);
s32 func_801BCB5C(u16* arg0);
s16 func_801BD308(u16* arg0, s32 arg1);
s32 func_801BC7D4(void);
int func_801CD658();
void EntityPriceDrop(Entity* entity);
void EntityInventoryDrop(Entity* entity);

extern s8 D_8003CB25;
extern s8 D_8003CB26;
extern s8 D_8003CB27;
extern s8 D_80054319;
extern s8 D_8005431A;
extern s8 D_8005431B;
extern u16 D_80180A54[];
extern u16 D_80180A60;
extern s8 D_80181454[];
extern u8 D_8018148C[];
extern const u8 D_801815E0[];
extern const u8* D_801815EC;
extern const u8* D_801815FC;
extern u16 D_80180A78[];
extern u16 D_80180A90[];
extern u16 D_80180AA8[];
extern u16 D_80180AB4[];
extern u16 D_80180ACC[];
extern u16 D_80180AD8[];
extern u16 D_80180AF0[];
extern u16* D_80180AFC;
extern u16 D_80180B50[];
extern u16 D_80180B5C[];
extern u16 D_80180B74[];
extern u16 D_80180B80[];
extern ObjInit2 D_80180C10[];
extern const u8* D_801813D4;
extern const u8* D_801813E4;
extern s16 D_80181A50[];
extern s32 D_80181E80[];
extern const u8* D_80181F2C[];
extern u8* D_801822B8;
extern u8* D_801822C0;
extern s32 D_80182440[];
extern u8 D_80182454[];
extern u16 D_80182458[];
extern s16 D_801824B8[];
extern s32 D_80182540;
extern s32 D_80182548;
extern u16* D_80182554;
extern u16* D_80182570;
extern u16* D_80182400;
extern u8* D_80182414;
extern u8 D_8003BE1C[]; // probably part of a struct
extern u8 D_8003BE1D[]; // probably part of a struct
extern PfnEntityUpdate PfnEntityUpdates[];