#pragma once

#include "BaseScene.h"

class Title :public BaseScene
{
public:
    Title() = default;
	~Title() = default;

    static std::unique_ptr<BaseScene> Create();

    void Initialize() override;
    void Update() override;
    void Draw() override;


private:


};

