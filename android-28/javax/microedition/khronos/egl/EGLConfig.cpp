#include "./EGLConfig.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLConfig::EGLConfig(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	EGLConfig::EGLConfig()
		: JObject(
			"javax.microedition.khronos.egl.EGLConfig",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

