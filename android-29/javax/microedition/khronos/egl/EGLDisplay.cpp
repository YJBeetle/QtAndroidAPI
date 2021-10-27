#include "./EGLDisplay.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	EGLDisplay::EGLDisplay(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EGLDisplay::EGLDisplay()
	{
		__thiz = QAndroidJniObject(
			"javax.microedition.khronos.egl.EGLDisplay",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::microedition::khronos::egl

