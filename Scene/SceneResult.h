#pragma once
#include "SceneBase.h"
class SceneResult : public SceneBase
{
public:
	SceneResult();
	virtual ~SceneResult();

	virtual void init();		// 初期化
	virtual void end();			// 終了処理
	virtual void update();		// 更新処理
	virtual void draw();		// 描画処理

private:
};