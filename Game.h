#pragma once

#include "BaseScene.h"

class Game :public BaseScene
{
public:
    Game() = default;
    ~Game() = default;

    static  std::unique_ptr<BaseScene> Create();


    void Initialize() override;
    void Update() override;
    void Draw() override;


};