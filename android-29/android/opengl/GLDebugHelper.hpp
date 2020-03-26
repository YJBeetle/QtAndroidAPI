#pragma once

#ifndef ANDROID_OPENGL_GLDEBUGHELPER
#define ANDROID_OPENGL_GLDEBUGHELPER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class Writer;
}

namespace __jni_impl::android::opengl
{
	class GLDebugHelper : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONFIG_CHECK_GL_ERROR();
		static jint CONFIG_CHECK_THREAD();
		static jint CONFIG_LOG_ARGUMENT_NAMES();
		static jint ERROR_WRONG_THREAD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject wrap(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::java::io::Writer arg2);
	};
} // namespace __jni_impl::android::opengl

#include "../../java/io/Writer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint GLDebugHelper::CONFIG_CHECK_GL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_CHECK_GL_ERROR"
		);
	}
	jint GLDebugHelper::CONFIG_CHECK_THREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_CHECK_THREAD"
		);
	}
	jint GLDebugHelper::CONFIG_LOG_ARGUMENT_NAMES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_LOG_ARGUMENT_NAMES"
		);
	}
	jint GLDebugHelper::ERROR_WRONG_THREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"ERROR_WRONG_THREAD"
		);
	}
	
	// Constructors
	void GLDebugHelper::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLDebugHelper",
			"()V");
	}
	
	// Methods
	QAndroidJniObject GLDebugHelper::wrap(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::java::io::Writer arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLDebugHelper",
			"wrap",
			"(Ljavax/microedition/khronos/opengles/GL;ILjava/io/Writer;)Ljavax/microedition/khronos/opengles/GL;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLDebugHelper : public __jni_impl::android::opengl::GLDebugHelper
	{
	public:
		GLDebugHelper(QAndroidJniObject obj) { __thiz = obj; }
		GLDebugHelper()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLDEBUGHELPER

