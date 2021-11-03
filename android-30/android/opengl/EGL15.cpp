#include "../../JLongArray.hpp"
#include "./EGLConfig.hpp"
#include "./EGLContext.hpp"
#include "./EGLDisplay.hpp"
#include "./EGLImage.hpp"
#include "./EGLSurface.hpp"
#include "./EGLSync.hpp"
#include "../../java/nio/Buffer.hpp"
#include "./EGL15.hpp"

namespace android::opengl
{
	// Fields
	jint EGL15::EGL_CL_EVENT_HANDLE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CL_EVENT_HANDLE"
		);
	}
	jint EGL15::EGL_CONDITION_SATISFIED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONDITION_SATISFIED"
		);
	}
	jint EGL15::EGL_CONTEXT_MAJOR_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_MAJOR_VERSION"
		);
	}
	jint EGL15::EGL_CONTEXT_MINOR_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_MINOR_VERSION"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_DEBUG()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_DEBUG"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_PROFILE_MASK()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_PROFILE_MASK"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_ROBUST_ACCESS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_ROBUST_ACCESS"
		);
	}
	jlong EGL15::EGL_FOREVER()
	{
		return getStaticField<jlong>(
			"android.opengl.EGL15",
			"EGL_FOREVER"
		);
	}
	jint EGL15::EGL_GL_COLORSPACE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE"
		);
	}
	jint EGL15::EGL_GL_COLORSPACE_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE_LINEAR"
		);
	}
	jint EGL15::EGL_GL_COLORSPACE_SRGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE_SRGB"
		);
	}
	jint EGL15::EGL_GL_RENDERBUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_RENDERBUFFER"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_2D"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_3D()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_3D"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_LEVEL"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_ZOFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_ZOFFSET"
		);
	}
	jint EGL15::EGL_IMAGE_PRESERVED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_IMAGE_PRESERVED"
		);
	}
	jint EGL15::EGL_LOSE_CONTEXT_ON_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_LOSE_CONTEXT_ON_RESET"
		);
	}
	android::opengl::EGLContext EGL15::EGL_NO_CONTEXT()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_CONTEXT",
			"Landroid/opengl/EGLContext;"
		);
	}
	android::opengl::EGLDisplay EGL15::EGL_NO_DISPLAY()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_DISPLAY",
			"Landroid/opengl/EGLDisplay;"
		);
	}
	android::opengl::EGLImage EGL15::EGL_NO_IMAGE()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_IMAGE",
			"Landroid/opengl/EGLImage;"
		);
	}
	jint EGL15::EGL_NO_RESET_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_NO_RESET_NOTIFICATION"
		);
	}
	android::opengl::EGLSurface EGL15::EGL_NO_SURFACE()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_SURFACE",
			"Landroid/opengl/EGLSurface;"
		);
	}
	android::opengl::EGLSync EGL15::EGL_NO_SYNC()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_SYNC",
			"Landroid/opengl/EGLSync;"
		);
	}
	jint EGL15::EGL_OPENGL_ES3_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_OPENGL_ES3_BIT"
		);
	}
	jint EGL15::EGL_PLATFORM_ANDROID_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_PLATFORM_ANDROID_KHR"
		);
	}
	jint EGL15::EGL_SIGNALED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SIGNALED"
		);
	}
	jint EGL15::EGL_SYNC_CL_EVENT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CL_EVENT"
		);
	}
	jint EGL15::EGL_SYNC_CL_EVENT_COMPLETE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CL_EVENT_COMPLETE"
		);
	}
	jint EGL15::EGL_SYNC_CONDITION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CONDITION"
		);
	}
	jint EGL15::EGL_SYNC_FENCE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_FENCE"
		);
	}
	jint EGL15::EGL_SYNC_FLUSH_COMMANDS_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_FLUSH_COMMANDS_BIT"
		);
	}
	jint EGL15::EGL_SYNC_PRIOR_COMMANDS_COMPLETE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_PRIOR_COMMANDS_COMPLETE"
		);
	}
	jint EGL15::EGL_SYNC_STATUS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_STATUS"
		);
	}
	jint EGL15::EGL_SYNC_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_TYPE"
		);
	}
	jint EGL15::EGL_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_TIMEOUT_EXPIRED"
		);
	}
	jint EGL15::EGL_UNSIGNALED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_UNSIGNALED"
		);
	}
	
	// QJniObject forward
	EGL15::EGL15(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint EGL15::eglClientWaitSync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2, jlong arg3)
	{
		return callStaticMethod<jint>(
			"android.opengl.EGL15",
			"eglClientWaitSync",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;IJ)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	android::opengl::EGLImage EGL15::eglCreateImage(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1, jint arg2, jlong arg3, JLongArray arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglCreateImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;IJ[JI)Landroid/opengl/EGLImage;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object<jlongArray>(),
			arg5
		);
	}
	android::opengl::EGLSurface EGL15::eglCreatePlatformPixmapSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, java::nio::Buffer arg2, JLongArray arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglCreatePlatformPixmapSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Ljava/nio/Buffer;[JI)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jlongArray>(),
			arg4
		);
	}
	android::opengl::EGLSurface EGL15::eglCreatePlatformWindowSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, java::nio::Buffer arg2, JLongArray arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglCreatePlatformWindowSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Ljava/nio/Buffer;[JI)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jlongArray>(),
			arg4
		);
	}
	android::opengl::EGLSync EGL15::eglCreateSync(android::opengl::EGLDisplay arg0, jint arg1, JLongArray arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglCreateSync",
			"(Landroid/opengl/EGLDisplay;I[JI)Landroid/opengl/EGLSync;",
			arg0.object(),
			arg1,
			arg2.object<jlongArray>(),
			arg3
		);
	}
	jboolean EGL15::eglDestroyImage(android::opengl::EGLDisplay arg0, android::opengl::EGLImage arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglDestroyImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLImage;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean EGL15::eglDestroySync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglDestroySync",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::opengl::EGLDisplay EGL15::eglGetPlatformDisplay(jint arg0, jlong arg1, JLongArray arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglGetPlatformDisplay",
			"(IJ[JI)Landroid/opengl/EGLDisplay;",
			arg0,
			arg1,
			arg2.object<jlongArray>(),
			arg3
		);
	}
	jboolean EGL15::eglGetSyncAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2, JLongArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglGetSyncAttrib",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;I[JI)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jlongArray>(),
			arg4
		);
	}
	jboolean EGL15::eglWaitSync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglWaitSync",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::opengl

