#pragma once

#ifndef ANDROID_OPENGL_EGLIMAGE
#define ANDROID_OPENGL_EGLIMAGE

#include "../../__JniBaseClass.hpp"
#include "EGLObjectHandle.hpp"


namespace __jni_impl::android::opengl
{
	class EGLImage : public __jni_impl::android::opengl::EGLObjectHandle
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
	void EGLImage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLImage",
			"(V)V");
	}
	
	// Methods
	jboolean EGLImage::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGLImage : public __jni_impl::android::opengl::EGLImage
	{
	public:
		EGLImage(QAndroidJniObject obj) { __thiz = obj; }
		EGLImage()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_EGLIMAGE

