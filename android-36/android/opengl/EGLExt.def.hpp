#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class SyncFence;
}
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
	class EGLSync;
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
		static jint EGL_NO_NATIVE_FENCE_FD_ANDROID();
		static jint EGL_OPENGL_ES3_BIT_KHR();
		static jint EGL_RECORDABLE_ANDROID();
		static jint EGL_SYNC_NATIVE_FENCE_ANDROID();
		static jint EGL_SYNC_NATIVE_FENCE_FD_ANDROID();
		static jint EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID();
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLExt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGLExt(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EGLExt();
		
		// Methods
		static android::hardware::SyncFence eglDupNativeFenceFDANDROID(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1);
		static jboolean eglPresentationTimeANDROID(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jlong arg2);
	};
} // namespace android::opengl

