#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::opengl
{
	class EGLConfig;
}
namespace __jni_impl::android::opengl
{
	class EGLContext;
}
namespace __jni_impl::android::opengl
{
	class EGLDisplay;
}
namespace __jni_impl::android::opengl
{
	class EGLImage;
}
namespace __jni_impl::android::opengl
{
	class EGLSurface;
}
namespace __jni_impl::android::opengl
{
	class EGLSync;
}
namespace __jni_impl::java::nio
{
	class Buffer;
}

namespace __jni_impl::android::opengl
{
	class EGL15 : public __JniBaseClass
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
		static QAndroidJniObject EGL_NO_CONTEXT();
		static QAndroidJniObject EGL_NO_DISPLAY();
		static QAndroidJniObject EGL_NO_IMAGE();
		static jint EGL_NO_RESET_NOTIFICATION();
		static QAndroidJniObject EGL_NO_SURFACE();
		static QAndroidJniObject EGL_NO_SYNC();
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint eglClientWaitSync(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSync arg1, jint arg2, jlong arg3);
		static QAndroidJniObject eglCreateImage(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLContext arg1, jint arg2, jlong arg3, jlongArray arg4, jint arg5);
		static QAndroidJniObject eglCreatePlatformPixmapSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, __jni_impl::java::nio::Buffer arg2, jlongArray arg3, jint arg4);
		static QAndroidJniObject eglCreatePlatformWindowSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, __jni_impl::java::nio::Buffer arg2, jlongArray arg3, jint arg4);
		static QAndroidJniObject eglCreateSync(__jni_impl::android::opengl::EGLDisplay arg0, jint arg1, jlongArray arg2, jint arg3);
		static jboolean eglDestroyImage(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLImage arg1);
		static jboolean eglDestroySync(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSync arg1);
		static QAndroidJniObject eglGetPlatformDisplay(jint arg0, jlong arg1, jlongArray arg2, jint arg3);
		static jboolean eglGetSyncAttrib(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSync arg1, jint arg2, jlongArray arg3, jint arg4);
		static jboolean eglWaitSync(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSync arg1, jint arg2);
	};
} // namespace __jni_impl::android::opengl

#include "EGLConfig.hpp"
#include "EGLContext.hpp"
#include "EGLDisplay.hpp"
#include "EGLImage.hpp"
#include "EGLSurface.hpp"
#include "EGLSync.hpp"
#include "../../java/nio/Buffer.hpp"

namespace __jni_impl::android::opengl
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
	
	// Constructors
	void EGL15::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGL15",
			"(V)V");
	}
	
	// Methods
	jint EGL15::eglClientWaitSync(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSync arg1, jint arg2, jlong arg3)
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
	QAndroidJniObject EGL15::eglCreateImage(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLContext arg1, jint arg2, jlong arg3, jlongArray arg4, jint arg5)
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
	QAndroidJniObject EGL15::eglCreatePlatformPixmapSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, __jni_impl::java::nio::Buffer arg2, jlongArray arg3, jint arg4)
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
	QAndroidJniObject EGL15::eglCreatePlatformWindowSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, __jni_impl::java::nio::Buffer arg2, jlongArray arg3, jint arg4)
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
	QAndroidJniObject EGL15::eglCreateSync(__jni_impl::android::opengl::EGLDisplay arg0, jint arg1, jlongArray arg2, jint arg3)
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
	jboolean EGL15::eglDestroyImage(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLImage arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL15",
			"eglDestroyImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLImage;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean EGL15::eglDestroySync(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSync arg1)
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
	jboolean EGL15::eglGetSyncAttrib(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSync arg1, jint arg2, jlongArray arg3, jint arg4)
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
	jboolean EGL15::eglWaitSync(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSync arg1, jint arg2)
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
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGL15 : public __jni_impl::android::opengl::EGL15
	{
	public:
		EGL15(QAndroidJniObject obj) { __thiz = obj; }
		EGL15()
		{
			__constructor();
		}
	};
} // namespace android::opengl

