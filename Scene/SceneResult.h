#pragma once
#include "SceneBase.h"
class SceneResult : public SceneBase
{
public:
	SceneResult();
	virtual ~SceneResult();

	virtual void init();		// ������
	virtual void end();			// �I������
	virtual void update();		// �X�V����
	virtual void draw();		// �`�揈��

private:
};