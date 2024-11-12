#include "Title.h"
#include "SceneManager.h"
#include <Windows.h>
#include <iostream>

std::unique_ptr<BaseScene> Title::Create()
{
    return std::make_unique<Title>();
}

void Title::Initialize()
{
    std::cout << "start Title" << std::endl;
}

void Title::Update()
{
    std::cout << "update Title" << std::endl;

    if (GetAsyncKeyState(VK_RETURN))
    {
        SceneManager::ReserveScene("game");
    }
}

void Title::Draw()
{
    std::cout << "draw Title" << std::endl;
}
