#pragma once

#include "./EGLConfig.def.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// Constructors
	inline EGLConfig::EGLConfig()
		: JObject(
			"javax.microedition.khronos.egl.EGLConfig",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::microedition::khronos::egl;
#endif
