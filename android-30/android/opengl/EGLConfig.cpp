#include "../../JObject.hpp"
#include "./EGLConfig.hpp"

namespace android::opengl
{
	// Fields
	
	// QJniObject forward
	EGLConfig::EGLConfig(QJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::opengl

