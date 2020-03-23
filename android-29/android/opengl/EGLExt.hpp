#pragma once

#ifndef ANDROID_OPENGL_EGLEXT
#define ANDROID_OPENGL_EGLEXT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::opengl
{
	class EGLDisplay;
}
namespace __jni_impl::android::opengl
{
	class EGLSurface;
}

namespace __jni_impl::android::opengl
{
	class EGLExt : public __JniBaseClass
	{
	public:
		// Fields
		static jint EGL_CONTEXT_FLAGS_KHR();
		static jint EGL_CONTEXT_MAJOR_VERSION_KHR();
		static jint EGL_CONTEXT_MINOR_VERSION_KHR();
		static jint EGL_OPENGL_ES3_BIT_KHR();
		static jint EGL_RECORDABLE_ANDROID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean eglPresentationTimeANDROID(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jlong arg2);
	};
} // namespace __jni_impl::android::opengl

#include "EGLDisplay.hpp"
#include "EGLSurface.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint EGLExt::EGL_CONTEXT_FLAGS_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_FLAGS_KHR");
	}
	jint EGLExt::EGL_CONTEXT_MAJOR_VERSION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_MAJOR_VERSION_KHR");
	}
	jint EGLExt::EGL_CONTEXT_MINOR_VERSION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_MINOR_VERSION_KHR");
	}
	jint EGLExt::EGL_OPENGL_ES3_BIT_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_OPENGL_ES3_BIT_KHR");
	}
	jint EGLExt::EGL_RECORDABLE_ANDROID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_RECORDABLE_ANDROID");
	}
	
	// Constructors
	void EGLExt::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLExt",
			"()V");
	}
	
	// Methods
	jboolean EGLExt::eglPresentationTimeANDROID(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGLExt",
			"eglPresentationTimeANDROID",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;J)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGLExt : public __jni_impl::android::opengl::EGLExt
	{
	public:
		EGLExt(QAndroidJniObject obj) { __thiz = obj; }
		EGLExt()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_EGLEXT

