#pragma once

#ifndef ANDROID_OPENGL_GLEXCEPTION
#define ANDROID_OPENGL_GLEXCEPTION

#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::opengl
{
	class GLException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::opengl


namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void GLException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLException",
			"(I)V",
			arg0);
	}
	void GLException::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLException : public __jni_impl::android::opengl::GLException
	{
	public:
		GLException(QAndroidJniObject obj) { __thiz = obj; }
		GLException(jint arg0)
		{
			__constructor(
				arg0);
		}
		GLException(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLEXCEPTION

