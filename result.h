#pragma once

#include "BaseScene.h"

class Result :public BaseScene
{
public:
    Result() = default;
    ~Result() = default;

    static std::unique_ptr<BaseScene> Create();

    void Initialize() override;
    void Update() override;
    void Draw() override;
};