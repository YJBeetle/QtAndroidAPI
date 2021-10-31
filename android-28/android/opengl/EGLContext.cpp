#include "./EGLContext.hpp"

namespace android::opengl
{
	// Fields
	
	// QJniObject forward
	EGLContext::EGLContext(QJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLContext::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

