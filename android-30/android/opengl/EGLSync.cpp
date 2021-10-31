#include "./EGLSync.hpp"

namespace android::opengl
{
	// Fields
	
	// QJniObject forward
	EGLSync::EGLSync(QJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLSync::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

