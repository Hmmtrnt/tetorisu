#include "SceneResult.h"
#include "DxLib.h"
#include "Pad.h"

SceneResult::SceneResult()
{

}

SceneResult::~SceneResult()
{

}

// 初期化
void SceneResult::init()
{

}

// 終了処理
void SceneResult::end()
{

}

// 更新処理
SceneBase* SceneResult::update()
{

}

// 描画処理
void SceneResult::draw()
{
	DrawString(0, 0, "SceneMain", GetColor(255, 255, 255));
}