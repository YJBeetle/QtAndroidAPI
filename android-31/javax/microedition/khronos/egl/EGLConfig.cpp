#include "./EGLConfig.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QJniObject forward
	EGLConfig::EGLConfig(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EGLConfig::EGLConfig()
		: __JniBaseClass(
			"javax.microedition.khronos.egl.EGLConfig",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

