#include "./EGLImage.hpp"

namespace android::opengl
{
	// Fields
	
	EGLImage::EGLImage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean EGLImage::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

