#include "SceneTitle.h"
#include "DxLib.h"
#include "Pad.h"

SceneTitle::SceneTitle()
{

}

SceneTitle::~SceneTitle()
{

}

// ‰Šú‰»
void SceneTitle::init()
{

}

// I—¹ˆ—
void SceneTitle::end()
{

}

// XVˆ—
SceneBase* SceneTitle::update()
{

}

// •`‰æ
void SceneTitle::draw()
{
	DrawString(0, 0, "SceneTitle", GetColor(255, 255, 255));
}