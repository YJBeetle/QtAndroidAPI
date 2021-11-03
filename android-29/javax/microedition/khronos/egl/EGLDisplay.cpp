#include "./EGLDisplay.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLDisplay::EGLDisplay(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	EGLDisplay::EGLDisplay()
		: JObject(
			"javax.microedition.khronos.egl.EGLDisplay",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

