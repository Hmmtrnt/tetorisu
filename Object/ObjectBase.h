#pragma once
class ObjectBase
{
public:
	ObjectBase();
	virtual ~ObjectBase();

	// 初期化処理
	void Init();
	// 終了処理
	void End();
	// 更新処理
	void Update();
	// 描画処理
	void Draw();
private:
	
};