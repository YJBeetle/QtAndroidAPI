#pragma once

#ifndef ANDROID_OPENGL_EGLSYNC
#define ANDROID_OPENGL_EGLSYNC

#include "EGLObjectHandle.hpp"


namespace __jni_impl::android::opengl
{
	class EGLSync : public __jni_impl::android::opengl::EGLObjectHandle
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
	void EGLSync::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLSync",
			"(V)V");
	}
	
	// Methods
	jboolean EGLSync::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGLSync : public __jni_impl::android::opengl::EGLSync
	{
	public:
		EGLSync(QAndroidJniObject obj) { __thiz = obj; }
		EGLSync()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_EGLSYNC

