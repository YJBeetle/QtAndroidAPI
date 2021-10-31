#include "./EGLImage.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLImage::EGLImage(QAndroidJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLImage::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

