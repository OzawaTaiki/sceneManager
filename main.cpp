#include <iostream>
#include <Windows.h>
#include "SceneManager.h"
#include "Game.h"
#include "Title.h"
#include "result.h"

int main() {

    SceneManager::RegisterScene("game", Game::Create);
    SceneManager::RegisterScene("title", Title::Create);
    SceneManager::RegisterScene("result", Result::Create);

    SceneManager::GetInstance()->Initialize("title");

    while (true)
    {
        SceneManager::GetInstance()->Update();

        Sleep(1000);

        SceneManager::GetInstance()->Draw();
        Sleep(1000);

    }




    return 0;
}