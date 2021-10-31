#include "./EGLSurface.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QJniObject forward
	EGLSurface::EGLSurface(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EGLSurface::EGLSurface()
		: __JniBaseClass(
			"javax.microedition.khronos.egl.EGLSurface",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

