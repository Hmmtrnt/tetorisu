#include "SceneResult.h"
#include "SceneTitle.h"
#include "SceneMain.h"
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
	if (Pad::isTrigger(PAD_INPUT_2))
	{
		return (new SceneTitle);
	}
	else if (Pad::isTrigger(PAD_INPUT_1))
	{
		return (new SceneMain);
	}

	return this;
}

// 描画処理
void SceneResult::draw()
{
	DrawString(0, 0, "SceneResult", GetColor(255, 255, 255));
}