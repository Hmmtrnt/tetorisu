#pragma once
#include "SceneBase.h"
class SceneTitle : public SceneBase
{
public:
	SceneTitle();
	virtual ~SceneTitle();

	virtual void init();		// 初期化
	virtual void end();			// 終了処理
	virtual void update();		// 更新処理
	virtual void draw();		// 描画

private:

};