#pragma once
#include "SceneBase.h"
class SceneTitle : public SceneBase
{
public:
	SceneTitle();
	virtual ~SceneTitle();

	virtual void init();		// ‰Šú‰»
	virtual void end();			// I—¹ˆ—
	virtual SceneBase* update();		// XVˆ—
	virtual void draw();		// •`‰æ

private:

};