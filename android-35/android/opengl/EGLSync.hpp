#pragma once

#include "../../JObject.hpp"
#include "./EGLSync.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EGLSync::equals(JObject arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
