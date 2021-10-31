#include "./EGLConfig.hpp"

namespace android::opengl
{
	// Fields
	
	// QJniObject forward
	EGLConfig::EGLConfig(QJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::opengl

