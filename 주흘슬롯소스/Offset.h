#pragma once
#include <Windows.h>
#include <iostream>

struct offset
{
	static uint64_t AngleHook;
	static uint64_t BorderLine;
	//static uint64_t xSettings;
	static uint64_t FovHook;
	//static uint64_t VelocityHook;
	//static uint64_t EntityHook;
	//static uint64_t CompoenetHook;
	//static uint64_t Rotation;
	//static uint64_t HeroID;
	//static uint64_t Health;
	//static uint64_t Skill;
	static uint64_t ViewMatrixOffset;
	static uint64_t ViewMatrixXorKey;
	static uint64_t SensOffset;
	static uint64_t BorderLine2;
};
//紫遂
//戚係惟 辛帖 徹壱 稽益昔吃凶 昼社喚君辞 戚訓 鉢檎 襟惟 幻級嬢醤 舛走 照股製 しし 益軒壱 戚係惟 hex 徹壱 嬢傾戚稽 郊荷壱 wirtable戚暗 革乞稽 幻級壱 嬢傾戚 隔壱 什諜 ぁ 益軒壱 葵 蟹紳暗 適遣馬壱 珍闘継 + D 馬檎 戚訓 但戚 襟澗汽 践 是拭襖 酔適遣馬壱 朝杷 戚係惟 神獄趨帖 + 葵 戚掘 蟹身 6FCA0C戚惟 
//鳶帖葵昔汽 食奄 蒋拭陥亜 0x6FCA0C戚係惟 背亜走壱 しせ? 敗 肇切 背左疾                 益軒壱 戚薦 匂崎氾 魚澗狛 硝形球顕しし 匂崎氾精 糎蟹 嬢形酔艦苑 岨 設 左疾 悦汽だ 訊 郊稽 匂崎氾績 購拭襖澗 業旭精汽 匂崎氾幻 政偽 嬢形崇 陥献暗澗 坦製梅揮暗坦軍 馬檎 喫?しし 乞牽畏生檎 切爽 DM 馬檎 郊稽郊稽 岩舌敗しせ
uint64_t offset::AngleHook = 0x6FBAAC; //賞越
uint64_t offset::BorderLine = 0xB92107; //杉肺1
uint64_t offset::BorderLine2 = 0x1ABC667; //杉肺2
uint64_t offset::FovHook = 0x6F9240; //匂崎氾 
uint64_t offset::ViewMatrixOffset = 0x2E2BEB0; //VEH 氾 坂古  
uint64_t offset::ViewMatrixXorKey = 0x4CE58C933BAD54C5; //VEH 氾(坂古)) 差硲鉢徹  // ''砧腰属襖 しせ? しし  Overwatch.exe+5960F5 - 48 B8 C2EFE605053F1F0C - mov rax,0C1F3F0505E6EFC2 戚暗澗 戚係惟 掻娃拭 赤暗蟹 原走厳襖析��亀 赤製 しし 益軍 陥 廃腰梢 背坐醤敗? 益掘亀 掻娃採斗 背左檎 企採歳 吃暗績 焼 掻娃戚 焼艦虞 原走厳 しし 煽暗 匂崎氾 en 更獣奄 壱帖疾戚耕 壱徴 析舘 叔楳 背左疾 ぁぁ



//紫遂X

//uint64_t offset::xSettings = 0xbe0640;
//uint64_t offset::CompoenetHook = 0x17C6DF8;
//uint64_t offset::Rotation = 0xC22C42;
//uint64_t offset::VelocityHook = 0x1ae97d3;
//uint64_t offset::Health = 0x96f608;
//uint64_t offset::HeroID = 0x4E55E3;
uint64_t offset::SensOffset = 0x2DA4A10; //戚闇 錘走敗 でで

#define Compo__SKILL                     0x2F // 0x2F

#define ADDRESS_SKILL 0x1ba06d0

#define OFFSET_BADREADPTR_SIZEDEFAULT    0x540
#define OFFSET_BADREADPTR_SIZEBONES      0xE474
#define OFFSET_BADREADPTR_SIZEROTSTRUCT  0xB00


#define OFFSET_GenjiQ								0x247
#define OFFSET_PLAYER_CONTROLLER_ROTATION			0x1090
#define OFFSET_PLAYER_CONTROLLER_KEY				0x1034
#define OFFSET_PLAYER_CONTROLLER_DELTA				(OFFSET_PLAYER_CONTROLLER_ROTATION + 0x4C)

#define OFFSET_UNIT_VELOCITY						0x4
#define OFFSET_UNIT_COMPNENT_TO_WORLD				0x10
#define OFFSET_PLAYER_VISIBILITY					0x2D 
#define OFFSET_UNIT_HEALTH							0x33 
#define OFFSET_PLAYER_HEROIDENTITY					0x4B
#define OFFSET_UNIT_HASPLAYERID						0x2B
#define OFFSET_UNIT_ROTATIONBASE					0x27
#define OFFSET_UINT_LINK							0x2C
#define OFFSET_UINT_SKILL							0x2F
#define OFFSET_UINT_OUTLINE							0x53

#define OFFSET_HEALTHPTR_HEALTH						0xE0 // OK
#define OFFSET_HEALTHPTR_HEALTHMAX					0xDC // OK
#define OFFSET_HEALTHPTR_ARMOR						0x220 // OK
#define OFFSET_HEALTHPTR_ARMORMAX					0x21C // OK
#define OFFSET_HEALTHPTR_BARRIER					0x360 // OK
#define OFFSET_HEALTHPTR_BARRIERMAX					0x35C // OK

#define OFFSET_HEALTHPTR_TAG						0x8 // OK

#define OFFSET_UCWPIDPTR_COMPOID					0xD0 // OK
#define OFFSET_HEROIDPTR_COMPOID					0xE8// OK //0xD8
#define OFFSET_HEALTHPTR_TEAM						0x504// OK
#define OFFSET_HEROIDPTR_HEROID						0xE8 // OK
#define OFFSET_HEROIDPTR_SKINID						0xD0 // OK

#define OFFSET_VELOCITYPTR_LOCATION					0x140       // し
#define OFFSET_VELOCITYPTR_ENCRYPTED				0x80       // し
#define OFFSET_VELOCITYPTR_VELOCITY					0x50      // し
#define OFFSET_VELOCITYPTR_BONEDATA					0x6F0    // し
#define OFFSET_BONEDATA_BONEBASE					0x28    //  し
#define OFFSET_BONE_SIZE							0x30   //  し
#define OFFSET_BONE_LOCATION						0x20  // し
#define OFFSET_BONE_ROTCATION						0x0  // し

#define OFFSET_BONEDATA_BONESCOUNT					0x40 // OK?
#define OFFSET_VISIBILITYPTR_ISVISIBLE				0x98 //98

#define OFFSET_ROTATIONPTRPTR_ROTSTRUCT				0x1598 // // OK
#define OFFSET_ROTSTRUCT_ROT						0xA98 // OK
#define OFFSET__SKill								0xD0