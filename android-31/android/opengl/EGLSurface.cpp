#include "./EGLSurface.hpp"

namespace android::opengl
{
	// Fields
	
	// QJniObject forward
	EGLSurface::EGLSurface(QJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLSurface::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

