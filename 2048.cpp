// 2048.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stdafx.h"
#include "TileModel.h"
#include "TileField.h"
#include "Constants.h"
#include "GameField.h"

int main()
{
    sf::VideoMode videoMode = sf::VideoMode::getDesktopMode();
    sf::RenderWindow window{ videoMode, "2048", sf::Style::Fullscreen };
    
    GameField field(Constants::TileFieldSize[0], Constants::MaximumScore);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
                break;
            }
        }
    }
}