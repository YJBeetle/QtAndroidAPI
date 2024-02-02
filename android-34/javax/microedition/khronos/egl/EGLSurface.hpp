#pragma once

#include "./EGLSurface.def.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// Constructors
	inline EGLSurface::EGLSurface()
		: JObject(
			"javax.microedition.khronos.egl.EGLSurface",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::microedition::khronos::egl;
#endif
