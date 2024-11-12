#include "Game.h"
#include "SceneManager.h"
#include <Windows.h>
#include <iostream>

std::unique_ptr<BaseScene> Game::Create()
{
    return std::make_unique<Game>();

}

void Game::Initialize()
{
    std::cout << "start Game" << std::endl;
}

void Game::Update()
{
    std::cout << "update Game" << std::endl;

    if (GetAsyncKeyState(VK_RETURN))
    {
        SceneManager::ReserveScene("result");
    }
}

void Game::Draw()
{
    std::cout << "draw Game" << std::endl;
}