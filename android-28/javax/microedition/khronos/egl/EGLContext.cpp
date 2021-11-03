#include "./EGLContext.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLContext::EGLContext(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	EGLContext::EGLContext()
		: JObject(
			"javax.microedition.khronos.egl.EGLContext",
			"()V"
		) {}
	
	// Methods
	JObject EGLContext::getEGL()
	{
		return callStaticObjectMethod(
			"javax.microedition.khronos.egl.EGLContext",
			"getEGL",
			"()Ljavax/microedition/khronos/egl/EGL;"
		);
	}
	JObject EGLContext::getGL() const
	{
		return callObjectMethod(
			"getGL",
			"()Ljavax/microedition/khronos/opengles/GL;"
		);
	}
} // namespace javax::microedition::khronos::egl

