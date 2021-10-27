#include "./EGLConfig.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	EGLConfig::EGLConfig(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EGLConfig::EGLConfig()
	{
		__thiz = QAndroidJniObject(
			"javax.microedition.khronos.egl.EGLConfig",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::microedition::khronos::egl

