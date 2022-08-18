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
//���
//�̷��� ��ġ Ű�� �α��εɶ� ��Ҵ����� �̷� ȭ�� �߰� ������ ���� �ȸ��� ���� �׸��� �̷��� hex Ű�� ��̷� �ٲٰ� wirtable�̰� �׸�� ����� ��� �ְ� ��ĵ �� �׸��� �� ���°� Ŭ���ϰ� ��Ʈ�� + D �ϸ� �̷� â�� �ߴµ� �� ������ ��Ŭ���ϰ� ī�� �̷��� ������ġ + �� �̷� ���� 6FCA0C�̰� 
//��ġ���ε� ���� �տ��ٰ� 0x6FCA0C�̷��� �ذ����� ����? �� ȥ�� �غ���                 �׸��� ���� ������ ���¹� �˷��帲���� �������� ���� �����ϱ� �� �� ���� �ٵ��� �� �ٷ� �������� �ؿ����� �Ȱ����� �����Ÿ� ���� ����� �ٸ��Ŵ� ó���ߴ���ó�� �ϸ� ��?���� �𸣰����� ���� DM �ϸ� �ٷιٷ� �����Ԥ���
uint64_t offset::AngleHook = 0x6FBAAC; //�ޱ�
uint64_t offset::BorderLine = 0xB92107; //����1
uint64_t offset::BorderLine2 = 0x1ABC667; //����2
uint64_t offset::FovHook = 0x6F9240; //������ 
uint64_t offset::ViewMatrixOffset = 0x2E2BEB0; //VEH �� ���  
uint64_t offset::ViewMatrixXorKey = 0x4CE58C933BAD54C5; //VEH ��(���)) ��ȣȭŰ  // ''�ι�°�� ����? ����  Overwatch.exe+5960F5 - 48 B8 C2EFE605053F1F0C - mov rax,0C1F3F0505E6EFC2 �̰Ŵ� �̷��� �߰��� �ְų� ���������ϋ��� ���� ���� �׷� �� �ѹ��� �غ�����? �׷��� �߰����� �غ��� ��κ� �ɰ��� �� �߰��� �ƴ϶� ������ ���� ���� ������ en ���ñ� ��ġ���̹� ��ħ �ϴ� ���� �غ��� ����



//���X

//uint64_t offset::xSettings = 0xbe0640;
//uint64_t offset::CompoenetHook = 0x17C6DF8;
//uint64_t offset::Rotation = 0xC22C42;
//uint64_t offset::VelocityHook = 0x1ae97d3;
//uint64_t offset::Health = 0x96f608;
//uint64_t offset::HeroID = 0x4E55E3;
uint64_t offset::SensOffset = 0x2DA4A10; //�̰� ������ �Ǥ�

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

#define OFFSET_VELOCITYPTR_LOCATION					0x140       // ��
#define OFFSET_VELOCITYPTR_ENCRYPTED				0x80       // ��
#define OFFSET_VELOCITYPTR_VELOCITY					0x50      // ��
#define OFFSET_VELOCITYPTR_BONEDATA					0x6F0    // ��
#define OFFSET_BONEDATA_BONEBASE					0x28    //  ��
#define OFFSET_BONE_SIZE							0x30   //  ��
#define OFFSET_BONE_LOCATION						0x20  // ��
#define OFFSET_BONE_ROTCATION						0x0  // ��

#define OFFSET_BONEDATA_BONESCOUNT					0x40 // OK?
#define OFFSET_VISIBILITYPTR_ISVISIBLE				0x98 //98

#define OFFSET_ROTATIONPTRPTR_ROTSTRUCT				0x1598 // // OK
#define OFFSET_ROTSTRUCT_ROT						0xA98 // OK
#define OFFSET__SKill								0xD0