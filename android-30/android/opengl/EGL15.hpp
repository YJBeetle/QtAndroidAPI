#pragma once

#include "../../JLongArray.hpp"
#include "./EGLConfig.def.hpp"
#include "./EGLContext.def.hpp"
#include "./EGLDisplay.def.hpp"
#include "./EGLImage.def.hpp"
#include "./EGLSurface.def.hpp"
#include "./EGLSync.def.hpp"
#include "../../java/nio/Buffer.def.hpp"
#include "./EGL15.def.hpp"

namespace android::opengl
{
	// Fields
	inline jint EGL15::EGL_CL_EVENT_HANDLE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CL_EVENT_HANDLE"
		);
	}
	inline jint EGL15::EGL_CONDITION_SATISFIED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONDITION_SATISFIED"
		);
	}
	inline jint EGL15::EGL_CONTEXT_MAJOR_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_MAJOR_VERSION"
		);
	}
	inline jint EGL15::EGL_CONTEXT_MINOR_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_MINOR_VERSION"
		);
	}
	inline jint EGL15::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT"
		);
	}
	inline jint EGL15::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT"
		);
	}
	inline jint EGL15::EGL_CONTEXT_OPENGL_DEBUG()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_DEBUG"
		);
	}
	inline jint EGL15::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE"
		);
	}
	inline jint EGL15::EGL_CONTEXT_OPENGL_PROFILE_MASK()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_PROFILE_MASK"
		);
	}
	inline jint EGL15::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY"
		);
	}
	inline jint EGL15::EGL_CONTEXT_OPENGL_ROBUST_ACCESS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_ROBUST_ACCESS"
		);
	}
	inline jlong EGL15::EGL_FOREVER()
	{
		return getStaticField<jlong>(
			"android.opengl.EGL15",
			"EGL_FOREVER"
		);
	}
	inline jint EGL15::EGL_GL_COLORSPACE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE"
		);
	}
	inline jint EGL15::EGL_GL_COLORSPACE_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE_LINEAR"
		);
	}
	inline jint EGL15::EGL_GL_COLORSPACE_SRGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE_SRGB"
		);
	}
	inline jint EGL15::EGL_GL_RENDERBUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_RENDERBUFFER"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_2D"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_3D()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_3D"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_LEVEL"
		);
	}
	inline jint EGL15::EGL_GL_TEXTURE_ZOFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_ZOFFSET"
		);
	}
	inline jint EGL15::EGL_IMAGE_PRESERVED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_IMAGE_PRESERVED"
		);
	}
	inline jint EGL15::EGL_LOSE_CONTEXT_ON_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_LOSE_CONTEXT_ON_RESET"
		);
	}
	inline android::opengl::EGLContext EGL15::EGL_NO_CONTEXT()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_CONTEXT",
			"Landroid/opengl/EGLContext;"
		);
	}
	inline android::opengl::EGLDisplay EGL15::EGL_NO_DISPLAY()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_DISPLAY",
			"Landroid/opengl/EGLDisplay;"
		);
	}
	inline android::opengl::EGLImage EGL15::EGL_NO_IMAGE()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_IMAGE",
			"Landroid/opengl/EGLImage;"
		);
	}
	inline jint EGL15::EGL_NO_RESET_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_NO_RESET_NOTIFICATION"
		);
	}
	inline android::opengl::EGLSurface EGL15::EGL_NO_SURFACE()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_SURFACE",
			"Landroid/opengl/EGLSurface;"
		);
	}
	inline android::opengl::EGLSync EGL15::EGL_NO_SYNC()
	{
		return getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_SYNC",
			"Landroid/opengl/EGLSync;"
		);
	}
	inline jint EGL15::EGL_OPENGL_ES3_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_OPENGL_ES3_BIT"
		);
	}
	inline jint EGL15::EGL_PLATFORM_ANDROID_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_PLATFORM_ANDROID_KHR"
		);
	}
	inline jint EGL15::EGL_SIGNALED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SIGNALED"
		);
	}
	inline jint EGL15::EGL_SYNC_CL_EVENT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CL_EVENT"
		);
	}
	inline jint EGL15::EGL_SYNC_CL_EVENT_COMPLETE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CL_EVENT_COMPLETE"
		);
	}
	inline jint EGL15::EGL_SYNC_CONDITION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CONDITION"
		);
	}
	inline jint EGL15::EGL_SYNC_FENCE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_FENCE"
		);
	}
	inline jint EGL15::EGL_SYNC_FLUSH_COMMANDS_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_FLUSH_COMMANDS_BIT"
		);
	}
	inline jint EGL15::EGL_SYNC_PRIOR_COMMANDS_COMPLETE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_PRIOR_COMMANDS_COMPLETE"
		);
	}
	inline jint EGL15::EGL_SYNC_STATUS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_STATUS"
		);
	}
	inline jint EGL15::EGL_SYNC_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_TYPE"
		);
	}
	inline jint EGL15::EGL_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_TIMEOUT_EXPIRED"
		);
	}
	inline jint EGL15::EGL_UNSIGNALED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_UNSIGNALED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint EGL15::eglClientWaitSync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2, jlong arg3)
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
	inline android::opengl::EGLImage EGL15::eglCreateImage(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1, jint arg2, jlong arg3, JLongArray arg4, jint arg5)
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
	inline android::opengl::EGLSurface EGL15::eglCreatePlatformPixmapSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, java::nio::Buffer arg2, JLongArray arg3, jint arg4)
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
	inline android::opengl::EGLSurface EGL15::eglCreatePlatformWindowSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, java::nio::Buffer arg2, JLongArray arg3, jint arg4)
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
	inline android::opengl::EGLSync EGL15::eglCreateSync(android::opengl::EGLDisplay arg0, jint arg1, JLongArray arg2, jint arg3)
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
	inline jboolean EGL15::eglDestroyImage(android::opengl::EGLDisplay arg0, android::opengl::EGLImage arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglDestroyImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLImage;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean EGL15::eglDestroySync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglDestroySync",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::opengl::EGLDisplay EGL15::eglGetPlatformDisplay(jint arg0, jlong arg1, JLongArray arg2, jint arg3)
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
	inline jboolean EGL15::eglGetSyncAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2, JLongArray arg3, jint arg4)
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
	inline jboolean EGL15::eglWaitSync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2)
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

// Base class headers

