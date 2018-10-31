/*
	MIT License
	Copyright (c) 2018 icepoint

	https://github.com/icepoint/icepoint_engine

	********************************************

	icepoint_engine/core/graphics/window.h

	Class Window contained in this file provides
	functions for working with the game window,
	it's updates, state changing, etc.
*/

#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>

namespace core {
namespace graphics {

	enum WindowState 
	{
		WINDOWED,
		WINDOW_FULLSCREEN,
		FULLSCREEN
	};

	class Window
	{
		private:
			const char *title;
			int height;
			int width;
			WindowState state;
			SDL_Window *window;

		public:
			Window(const char *title, int width=640, int height=640);
			~Window();

			void update();

			void set_fullscreen();
			void set_windowed_fullscreen();
			void set_windowed();

			// TODO: review methods set
	};
	
}}

#endif
