#pragma once
class ObjectBase
{
public:
	ObjectBase();
	virtual ~ObjectBase();

	// ����������
	void Init();
	// �I������
	void End();
	// �X�V����
	void Update();
	// �`�揈��
	void Draw();
private:
	
};