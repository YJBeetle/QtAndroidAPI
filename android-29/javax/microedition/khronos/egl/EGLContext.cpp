#include "./EGLContext.hpp"

namespace javax::microedition::khronos::egl
{
	// Fields
	
	EGLContext::EGLContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EGLContext::EGLContext()
	{
		__thiz = QAndroidJniObject(
			"javax.microedition.khronos.egl.EGLContext",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject EGLContext::getEGL()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.microedition.khronos.egl.EGLContext",
			"getEGL",
			"()Ljavax/microedition/khronos/egl/EGL;"
		);
	}
	QAndroidJniObject EGLContext::getGL()
	{
		return __thiz.callObjectMethod(
			"getGL",
			"()Ljavax/microedition/khronos/opengles/GL;"
		);
	}
} // namespace javax::microedition::khronos::egl

