#pragma once
#include "BaseScene.h"

#include <iostream>
#include <cstdint>
#include <string>
#include <unordered_map>
#include <memory>

using SceneFactory = std::unique_ptr<BaseScene>(*)();

class SceneManager
{
public:
    static SceneManager* GetInstance();

    static void RegisterScene(const std::string& _name, SceneFactory _scene);

    void Initialize(const std::string& _name);
    void Update();
    void Draw();

    static void ReserveScene(const std::string& _name);
    void ChangeScene();

private:
    std::unordered_map<std::string, SceneFactory> scenes_;
    std::unique_ptr<BaseScene> currentScene_ = nullptr;

    std::string currentSceneName_ = {};
    std::string nextSceneName_ = {};

};