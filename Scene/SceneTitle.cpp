#include "SceneTitle.h"
#include "DxLib.h"
#include "Pad.h"

SceneTitle::SceneTitle()
{

}

SceneTitle::~SceneTitle()
{

}

// ������
void SceneTitle::init()
{

}

// �I������
void SceneTitle::end()
{

}

// �X�V����
SceneBase* SceneTitle::update()
{

}

// �`��
void SceneTitle::draw()
{
	DrawString(0, 0, "SceneTitle", GetColor(255, 255, 255));
}