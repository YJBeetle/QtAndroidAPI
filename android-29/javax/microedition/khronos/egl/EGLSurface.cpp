#include "./EGLSurface.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QJniObject forward
	EGLSurface::EGLSurface(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EGLSurface::EGLSurface()
		: JObject(
			"javax.microedition.khronos.egl.EGLSurface",
			"()V"
		) {}
	
	// Methods
} // namespace javax::microedition::khronos::egl

