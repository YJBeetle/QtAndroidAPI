#pragma once

#ifndef JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT
#define JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::microedition::khronos::egl
{
	class EGLContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getEGL();
		QAndroidJniObject getGL();
	};
} // namespace __jni_impl::javax::microedition::khronos::egl


namespace __jni_impl::javax::microedition::khronos::egl
{
	// Fields
	
	// Constructors
	void EGLContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.microedition.khronos.egl.EGLContext",
			"()V");
	}
	
	// Methods
	QAndroidJniObject EGLContext::getEGL()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.microedition.khronos.egl.EGLContext",
			"getEGL",
			"()Ljavax/microedition/khronos/egl/EGL;");
	}
	QAndroidJniObject EGLContext::getGL()
	{
		return __thiz.callObjectMethod(
			"getGL",
			"()Ljavax/microedition/khronos/opengles/GL;");
	}
} // namespace __jni_impl::javax::microedition::khronos::egl

namespace javax::microedition::khronos::egl
{
	class EGLContext : public __jni_impl::javax::microedition::khronos::egl::EGLContext
	{
	public:
		EGLContext(QAndroidJniObject obj) { __thiz = obj; }
		EGLContext()
		{
			__constructor();
		}
	};
} // namespace javax::microedition::khronos::egl

#endif // JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT

