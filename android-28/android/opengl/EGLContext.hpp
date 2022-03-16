#pragma once

#include "../../JObject.hpp"
#include "./EGLContext.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EGLContext::equals(JObject arg0) const
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

