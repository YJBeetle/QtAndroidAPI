#include "./EGLDisplay.hpp"

namespace android::opengl
{
	// Fields
	
	EGLDisplay::EGLDisplay(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean EGLDisplay::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

