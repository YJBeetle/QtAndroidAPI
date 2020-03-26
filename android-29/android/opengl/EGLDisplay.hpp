#pragma once

#ifndef ANDROID_OPENGL_EGLDISPLAY
#define ANDROID_OPENGL_EGLDISPLAY

#include "../../__JniBaseClass.hpp"
#include "EGLObjectHandle.hpp"


namespace __jni_impl::android::opengl
{
	class EGLDisplay : public __jni_impl::android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace __jni_impl::android::opengl


namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void EGLDisplay::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLDisplay",
			"(V)V");
	}
	
	// Methods
	jboolean EGLDisplay::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGLDisplay : public __jni_impl::android::opengl::EGLDisplay
	{
	public:
		EGLDisplay(QAndroidJniObject obj) { __thiz = obj; }
		EGLDisplay()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_EGLDISPLAY

