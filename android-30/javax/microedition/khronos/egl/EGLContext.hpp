#pragma once

#include "./EGLContext.def.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// Constructors
	inline EGLContext::EGLContext()
		: JObject(
			"javax.microedition.khronos.egl.EGLContext",
			"()V"
		) {}
	
	// Methods
	inline JObject EGLContext::getEGL()
	{
		return callStaticObjectMethod(
			"javax.microedition.khronos.egl.EGLContext",
			"getEGL",
			"()Ljavax/microedition/khronos/egl/EGL;"
		);
	}
	inline JObject EGLContext::getGL() const
	{
		return callObjectMethod(
			"getGL",
			"()Ljavax/microedition/khronos/opengles/GL;"
		);
	}
} // namespace javax::microedition::khronos::egl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::microedition::khronos::egl;
#endif
