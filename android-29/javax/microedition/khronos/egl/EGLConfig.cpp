#include "./EGLConfig.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QJniObject forward
	EGLConfig::EGLConfig(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EGLConfig::EGLConfig()
		: JObject(
			"javax.microedition.khronos.egl.EGLConfig",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

