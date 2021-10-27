#include "./EGLSurface.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	EGLSurface::EGLSurface(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EGLSurface::EGLSurface()
	{
		__thiz = QAndroidJniObject(
			"javax.microedition.khronos.egl.EGLSurface",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::microedition::khronos::egl

