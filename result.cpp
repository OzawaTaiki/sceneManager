#include "result.h"
#include "SceneManager.h"
#include <Windows.h>
#include <iostream>

std::unique_ptr<BaseScene> Result::Create()
{
    return std::make_unique<Result>();
}

void Result::Initialize()
{
    std::cout << "start Result" << std::endl;
}

void Result::Update()
{
    std::cout << "update Result" << std::endl;

    if (GetAsyncKeyState(VK_RETURN))
    {
        SceneManager::ReserveScene("title");
    }
}

void Result::Draw()
{
    std::cout << "draw Result" << std::endl;
}
