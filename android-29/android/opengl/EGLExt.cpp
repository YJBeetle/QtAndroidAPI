#include "./EGLDisplay.hpp"
#include "./EGLSurface.hpp"
#include "./EGLExt.hpp"

namespace android::opengl
{
	// Fields
	jint EGLExt::EGL_CONTEXT_FLAGS_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_FLAGS_KHR"
		);
	}
	jint EGLExt::EGL_CONTEXT_MAJOR_VERSION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_MAJOR_VERSION_KHR"
		);
	}
	jint EGLExt::EGL_CONTEXT_MINOR_VERSION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_MINOR_VERSION_KHR"
		);
	}
	jint EGLExt::EGL_OPENGL_ES3_BIT_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_OPENGL_ES3_BIT_KHR"
		);
	}
	jint EGLExt::EGL_RECORDABLE_ANDROID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_RECORDABLE_ANDROID"
		);
	}
	
	EGLExt::EGLExt(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EGLExt::EGLExt()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLExt",
			"()V"
		);
	}
	
	// Methods
	jboolean EGLExt::eglPresentationTimeANDROID(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGLExt",
			"eglPresentationTimeANDROID",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;J)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::opengl

