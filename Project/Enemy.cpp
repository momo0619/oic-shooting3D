#include "Enemy.h"

/**
 * �R���X�g���N�^
 *
 */
CEnemy::CEnemy():
m_pMesh(NULL),
m_Pos(0,0,0),
m_Rot(0,0,0),
m_bShow(false),
m_AnimTime(0){
}

/**
 * �f�X�g���N�^
 *
 */
CEnemy::~CEnemy(){
}

/**
 * ������
 *
 */
void CEnemy::Initialize(){

}

/**
 * �J�n
 *
 */
void CEnemy::Start(const Vector3& p){

}

/**
 * �X�V
 *
 */
void CEnemy::Update(){

}

/**
 * �`��
 *
 */
void CEnemy::Render(){
	if(!GetShow())
	{
		return;
	}
	


}

/**
 * �f�o�b�O�����`��
 *
 */
void CEnemy::RenderDebugText(int i){
	//�ʒu�̕`��
	CGraphicsUtilities::RenderString(10,70 + i * 24,MOF_XRGB(0,0,0),
		"�G[%d] %s , �ʒu X : %.1f , Y : %.1f , Z : %.1f",i + 1,
		(GetShow() ? "�\��" : "��\��"),m_Pos.x,m_Pos.y,m_Pos.z);
}
