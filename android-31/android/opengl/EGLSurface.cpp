#include "../../JObject.hpp"
#include "./EGLSurface.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean EGLSurface::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::opengl

