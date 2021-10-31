#include "./EGLDisplay.hpp"
#include "./EGLSurface.hpp"
#include "./EGLExt.hpp"

namespace android::opengl
{
	// Fields
	jint EGLExt::EGL_CONTEXT_FLAGS_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_FLAGS_KHR"
		);
	}
	jint EGLExt::EGL_CONTEXT_MAJOR_VERSION_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_MAJOR_VERSION_KHR"
		);
	}
	jint EGLExt::EGL_CONTEXT_MINOR_VERSION_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_MINOR_VERSION_KHR"
		);
	}
	jint EGLExt::EGL_OPENGL_ES3_BIT_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_OPENGL_ES3_BIT_KHR"
		);
	}
	jint EGLExt::EGL_RECORDABLE_ANDROID()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_RECORDABLE_ANDROID"
		);
	}
	
	// QAndroidJniObject forward
	EGLExt::EGLExt(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EGLExt::EGLExt()
		: __JniBaseClass(
			"android.opengl.EGLExt",
			"()V"
		) {}
	
	// Methods
	jboolean EGLExt::eglPresentationTimeANDROID(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jlong arg2)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGLExt",
			"eglPresentationTimeANDROID",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;J)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::opengl

