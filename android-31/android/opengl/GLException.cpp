#include "./GLException.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	GLException::GLException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	GLException::GLException(jint arg0)
		: java::lang::RuntimeException(
			"android.opengl.GLException",
			"(I)V",
			arg0
		) {}
	GLException::GLException(jint arg0, jstring arg1)
		: java::lang::RuntimeException(
			"android.opengl.GLException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::opengl

