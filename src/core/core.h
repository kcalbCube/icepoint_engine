/*
	MIT License
	Copyright (c) 2018 icepoint
	https://github.com/icepoint/icepoint_engine
	********************************************
	icepoint_engine/core/core.h
	This file contains main functions for icepoint
	engine core, such as init/unInit, creating window, and
    	basic function for work with Textures.
*/

#ifndef CORE_H
#define CORE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <thread>
#include <chrono>

using namespace std;

typedef SDL_Renderer* Renderer;
typedef SDL_Window*   Window;
typedef SDL_Rect      Rect;

// * Just string for improve readability
#define DEBUG(x); if(x < 0){SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,"ERROR",SDL_GetError(),NULL);}

extern Renderer video;
extern Window window;

namespace core
{   // * Data for window
    extern char* title;
    extern Uint32 windowW;
    extern Uint32 windowH;
    extern bool isFullScreen;
    extern SDL_DisplayMode dispMode;

    // * Event
    extern SDL_Event e;

    // * Encapsulation
    void Sleep(Uint32 ms) { SDL_Delay(ms); }

    // * Functions

    extern void createWindow();
    extern void initCore();
    extern void updateEvents();
    extern void moveTex(int x, int y, SDL_Texture* tex);
    extern void shiftMoveTex(int x,int y, SDL_Texture* tex);
    extern void clearScreen();
    extern void deInitCore();
}

// ! Release version must not include core.cpp. This string just for debug src.
#include "core.cpp"
#endif
