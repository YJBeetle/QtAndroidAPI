#include "./EGLConfig.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLConfig::EGLConfig(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EGLConfig::EGLConfig()
		: __JniBaseClass(
			"javax.microedition.khronos.egl.EGLConfig",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

