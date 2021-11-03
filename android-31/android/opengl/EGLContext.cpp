#include "../../JObject.hpp"
#include "./EGLContext.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLContext::EGLContext(QAndroidJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLContext::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::opengl

