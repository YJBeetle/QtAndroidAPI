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
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CL_EVENT_HANDLE"
		);
	}
	jint EGL15::EGL_CONDITION_SATISFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONDITION_SATISFIED"
		);
	}
	jint EGL15::EGL_CONTEXT_MAJOR_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_MAJOR_VERSION"
		);
	}
	jint EGL15::EGL_CONTEXT_MINOR_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_MINOR_VERSION"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_DEBUG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_DEBUG"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_PROFILE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_PROFILE_MASK"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY"
		);
	}
	jint EGL15::EGL_CONTEXT_OPENGL_ROBUST_ACCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_CONTEXT_OPENGL_ROBUST_ACCESS"
		);
	}
	jlong EGL15::EGL_FOREVER()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.opengl.EGL15",
			"EGL_FOREVER"
		);
	}
	jint EGL15::EGL_GL_COLORSPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE"
		);
	}
	jint EGL15::EGL_GL_COLORSPACE_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE_LINEAR"
		);
	}
	jint EGL15::EGL_GL_COLORSPACE_SRGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_COLORSPACE_SRGB"
		);
	}
	jint EGL15::EGL_GL_RENDERBUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_RENDERBUFFER"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_2D"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_3D"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_LEVEL"
		);
	}
	jint EGL15::EGL_GL_TEXTURE_ZOFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_GL_TEXTURE_ZOFFSET"
		);
	}
	jint EGL15::EGL_IMAGE_PRESERVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_IMAGE_PRESERVED"
		);
	}
	jint EGL15::EGL_LOSE_CONTEXT_ON_RESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_LOSE_CONTEXT_ON_RESET"
		);
	}
	QAndroidJniObject EGL15::EGL_NO_CONTEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_CONTEXT",
			"Landroid/opengl/EGLContext;"
		);
	}
	QAndroidJniObject EGL15::EGL_NO_DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_DISPLAY",
			"Landroid/opengl/EGLDisplay;"
		);
	}
	QAndroidJniObject EGL15::EGL_NO_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_IMAGE",
			"Landroid/opengl/EGLImage;"
		);
	}
	jint EGL15::EGL_NO_RESET_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_NO_RESET_NOTIFICATION"
		);
	}
	QAndroidJniObject EGL15::EGL_NO_SURFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_SURFACE",
			"Landroid/opengl/EGLSurface;"
		);
	}
	QAndroidJniObject EGL15::EGL_NO_SYNC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.opengl.EGL15",
			"EGL_NO_SYNC",
			"Landroid/opengl/EGLSync;"
		);
	}
	jint EGL15::EGL_OPENGL_ES3_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_OPENGL_ES3_BIT"
		);
	}
	jint EGL15::EGL_PLATFORM_ANDROID_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_PLATFORM_ANDROID_KHR"
		);
	}
	jint EGL15::EGL_SIGNALED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SIGNALED"
		);
	}
	jint EGL15::EGL_SYNC_CL_EVENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CL_EVENT"
		);
	}
	jint EGL15::EGL_SYNC_CL_EVENT_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CL_EVENT_COMPLETE"
		);
	}
	jint EGL15::EGL_SYNC_CONDITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_CONDITION"
		);
	}
	jint EGL15::EGL_SYNC_FENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_FENCE"
		);
	}
	jint EGL15::EGL_SYNC_FLUSH_COMMANDS_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_FLUSH_COMMANDS_BIT"
		);
	}
	jint EGL15::EGL_SYNC_PRIOR_COMMANDS_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_PRIOR_COMMANDS_COMPLETE"
		);
	}
	jint EGL15::EGL_SYNC_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_STATUS"
		);
	}
	jint EGL15::EGL_SYNC_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_SYNC_TYPE"
		);
	}
	jint EGL15::EGL_TIMEOUT_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_TIMEOUT_EXPIRED"
		);
	}
	jint EGL15::EGL_UNSIGNALED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL15",
			"EGL_UNSIGNALED"
		);
	}
	
	EGL15::EGL15(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint EGL15::eglClientWaitSync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2, jlong arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.EGL15",
			"eglClientWaitSync",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;IJ)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject EGL15::eglCreateImage(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1, jint arg2, jlong arg3, jlongArray arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglCreateImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;IJ[JI)Landroid/opengl/EGLImage;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject EGL15::eglCreatePlatformPixmapSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, java::nio::Buffer arg2, jlongArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglCreatePlatformPixmapSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Ljava/nio/Buffer;[JI)Landroid/opengl/EGLSurface;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	QAndroidJniObject EGL15::eglCreatePlatformWindowSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, java::nio::Buffer arg2, jlongArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglCreatePlatformWindowSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Ljava/nio/Buffer;[JI)Landroid/opengl/EGLSurface;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	QAndroidJniObject EGL15::eglCreateSync(android::opengl::EGLDisplay arg0, jint arg1, jlongArray arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglCreateSync",
			"(Landroid/opengl/EGLDisplay;I[JI)Landroid/opengl/EGLSync;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean EGL15::eglDestroyImage(android::opengl::EGLDisplay arg0, android::opengl::EGLImage arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglDestroyImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLImage;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean EGL15::eglDestroySync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglDestroySync",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject EGL15::eglGetPlatformDisplay(jint arg0, jlong arg1, jlongArray arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL15",
			"eglGetPlatformDisplay",
			"(IJ[JI)Landroid/opengl/EGLDisplay;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean EGL15::eglGetSyncAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2, jlongArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglGetSyncAttrib",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;I[JI)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL15::eglWaitSync(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglWaitSync",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::opengl

