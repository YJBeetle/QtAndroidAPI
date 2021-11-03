#pragma once

#include "../../JObject.hpp"

class JLongArray;
namespace android::opengl
{
	class EGLConfig;
}
namespace android::opengl
{
	class EGLContext;
}
namespace android::opengl
{
	class EGLDisplay;
}
namespace android::opengl
{
	class EGLImage;
}
namespace android::opengl
{
	class EGLSurface;
}
namespace android::opengl
{
	class EGLSync;
}
namespace java::nio
{
	class Buffer;
}

namespace android::opengl
{
	class EGL15 : public JObject
	{
	public:
		// Fields
		static jint EGL_CL_EVENT_HANDLE();
		static jint EGL_CONDITION_SATISFIED();
		static jint EGL_CONTEXT_MAJOR_VERSION();
		static jint EGL_CONTEXT_MINOR_VERSION();
		static jint EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT();
		static jint EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT();
		static jint EGL_CONTEXT_OPENGL_DEBUG();
		static jint EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE();
		static jint EGL_CONTEXT_OPENGL_PROFILE_MASK();
		static jint EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY();
		static jint EGL_CONTEXT_OPENGL_ROBUST_ACCESS();
		static jlong EGL_FOREVER();
		static jint EGL_GL_COLORSPACE();
		static jint EGL_GL_COLORSPACE_LINEAR();
		static jint EGL_GL_COLORSPACE_SRGB();
		static jint EGL_GL_RENDERBUFFER();
		static jint EGL_GL_TEXTURE_2D();
		static jint EGL_GL_TEXTURE_3D();
		static jint EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X();
		static jint EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y();
		static jint EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z();
		static jint EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X();
		static jint EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y();
		static jint EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z();
		static jint EGL_GL_TEXTURE_LEVEL();
		static jint EGL_GL_TEXTURE_ZOFFSET();
		static jint EGL_IMAGE_PRESERVED();
		static jint EGL_LOSE_CONTEXT_ON_RESET();
		static android::opengl::EGLContext EGL_NO_CONTEXT();
		static android::opengl::EGLDisplay EGL_NO_DISPLAY();
		static android::opengl::EGLImage EGL_NO_IMAGE();
		static jint EGL_NO_RESET_NOTIFICATION();
		static android::opengl::EGLSurface EGL_NO_SURFACE();
		static android::opengl::EGLSync EGL_NO_SYNC();
		static jint EGL_OPENGL_ES3_BIT();
		static jint EGL_PLATFORM_ANDROID_KHR();
		static jint EGL_SIGNALED();
		static jint EGL_SYNC_CL_EVENT();
		static jint EGL_SYNC_CL_EVENT_COMPLETE();
		static jint EGL_SYNC_CONDITION();
		static jint EGL_SYNC_FENCE();
		static jint EGL_SYNC_FLUSH_COMMANDS_BIT();
		static jint EGL_SYNC_PRIOR_COMMANDS_COMPLETE();
		static jint EGL_SYNC_STATUS();
		static jint EGL_SYNC_TYPE();
		static jint EGL_TIMEOUT_EXPIRED();
		static jint EGL_UNSIGNALED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EGL15(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGL15(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint eglClientWaitSync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2, jlong arg3);
		static android::opengl::EGLImage eglCreateImage(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1, jint arg2, jlong arg3, JLongArray arg4, jint arg5);
		static android::opengl::EGLSurface eglCreatePlatformPixmapSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, java::nio::Buffer arg2, JLongArray arg3, jint arg4);
		static android::opengl::EGLSurface eglCreatePlatformWindowSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, java::nio::Buffer arg2, JLongArray arg3, jint arg4);
		static android::opengl::EGLSync eglCreateSync(android::opengl::EGLDisplay arg0, jint arg1, JLongArray arg2, jint arg3);
		static jboolean eglDestroyImage(android::opengl::EGLDisplay arg0, android::opengl::EGLImage arg1);
		static jboolean eglDestroySync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1);
		static android::opengl::EGLDisplay eglGetPlatformDisplay(jint arg0, jlong arg1, JLongArray arg2, jint arg3);
		static jboolean eglGetSyncAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2, JLongArray arg3, jint arg4);
		static jboolean eglWaitSync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2);
	};
} // namespace android::opengl

