#pragma once
#include "SingletonBase.h"

class ImageClass: public SingletonBase<ImageClass>
{
public:
	const char* BgBackImg = "�� ��� ȭ��";
	const char* BgImg = "��� ȭ��";
	const char* BgMiddleImg = "�߰� ��� ȭ��";
	const char* BgGrassImg = "��� Ǯ";
	const char* EndSecene = "���";

	const char* PlayerIdleR = "�÷��̾� ���� ������ �׼�";
	const char* PlayerIdleL = "�÷��̾� ���� ���� �׼�";
	const char* PlayerWalkR = "�÷��̾� ���������� �ȴ� �׼�";
	const char* PlayerWalkL = "�÷��̾� �������� �ȴ� �׼�";
	const char* PlayerRunL = "�÷��̾� �������� �ٴ� �׼�";
	const char* PlayerRunR = "�÷��̾� ���������� �ٴ� �׼�";
	const char* PlayerCommandCallL = "�÷��̾� �������� ȣ�� ����";
	const char* PlayerCommandCallR = "�÷��̾� ���������� ȣ�� ����";
	const char* PlayerCommandExecL = "�÷��̾� �������� ���� ����";
	const char* PlayerCommandExecR = "�÷��̾� ���������� ���� ����";
	const char* PlayerShootL = "�÷��̾� �������� ����";
	const char* PlayerShootR = "�÷��̾� ���������� ����";
	const char* PlayerRunShootL = "�÷��̾� �ٸ鼭 �������� ����";
	const char* PlayerRunShootR = "�÷��̾� �ٸ鼭 ���������� ����";
	const char* PlayerDeathL = "�÷��̾� �������� ���";
	const char* PlayerDeathR = "�÷��̾� ���������� ���";
	const char* PlayerUIMushRoom = "�÷��̾� ���� ����";
	const char* PlayerUIGear = "�÷��̾� ��� ����";

	const char* CivilianIdleR = "�ΰ��� ���� ������ �׼�";
	const char* CivilianIdleL = "�ΰ��� ���� ���� �׼�";
	const char* CivilianWalkR = "�ΰ��� ���������� �ȴ� �׼�";
	const char* CivilianWalkL = "�ΰ��� �������� �ȴ� �׼�";
	const char* CivilianRunL = "�ΰ��� �������� �ٴ� �׼�";
	const char* CivilianRunR = "�ΰ��� ���������� �ٴ� �׼�";
	const char* CivilianGrabL = "�ΰ��� �ݴ� �׼� ����";
	const char* CivilianGrabR = "�ΰ��� �ݴ� �׼� ������";
	const char* CivilianBuildL = "�ΰ��� �ǹ� ���� ����";
	const char* CivilianBuildR = "�ΰ��� �ǹ� ���� ������";

	const char* DiggerIdleR = "�� NPC ���� ������ �׼�";
	const char* DiggerIdleL = "�� NPC ���� ���� �׼�";
	const char* DiggerWalkR = "�� NPC ���������� �ȴ� �׼�";
	const char* DiggerWalkL = "�� NPC �������� �ȴ� �׼�";
	const char* DiggerRunL = "�� NPC �������� �ٴ� �׼�";
	const char* DiggerRunR = "�� NPC ���������� �ٴ� �׼�";
	const char* DiggerGrabL = "�� NPC �ݴ� �׼� ����";
	const char* DiggerGrabR = "�� NPC �ݴ� �׼� ������";
	const char* DiggerBuildR = "�� NPC �ǹ� ���� �׼� ������";
	const char* DiggerBuildL = "�� NPC �ǹ� ���� �׼� ����";

	const char* EngineerIdleR = "�����Ͼ� NPC ���� ������ �׼�";
	const char* EngineerIdleL = "�����Ͼ� NPC ���� ���� �׼�";
	const char* EngineerWalkR = "�����Ͼ� NPC ���������� �ȴ� �׼�";
	const char* EngineerWalkL = "�����Ͼ� NPC �������� �ȴ� �׼�";
	const char* EngineerRunL = "�����Ͼ� NPC �������� �ٴ� �׼�";
	const char* EngineerRunR = "�����Ͼ� NPC ���������� �ٴ� �׼�";
	const char* EngineerBuildR = "�����Ͼ� NPC ���������� �ǹ� ���� �׼�";
	const char* EngineerBuildL = "�����Ͼ� NPC �������� �ǹ� ���� �׼�";

