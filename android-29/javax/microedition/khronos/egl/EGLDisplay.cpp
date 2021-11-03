#include "./EGLDisplay.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QJniObject forward
	EGLDisplay::EGLDisplay(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EGLDisplay::EGLDisplay()
		: JObject(
			"javax.microedition.khronos.egl.EGLDisplay",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

