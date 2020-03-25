#pragma once

#ifndef ANDROID_OPENGL_EGLCONTEXT
#define ANDROID_OPENGL_EGLCONTEXT

#include "../../__JniBaseClass.hpp"
#include "EGLObjectHandle.hpp"


namespace __jni_impl::android::opengl
{
	class EGLContext : public __jni_impl::android::opengl::EGLObjectHandle
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
	void EGLContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLContext",
			"(V)V");
	}
	
	// Methods
	jboolean EGLContext::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGLContext : public __jni_impl::android::opengl::EGLContext
	{
	public:
		EGLContext(QAndroidJniObject obj) { __thiz = obj; }
		EGLContext()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_EGLCONTEXT

