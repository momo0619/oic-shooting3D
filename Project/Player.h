#pragma once

#include "GameDefine.h"
#include "PlayerShot.h"

// �ړ����x
#define PLAYER_SPEED		(0.1f)

#define PLAYERSHOT_COUNT (300)

#define PLAYERSHOT_WAIT (0.1)

class CPlayer{
private:
	CMeshContainer	m_Mesh;
	CMeshContainer	m_ShotMesh;
	CPlayerShot		m_ShotArray[PLAYERSHOT_COUNT];
	int				m_ShotWait;
	CVector3		m_Pos;
	float			m_RotZ;

public:
	CPlayer();
	~CPlayer();
	bool Load();
	void Initialize();
	void Update();
	void Render();
	void RenderDebugText();
	const CVector3 GetPosition(){ return m_Pos; }
	void Release();
};