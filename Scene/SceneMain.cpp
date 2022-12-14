#include "SceneMain.h"
#include "SceneResult.h"
#include "DxLib.h"
#include "Pad.h"

SceneMain::SceneMain()
{

}

SceneMain::~SceneMain()
{

}

// 初期化
void SceneMain::init()
{

}

// 終了処理
void SceneMain::end()
{

}

// 更新処理
SceneBase* SceneMain::update()
{
	if (Pad::isTrigger(PAD_INPUT_2))
	{
		return (new SceneResult);
	}
	return this;
}

// 描画処理
void SceneMain::draw()
{
	DrawString(0, 0, "SceneMain", GetColor(255, 255, 255));
	DrawBox(100, 50, 600, 600, GetColor(255, 255, 255), true);
}