#include "../../JObject.hpp"
#include "./EGLSync.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLSync::EGLSync(QAndroidJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLSync::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::opengl

