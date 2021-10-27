#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::opengl
{
	class EGLDisplay;
}
namespace android::opengl
{
	class EGLSurface;
}

namespace android::opengl
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
		
		EGLExt(QAndroidJniObject obj);
		// Constructors
		EGLExt();
		
		// Methods
		static jboolean eglPresentationTimeANDROID(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jlong arg2);
	};
} // namespace android::opengl

