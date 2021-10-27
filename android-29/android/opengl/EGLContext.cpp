#include "./EGLContext.hpp"

namespace android::opengl
{
	// Fields
	
	EGLContext::EGLContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean EGLContext::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

