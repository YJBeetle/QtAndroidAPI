#include "../../JObject.hpp"
#include "./EGLImage.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLImage::EGLImage(QAndroidJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLImage::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::opengl

