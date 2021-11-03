#include "../../JObject.hpp"
#include "./EGLDisplay.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLDisplay::EGLDisplay(QAndroidJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLDisplay::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::opengl