	const char* FighterIdleR = "������ NPC ���� ������ �׼�";
	const char* FighterIdleL = "������ NPC ���� ���� �׼�";
	const char* FighterWalkR = "������ NPC ���������� �ȴ� �׼�";
	const char* FighterWalkL = "������ NPC �������� �ȴ� �׼�";
	const char* FighterRunL = "������ NPC �������� �ٴ� �׼�";
	const char* FighterRunR = "������ NPC ���������� �ٴ� �׼�";


	const char* Generator_off = "������ ���� ����";
	const char* Generator_01 = "������ 1�ܰ�";

	const char* shovelshop_off = "�� ����ü� ���� ����";
	const char* shovelshop_off_02 = "�� ����ü� ���� ���� �� ����";

	const char* shovelshop_stand = "�� ����ü� �⺻ ����";
	const char* shovelshop_open = "�� ����ü� ����";
	const char* shovelshop_close = "�� ����ü� ���";

	const char* shovelshop_light = "�� ����ü� ����";
	const char* shovelshop_shovel = "��";

	const char* workbanch = "���� �ʱ�ȭ �ü�";

	const char* shopStalkers_off = "�� ����ü� ���� ����";
	const char* shopStalkers_off_2 = "�� ����ü� ���� ���� �� ����";

	const char* shopStalkers_stand  = "�� ����ü� �⺻ ����";
	const char* shopStalkers_open = "�� ����ü� ����";
	const char* shopStalkers_close = "�� ����ü� ���";

	const char* shopStalkers_weapon = "��";

	const char* engineerShop_off = "��ġ ����ü� ���� ����";
	const char* engineerShop_off_2 = "��ġ ����ü� ���� ���� �� ����";

	const char* engineerShop_stand = "��ġ ����ü� �⺻ ����";
	const char* engineerShop_open = "��ġ ����ü� ����";
	const char* engineerShop_close = "��ġ ����ü� ���";
				 
	const char* engineerShop_wrench = "��ġ";

	const char* Object_Mushroom = "����";
	const char* Item_Shroom = "��������";
	const char* Object_Debris = "����";
	const char* Object_Debris2 = "����2";
	const char* Item_Gear = "��������";
	const char* Item_Flask = "�ö�ũ";

	const char* Object_Cocoon1 = "������Ʈ1";
	const char* Object_Cocoon2 = "������Ʈ2";
	const char* Object_Cocoon3 = "������Ʈ3";
	const char* Object_Cocoon4 = "������Ʈ4";
	const char* Object_Cocoon5 = "������Ʈ5";
	const char* Object_Cocoon6 = "������Ʈ6";
	const char* Object_CocoonHive = "������Ʈ7";

	const char* WaterFallImg = "����";
	const char* WaterFallMImg = "�߰�����";
	const char* WaterFallSImg = "��������";

	const char* MONSTER_NORMAL_IDLE = "MonsterNormalIdle";
	const char* MONSTER_NORMAL_WALK = "MonsterNormalWalk";
	const char* MONSTER_NORMAL_ATTACK = "MonsterNormalAttack";
	const char* MONSTER_NORMAL_DEATH = "MonsterNormalDeath";
	const char* MONSTER_NORMAL_FALL = "MonsterNormalFall";

	const char* MONSTER_SUICIDE_IDLE = "MonsterSuicideIdle";
	const char* MONSTER_SUICIDE_WALK = "MonsterSuicideWalk";
	const char* MONSTER_SUICIDE_ATTACK = "MonsterSuicideAttack";
	const char* MONSTER_SUICIDE_DEATH1 = "MonsterSuicideDeath1";
	const char* MONSTER_SUICIDE_DEATH2 = "MonsterSuicideDeath2";

	const char* MONSTER_FROG_IDLE = "MonsterFrogIdle";
	const char* MONSTER_FROG_WALK = "MonsterFrogWalk";
	const char* MONSTER_FROG_JUMP = "MonsterFrogJump";
	const char* MONSTER_FROG_ATTACK = "MonsterFrogAttack";
	const char* MONSTER_FROG_DEATH = "MonsterFrogDeath";

	const char* MONSTER_CANNON_IDLE = "MonsterCannonIdle";
	const char* MONSTER_CANNON_WALK = "MonsterCannonWalk";
	const char* MONSTER_CANNON_ATTACK = "MonsterCannonAttack";
	const char* MONSTER_CANNON_DEATH = "MonsterCannonDeath";
	const char* MONSTER_CANNON_PROJECTILE = "MonsterCannonProjectile";

	const char* MONSTER_EFFECT3 = "MonsterEffect3";
	const char* MONSTER_EFFECT4 = "MonsterEffect4";
	
	HRESULT init(void);
	virtual void release(void);
};
