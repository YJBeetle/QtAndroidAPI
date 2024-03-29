#pragma once

#include "./EGLDisplay.def.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// Constructors
	inline EGLDisplay::EGLDisplay()
		: JObject(
			"javax.microedition.khronos.egl.EGLDisplay",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::microedition::khronos::egl;
#endif
