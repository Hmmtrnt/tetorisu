#include "SceneResult.h"
#include "DxLib.h"
#include "Pad.h"

SceneResult::SceneResult()
{

}

SceneResult::~SceneResult()
{

}

// ������
void SceneResult::init()
{

}

// �I������
void SceneResult::end()
{

}

// �X�V����
SceneBase* SceneResult::update()
{

}

// �`�揈��
void SceneResult::draw()
{
	DrawString(0, 0, "SceneMain", GetColor(255, 255, 255));
}