/*
	MIT License
	Copyright (c) 2018 icepoint

	https://github.com/icepoint/icepoint_engine

	********************************************

	icepoint_engine/core/core.cpp

	This file contains main functions for icepoint
	engine core, such as init and clear.
*/

#include <SDL.h>

#include "core.h"

namespace core {

	/*
		Returns:
		-1: SDL init problems
	*/
	int icepoint_core_init()
	{
		if (!SDL_Init(SDL_INIT_EVERYTHING))
			return -1;
	}
}