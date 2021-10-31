#include "./EGLSurface.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLSurface::EGLSurface(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EGLSurface::EGLSurface()
		: __JniBaseClass(
			"javax.microedition.khronos.egl.EGLSurface",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

