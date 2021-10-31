#include "./EGLDisplay.hpp"

namespace android::opengl
{
	// Fields
	
	// QJniObject forward
	EGLDisplay::EGLDisplay(QJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLDisplay::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

