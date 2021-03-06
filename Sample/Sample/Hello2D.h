#pragma once
/// <summary>
/// 2D表示処理のサンプル
/// </summary>
class Hello2D : public IGameObject
{
public:
	bool Start() override;
	void Update() override;
	void Render(RenderContext& rc) override;
private:
	Sprite m_sprite;
};

