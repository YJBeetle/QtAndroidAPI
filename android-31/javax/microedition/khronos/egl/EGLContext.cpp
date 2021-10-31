#include "./EGLContext.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLContext::EGLContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EGLContext::EGLContext()
		: __JniBaseClass(
			"javax.microedition.khronos.egl.EGLContext",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass EGLContext::getEGL()
	{
		return callStaticObjectMethod(
			"javax.microedition.khronos.egl.EGLContext",
			"getEGL",
			"()Ljavax/microedition/khronos/egl/EGL;"
		);
	}
	__JniBaseClass EGLContext::getGL()
	{
		return callObjectMethod(
			"getGL",
			"()Ljavax/microedition/khronos/opengles/GL;"
		);
	}
} // namespace javax::microedition::khronos::egl

