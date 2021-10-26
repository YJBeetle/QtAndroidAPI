#pragma once

#ifndef JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY
#define JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::microedition::khronos::egl
{
	class EGLDisplay : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::microedition::khronos::egl


namespace __jni_impl::javax::microedition::khronos::egl
{
	// Fields
	
	// Constructors
	void EGLDisplay::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.microedition.khronos.egl.EGLDisplay",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::microedition::khronos::egl

namespace javax::microedition::khronos::egl
{
	class EGLDisplay : public __jni_impl::javax::microedition::khronos::egl::EGLDisplay
	{
	public:
		EGLDisplay(QAndroidJniObject obj) { __thiz = obj; }
		EGLDisplay()
		{
			__constructor();
		}
	};
} // namespace javax::microedition::khronos::egl

#endif // JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY

