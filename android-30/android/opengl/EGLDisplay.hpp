#pragma once

#include "../../JObject.hpp"
#include "./EGLDisplay.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EGLDisplay::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::opengl

// Base class headers
#include "./EGLObjectHandle.hpp"

