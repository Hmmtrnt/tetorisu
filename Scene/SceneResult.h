#pragma once
#include "SceneBase.h"
class SceneResult : public SceneBase
{
public:
	SceneResult();
	virtual ~SceneResult();

	virtual void init();		// ‰Šú‰»
	virtual void end();			// I—¹ˆ—
	virtual void update();		// XVˆ—
	virtual void draw();		// •`‰æˆ—

private:
};