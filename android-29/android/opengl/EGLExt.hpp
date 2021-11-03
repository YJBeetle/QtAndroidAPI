#pragma once

#include "../../JObject.hpp"

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
	class EGLExt : public JObject
	{
	public:
		// Fields
		static jint EGL_CONTEXT_FLAGS_KHR();
		static jint EGL_CONTEXT_MAJOR_VERSION_KHR();
		static jint EGL_CONTEXT_MINOR_VERSION_KHR();
		static jint EGL_OPENGL_ES3_BIT_KHR();
		static jint EGL_RECORDABLE_ANDROID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EGLExt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGLExt(QAndroidJniObject obj);
		
		// Constructors
		EGLExt();
		
		// Methods
		static jboolean eglPresentationTimeANDROID(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jlong arg2);
	};
} // namespace android::opengl

