#include "Rect.h"

#include <SDL_rect.h>

Rect *newRect() {
	Rect rect = {};

	rect.internal = new SDL_Rect();
}


// 