#include "./EGLDisplay.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLDisplay::EGLDisplay(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EGLDisplay::EGLDisplay()
		: __JniBaseClass(
			"javax.microedition.khronos.egl.EGLDisplay",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

