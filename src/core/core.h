/*
	MIT License
	Copyright (c) 2018 icepoint
	https://github.com/icepoint/icepoint_engine
	********************************************
	icepoint_engine/core/core.h
	This file contains main functions for icepoint
	engine core, such as init/unInit SDL, etc.
*/

#pragma once
#ifndef CORE_H
#define CORE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <thread>
#include <chrono>

using namespace std;

// * Just string for improve readability
#define DEBUG(x); if(x < 0){SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,"ERROR",SDL_GetError(),nullptr);}

namespace core
{   
    // * Event
    extern SDL_Event e;

    // * Encapsulation
    void Sleep(Uint32 ms) { SDL_Delay(ms); }

    // * Functions

    extern void initCore();
    extern void updateEvents(); // * Call this function in game cycle. Update mouse pos and events.
    extern void deInitCore();

};

#ifdef Source
#include "core.cpp"
#endif
#endif
