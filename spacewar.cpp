// Programming 2D Games
// Copyright (c) 2011 by: 
// Charles Kelly
// Game Engine Part 1
// Chapter 4 spacewar.cpp v1.0
// Spacewar is the class we create.

#include "spaceWar.h"

//=============================================================================
// Constructor
//=============================================================================
Spacewar::Spacewar()
{}

//=============================================================================
// Destructor
//=============================================================================
Spacewar::~Spacewar()
{
    releaseAll();           // call onLostDevice() for every graphics item
}

//=============================================================================
// Initializes the game
// Throws GameError on error
//=============================================================================
void Spacewar::initialize(HWND hwnd)
{
    Game::initialize(hwnd); // throws GameError

    return;
}

//=============================================================================
// Update all game items
//=============================================================================
void Spacewar::update()
{
    // typed exit? then exit
    if (input->getTextIn() == "exit") {
        PostQuitMessage(0);
    }

    const BYTE trigger = input->getGamepadLeftTrigger(0);
    if (trigger > 0) {
        input->gamePadVibrateLeft(0, trigger * 0.5, 2);
    }
}

//=============================================================================
// Artificial Intelligence
//=============================================================================
void Spacewar::ai()
{}

//=============================================================================
// Handle collisions
//=============================================================================
void Spacewar::collisions()
{}

//=============================================================================
// Render game items
//=============================================================================
void Spacewar::render()
{
    //LPCSTR temp = (LPCSTR)input->getGamepadLeftTrigger();
    //TextOutA(graphics->getDC(), 0, 0, "b", 2);
    //TextOutA(graphics->getDC(), 0, 0, (LPCSTR)input->getCharIn(), 2);
    //TextOutA(graphics->getDC(), 0, 0, (LPCSTR)input->getGamepadLeftTrigger(0), 1);
}

//=============================================================================
// The graphics device was lost.
// Release all reserved video memory so graphics device may be reset.
//=============================================================================
void Spacewar::releaseAll()
{
    Game::releaseAll();
    return;
}

//=============================================================================
// The grahics device has been reset.
// Recreate all surfaces.
//=============================================================================
void Spacewar::resetAll()
{
    Game::resetAll();
    return;
}
