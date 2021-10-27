#include "./EGLConfig.hpp"

namespace android::opengl
{
	// Fields
	
	EGLConfig::EGLConfig(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean EGLConfig::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

