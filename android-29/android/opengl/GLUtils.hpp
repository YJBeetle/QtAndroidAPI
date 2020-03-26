#pragma once

#ifndef ANDROID_OPENGL_GLUTILS
#define ANDROID_OPENGL_GLUTILS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::opengl
{
	class GLUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getType(__jni_impl::android::graphics::Bitmap arg0);
		static jint getInternalFormat(__jni_impl::android::graphics::Bitmap arg0);
		static void texImage2D(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap arg2, jint arg3);
		static void texImage2D(jint arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap arg3, jint arg4, jint arg5);
		static void texImage2D(jint arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap arg3, jint arg4);
		static void texSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Bitmap arg4, jint arg5, jint arg6);
		static void texSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Bitmap arg4);
		static jstring getEGLErrorString(jint arg0);
	};
} // namespace __jni_impl::android::opengl

#include "../graphics/Bitmap.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void GLUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLUtils",
			"(V)V");
	}
	
	// Methods
	jint GLUtils::getType(__jni_impl::android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLUtils",
			"getType",
			"(Landroid/graphics/Bitmap;)I",
			arg0.__jniObject().object()
		);
	}
	jint GLUtils::getInternalFormat(__jni_impl::android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLUtils",
			"getInternalFormat",
			"(Landroid/graphics/Bitmap;)I",
			arg0.__jniObject().object()
		);
	}
	void GLUtils::texImage2D(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texImage2D",
			"(IILandroid/graphics/Bitmap;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void GLUtils::texImage2D(jint arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap arg3, jint arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texImage2D",
			"(IIILandroid/graphics/Bitmap;II)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		);
	}
	void GLUtils::texImage2D(jint arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texImage2D",
			"(IIILandroid/graphics/Bitmap;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	void GLUtils::texSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Bitmap arg4, jint arg5, jint arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texSubImage2D",
			"(IIIILandroid/graphics/Bitmap;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6
		);
	}
	void GLUtils::texSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Bitmap arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texSubImage2D",
			"(IIIILandroid/graphics/Bitmap;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jstring GLUtils::getEGLErrorString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLUtils",
			"getEGLErrorString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLUtils : public __jni_impl::android::opengl::GLUtils
	{
	public:
		GLUtils(QAndroidJniObject obj) { __thiz = obj; }
		GLUtils()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLUTILS

