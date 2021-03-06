
#pragma once

#include "Tweeno/Easing/Type.h"

namespace Tweeno {

namespace Easing {

#ifndef PI
#define PI  3.14159265
#endif

class Elastic {

	public:

		static easing_function easeIn;
		static easing_function easeOut;
		static easing_function easeInOut;
};

}

}
