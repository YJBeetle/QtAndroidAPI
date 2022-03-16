#include "../../JString.hpp"
#include "./GLException.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	GLException::GLException(jint arg0)
		: java::lang::RuntimeException(
			"android.opengl.GLException",
			"(I)V",
			arg0
		) {}
	GLException::GLException(jint arg0, JString arg1)
		: java::lang::RuntimeException(
			"android.opengl.GLException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace android::opengl

