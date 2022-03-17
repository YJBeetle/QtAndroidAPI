#pragma once

#include "../../JString.hpp"
#include "./GLException.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	inline GLException::GLException(jint arg0)
		: java::lang::RuntimeException(
			"android.opengl.GLException",
			"(I)V",
			arg0
		) {}
	inline GLException::GLException(jint arg0, JString arg1)
		: java::lang::RuntimeException(
			"android.opengl.GLException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace android::opengl

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

