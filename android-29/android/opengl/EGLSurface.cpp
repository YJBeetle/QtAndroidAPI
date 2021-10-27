#include "./EGLSurface.hpp"

namespace android::opengl
{
	// Fields
	
	EGLSurface::EGLSurface(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean EGLSurface::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

