#pragma once
#include "SceneBase.h"
class SceneTitle : public SceneBase
{
public:
	SceneTitle();
	virtual ~SceneTitle();

	virtual void init();		// ������
	virtual void end();			// �I������
	virtual void update();		// �X�V����
	virtual void draw();		// �`��

private:

};