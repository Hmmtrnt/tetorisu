#include "SceneTitle.h"
#include "DxLib.h"
#include "Pad.h"

SceneTitle::SceneTitle()
{

}

SceneTitle::~SceneTitle()
{

}

// 初期化
void SceneTitle::init()
{

}

// 終了処理
void SceneTitle::end()
{

}

// 更新処理
SceneBase* SceneTitle::update()
{

}

// 描画
void SceneTitle::draw()
{
	DrawString(0, 0, "SceneTitle", GetColor(255, 255, 255));
}