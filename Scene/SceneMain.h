#pragma once
#include "SceneBase.h"
class SceneMain : public SceneBase
{
public:
	SceneMain();
	virtual ~SceneMain();

	virtual void init();		// ������
	virtual void end();			// �I������
	virtual void update();		// �X�V����
	virtual void draw();		// �`�揈��

private:

};