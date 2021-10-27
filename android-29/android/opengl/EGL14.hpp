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
	class EGLSurface;
}

namespace __jni_impl::android::opengl
{
	class EGL14 : public __JniBaseClass
	{
	public:
		// Fields
		static jint EGL_ALPHA_MASK_SIZE();
		static jint EGL_ALPHA_SIZE();
		static jint EGL_BACK_BUFFER();
		static jint EGL_BAD_ACCESS();
		static jint EGL_BAD_ALLOC();
		static jint EGL_BAD_ATTRIBUTE();
		static jint EGL_BAD_CONFIG();
		static jint EGL_BAD_CONTEXT();
		static jint EGL_BAD_CURRENT_SURFACE();
		static jint EGL_BAD_DISPLAY();
		static jint EGL_BAD_MATCH();
		static jint EGL_BAD_NATIVE_PIXMAP();
		static jint EGL_BAD_NATIVE_WINDOW();
		static jint EGL_BAD_PARAMETER();
		static jint EGL_BAD_SURFACE();
		static jint EGL_BIND_TO_TEXTURE_RGB();
		static jint EGL_BIND_TO_TEXTURE_RGBA();
		static jint EGL_BLUE_SIZE();
		static jint EGL_BUFFER_DESTROYED();
		static jint EGL_BUFFER_PRESERVED();
		static jint EGL_BUFFER_SIZE();
		static jint EGL_CLIENT_APIS();
		static jint EGL_COLOR_BUFFER_TYPE();
		static jint EGL_CONFIG_CAVEAT();
		static jint EGL_CONFIG_ID();
		static jint EGL_CONFORMANT();
		static jint EGL_CONTEXT_CLIENT_TYPE();
		static jint EGL_CONTEXT_CLIENT_VERSION();
		static jint EGL_CONTEXT_LOST();
		static jint EGL_CORE_NATIVE_ENGINE();
		static jint EGL_DEFAULT_DISPLAY();
		static jint EGL_DEPTH_SIZE();
		static jint EGL_DISPLAY_SCALING();
		static jint EGL_DRAW();
		static jint EGL_EXTENSIONS();
		static jint EGL_FALSE();
		static jint EGL_GREEN_SIZE();
		static jint EGL_HEIGHT();
		static jint EGL_HORIZONTAL_RESOLUTION();
		static jint EGL_LARGEST_PBUFFER();
		static jint EGL_LEVEL();
		static jint EGL_LUMINANCE_BUFFER();
		static jint EGL_LUMINANCE_SIZE();
		static jint EGL_MATCH_NATIVE_PIXMAP();
		static jint EGL_MAX_PBUFFER_HEIGHT();
		static jint EGL_MAX_PBUFFER_PIXELS();
		static jint EGL_MAX_PBUFFER_WIDTH();
		static jint EGL_MAX_SWAP_INTERVAL();
		static jint EGL_MIN_SWAP_INTERVAL();
		static jint EGL_MIPMAP_LEVEL();
		static jint EGL_MIPMAP_TEXTURE();
		static jint EGL_MULTISAMPLE_RESOLVE();
		static jint EGL_MULTISAMPLE_RESOLVE_BOX();
		static jint EGL_MULTISAMPLE_RESOLVE_BOX_BIT();
		static jint EGL_MULTISAMPLE_RESOLVE_DEFAULT();
		static jint EGL_NATIVE_RENDERABLE();
		static jint EGL_NATIVE_VISUAL_ID();
		static jint EGL_NATIVE_VISUAL_TYPE();
		static jint EGL_NONE();
		static jint EGL_NON_CONFORMANT_CONFIG();
		static jint EGL_NOT_INITIALIZED();
		static QAndroidJniObject EGL_NO_CONTEXT();
		static QAndroidJniObject EGL_NO_DISPLAY();
		static QAndroidJniObject EGL_NO_SURFACE();
		static jint EGL_NO_TEXTURE();
		static jint EGL_OPENGL_API();
		static jint EGL_OPENGL_BIT();
		static jint EGL_OPENGL_ES2_BIT();
		static jint EGL_OPENGL_ES_API();
		static jint EGL_OPENGL_ES_BIT();
		static jint EGL_OPENVG_API();
		static jint EGL_OPENVG_BIT();
		static jint EGL_OPENVG_IMAGE();
		static jint EGL_PBUFFER_BIT();
		static jint EGL_PIXEL_ASPECT_RATIO();
		static jint EGL_PIXMAP_BIT();
		static jint EGL_READ();
		static jint EGL_RED_SIZE();
		static jint EGL_RENDERABLE_TYPE();
		static jint EGL_RENDER_BUFFER();
		static jint EGL_RGB_BUFFER();
		static jint EGL_SAMPLES();
		static jint EGL_SAMPLE_BUFFERS();
		static jint EGL_SINGLE_BUFFER();
		static jint EGL_SLOW_CONFIG();
		static jint EGL_STENCIL_SIZE();
		static jint EGL_SUCCESS();
		static jint EGL_SURFACE_TYPE();
		static jint EGL_SWAP_BEHAVIOR();
		static jint EGL_SWAP_BEHAVIOR_PRESERVED_BIT();
		static jint EGL_TEXTURE_2D();
		static jint EGL_TEXTURE_FORMAT();
		static jint EGL_TEXTURE_RGB();
		static jint EGL_TEXTURE_RGBA();
		static jint EGL_TEXTURE_TARGET();
		static jint EGL_TRANSPARENT_BLUE_VALUE();
		static jint EGL_TRANSPARENT_GREEN_VALUE();
		static jint EGL_TRANSPARENT_RED_VALUE();
		static jint EGL_TRANSPARENT_RGB();
		static jint EGL_TRANSPARENT_TYPE();
		static jint EGL_TRUE();
		static jint EGL_VENDOR();
		static jint EGL_VERSION();
		static jint EGL_VERTICAL_RESOLUTION();
		static jint EGL_VG_ALPHA_FORMAT();
		static jint EGL_VG_ALPHA_FORMAT_NONPRE();
		static jint EGL_VG_ALPHA_FORMAT_PRE();
		static jint EGL_VG_ALPHA_FORMAT_PRE_BIT();
		static jint EGL_VG_COLORSPACE();
		static jint EGL_VG_COLORSPACE_LINEAR();
		static jint EGL_VG_COLORSPACE_LINEAR_BIT();
		static jint EGL_VG_COLORSPACE_sRGB();
		static jint EGL_WIDTH();
		static jint EGL_WINDOW_BIT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean eglBindAPI(jint arg0);
		static jboolean eglBindTexImage(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2);
		static jboolean eglChooseConfig(__jni_impl::android::opengl::EGLDisplay arg0, jintArray arg1, jint arg2, jarray arg3, jint arg4, jint arg5, jintArray arg6, jint arg7);
		static jboolean eglCopyBuffers(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2);
		static QAndroidJniObject eglCreateContext(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, __jni_impl::android::opengl::EGLContext arg2, jintArray arg3, jint arg4);
		static QAndroidJniObject eglCreatePbufferFromClientBuffer(__jni_impl::android::opengl::EGLDisplay arg0, jint arg1, jint arg2, __jni_impl::android::opengl::EGLConfig arg3, jintArray arg4, jint arg5);
		static QAndroidJniObject eglCreatePbufferSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, jintArray arg2, jint arg3);
		static QAndroidJniObject eglCreatePixmapSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, jint arg2, jintArray arg3, jint arg4);
		static QAndroidJniObject eglCreateWindowSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, jobject arg2, jintArray arg3, jint arg4);
		static jboolean eglDestroyContext(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLContext arg1);
		static jboolean eglDestroySurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1);
		static jboolean eglGetConfigAttrib(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, jint arg2, jintArray arg3, jint arg4);
		static jboolean eglGetConfigs(__jni_impl::android::opengl::EGLDisplay arg0, jarray arg1, jint arg2, jint arg3, jintArray arg4, jint arg5);
		static QAndroidJniObject eglGetCurrentContext();
		static QAndroidJniObject eglGetCurrentDisplay();
		static QAndroidJniObject eglGetCurrentSurface(jint arg0);
		static QAndroidJniObject eglGetDisplay(jint arg0);
		static jint eglGetError();
		static jboolean eglInitialize(__jni_impl::android::opengl::EGLDisplay arg0, jintArray arg1, jint arg2, jintArray arg3, jint arg4);
		static jboolean eglMakeCurrent(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, __jni_impl::android::opengl::EGLSurface arg2, __jni_impl::android::opengl::EGLContext arg3);
		static jint eglQueryAPI();
		static jboolean eglQueryContext(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLContext arg1, jint arg2, jintArray arg3, jint arg4);
		static jstring eglQueryString(__jni_impl::android::opengl::EGLDisplay arg0, jint arg1);
		static jboolean eglQuerySurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2, jintArray arg3, jint arg4);
		static jboolean eglReleaseTexImage(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2);
		static jboolean eglReleaseThread();
		static jboolean eglSurfaceAttrib(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2, jint arg3);
		static jboolean eglSwapBuffers(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1);
		static jboolean eglSwapInterval(__jni_impl::android::opengl::EGLDisplay arg0, jint arg1);
		static jboolean eglTerminate(__jni_impl::android::opengl::EGLDisplay arg0);
		static jboolean eglWaitClient();
		static jboolean eglWaitGL();
		static jboolean eglWaitNative(jint arg0);
	};
} // namespace __jni_impl::android::opengl

#include "./EGLConfig.hpp"
#include "./EGLContext.hpp"
#include "./EGLDisplay.hpp"
#include "./EGLSurface.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint EGL14::EGL_ALPHA_MASK_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_ALPHA_MASK_SIZE"
		);
	}
	jint EGL14::EGL_ALPHA_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_ALPHA_SIZE"
		);
	}
	jint EGL14::EGL_BACK_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BACK_BUFFER"
		);
	}
	jint EGL14::EGL_BAD_ACCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ACCESS"
		);
	}
	jint EGL14::EGL_BAD_ALLOC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ALLOC"
		);
	}
	jint EGL14::EGL_BAD_ATTRIBUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ATTRIBUTE"
		);
	}
	jint EGL14::EGL_BAD_CONFIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CONFIG"
		);
	}
	jint EGL14::EGL_BAD_CONTEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CONTEXT"
		);
	}
	jint EGL14::EGL_BAD_CURRENT_SURFACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CURRENT_SURFACE"
		);
	}
	jint EGL14::EGL_BAD_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_DISPLAY"
		);
	}
	jint EGL14::EGL_BAD_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_MATCH"
		);
	}
	jint EGL14::EGL_BAD_NATIVE_PIXMAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_NATIVE_PIXMAP"
		);
	}
	jint EGL14::EGL_BAD_NATIVE_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_NATIVE_WINDOW"
		);
	}
	jint EGL14::EGL_BAD_PARAMETER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_PARAMETER"
		);
	}
	jint EGL14::EGL_BAD_SURFACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_SURFACE"
		);
	}
	jint EGL14::EGL_BIND_TO_TEXTURE_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BIND_TO_TEXTURE_RGB"
		);
	}
	jint EGL14::EGL_BIND_TO_TEXTURE_RGBA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BIND_TO_TEXTURE_RGBA"
		);
	}
	jint EGL14::EGL_BLUE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BLUE_SIZE"
		);
	}
	jint EGL14::EGL_BUFFER_DESTROYED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_DESTROYED"
		);
	}
	jint EGL14::EGL_BUFFER_PRESERVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_PRESERVED"
		);
	}
	jint EGL14::EGL_BUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_SIZE"
		);
	}
	jint EGL14::EGL_CLIENT_APIS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CLIENT_APIS"
		);
	}
	jint EGL14::EGL_COLOR_BUFFER_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_COLOR_BUFFER_TYPE"
		);
	}
	jint EGL14::EGL_CONFIG_CAVEAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFIG_CAVEAT"
		);
	}
	jint EGL14::EGL_CONFIG_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFIG_ID"
		);
	}
	jint EGL14::EGL_CONFORMANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFORMANT"
		);
	}
	jint EGL14::EGL_CONTEXT_CLIENT_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_CLIENT_TYPE"
		);
	}
	jint EGL14::EGL_CONTEXT_CLIENT_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_CLIENT_VERSION"
		);
	}
	jint EGL14::EGL_CONTEXT_LOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_LOST"
		);
	}
	jint EGL14::EGL_CORE_NATIVE_ENGINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CORE_NATIVE_ENGINE"
		);
	}
	jint EGL14::EGL_DEFAULT_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DEFAULT_DISPLAY"
		);
	}
	jint EGL14::EGL_DEPTH_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DEPTH_SIZE"
		);
	}
	jint EGL14::EGL_DISPLAY_SCALING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DISPLAY_SCALING"
		);
	}
	jint EGL14::EGL_DRAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DRAW"
		);
	}
	jint EGL14::EGL_EXTENSIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_EXTENSIONS"
		);
	}
	jint EGL14::EGL_FALSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_FALSE"
		);
	}
	jint EGL14::EGL_GREEN_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_GREEN_SIZE"
		);
	}
	jint EGL14::EGL_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_HEIGHT"
		);
	}
	jint EGL14::EGL_HORIZONTAL_RESOLUTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_HORIZONTAL_RESOLUTION"
		);
	}
	jint EGL14::EGL_LARGEST_PBUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LARGEST_PBUFFER"
		);
	}
	jint EGL14::EGL_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LEVEL"
		);
	}
	jint EGL14::EGL_LUMINANCE_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LUMINANCE_BUFFER"
		);
	}
	jint EGL14::EGL_LUMINANCE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LUMINANCE_SIZE"
		);
	}
	jint EGL14::EGL_MATCH_NATIVE_PIXMAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MATCH_NATIVE_PIXMAP"
		);
	}
	jint EGL14::EGL_MAX_PBUFFER_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_HEIGHT"
		);
	}
	jint EGL14::EGL_MAX_PBUFFER_PIXELS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_PIXELS"
		);
	}
	jint EGL14::EGL_MAX_PBUFFER_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_WIDTH"
		);
	}
	jint EGL14::EGL_MAX_SWAP_INTERVAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_SWAP_INTERVAL"
		);
	}
	jint EGL14::EGL_MIN_SWAP_INTERVAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIN_SWAP_INTERVAL"
		);
	}
	jint EGL14::EGL_MIPMAP_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIPMAP_LEVEL"
		);
	}
	jint EGL14::EGL_MIPMAP_TEXTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIPMAP_TEXTURE"
		);
	}
	jint EGL14::EGL_MULTISAMPLE_RESOLVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE"
		);
	}
	jint EGL14::EGL_MULTISAMPLE_RESOLVE_BOX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_BOX"
		);
	}
	jint EGL14::EGL_MULTISAMPLE_RESOLVE_BOX_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_BOX_BIT"
		);
	}
	jint EGL14::EGL_MULTISAMPLE_RESOLVE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_DEFAULT"
		);
	}
	jint EGL14::EGL_NATIVE_RENDERABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_RENDERABLE"
		);
	}
	jint EGL14::EGL_NATIVE_VISUAL_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_VISUAL_ID"
		);
	}
	jint EGL14::EGL_NATIVE_VISUAL_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_VISUAL_TYPE"
		);
	}
	jint EGL14::EGL_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NONE"
		);
	}
	jint EGL14::EGL_NON_CONFORMANT_CONFIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NON_CONFORMANT_CONFIG"
		);
	}
	jint EGL14::EGL_NOT_INITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NOT_INITIALIZED"
		);
	}
	QAndroidJniObject EGL14::EGL_NO_CONTEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_CONTEXT",
			"Landroid/opengl/EGLContext;"
		);
	}
	QAndroidJniObject EGL14::EGL_NO_DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_DISPLAY",
			"Landroid/opengl/EGLDisplay;"
		);
	}
	QAndroidJniObject EGL14::EGL_NO_SURFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_SURFACE",
			"Landroid/opengl/EGLSurface;"
		);
	}
	jint EGL14::EGL_NO_TEXTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NO_TEXTURE"
		);
	}
	jint EGL14::EGL_OPENGL_API()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_API"
		);
	}
	jint EGL14::EGL_OPENGL_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_BIT"
		);
	}
	jint EGL14::EGL_OPENGL_ES2_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES2_BIT"
		);
	}
	jint EGL14::EGL_OPENGL_ES_API()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES_API"
		);
	}
	jint EGL14::EGL_OPENGL_ES_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES_BIT"
		);
	}
	jint EGL14::EGL_OPENVG_API()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_API"
		);
	}
	jint EGL14::EGL_OPENVG_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_BIT"
		);
	}
	jint EGL14::EGL_OPENVG_IMAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_IMAGE"
		);
	}
	jint EGL14::EGL_PBUFFER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PBUFFER_BIT"
		);
	}
	jint EGL14::EGL_PIXEL_ASPECT_RATIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PIXEL_ASPECT_RATIO"
		);
	}
	jint EGL14::EGL_PIXMAP_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PIXMAP_BIT"
		);
	}
	jint EGL14::EGL_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_READ"
		);
	}
	jint EGL14::EGL_RED_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RED_SIZE"
		);
	}
	jint EGL14::EGL_RENDERABLE_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RENDERABLE_TYPE"
		);
	}
	jint EGL14::EGL_RENDER_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RENDER_BUFFER"
		);
	}
	jint EGL14::EGL_RGB_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RGB_BUFFER"
		);
	}
	jint EGL14::EGL_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SAMPLES"
		);
	}
	jint EGL14::EGL_SAMPLE_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SAMPLE_BUFFERS"
		);
	}
	jint EGL14::EGL_SINGLE_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SINGLE_BUFFER"
		);
	}
	jint EGL14::EGL_SLOW_CONFIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SLOW_CONFIG"
		);
	}
	jint EGL14::EGL_STENCIL_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_STENCIL_SIZE"
		);
	}
	jint EGL14::EGL_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SUCCESS"
		);
	}
	jint EGL14::EGL_SURFACE_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SURFACE_TYPE"
		);
	}
	jint EGL14::EGL_SWAP_BEHAVIOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SWAP_BEHAVIOR"
		);
	}
	jint EGL14::EGL_SWAP_BEHAVIOR_PRESERVED_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SWAP_BEHAVIOR_PRESERVED_BIT"
		);
	}
	jint EGL14::EGL_TEXTURE_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_2D"
		);
	}
	jint EGL14::EGL_TEXTURE_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_FORMAT"
		);
	}
	jint EGL14::EGL_TEXTURE_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_RGB"
		);
	}
	jint EGL14::EGL_TEXTURE_RGBA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_RGBA"
		);
	}
	jint EGL14::EGL_TEXTURE_TARGET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_TARGET"
		);
	}
	jint EGL14::EGL_TRANSPARENT_BLUE_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_BLUE_VALUE"
		);
	}
	jint EGL14::EGL_TRANSPARENT_GREEN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_GREEN_VALUE"
		);
	}
	jint EGL14::EGL_TRANSPARENT_RED_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_RED_VALUE"
		);
	}
	jint EGL14::EGL_TRANSPARENT_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_RGB"
		);
	}
	jint EGL14::EGL_TRANSPARENT_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_TYPE"
		);
	}
	jint EGL14::EGL_TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRUE"
		);
	}
	jint EGL14::EGL_VENDOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VENDOR"
		);
	}
	jint EGL14::EGL_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VERSION"
		);
	}
	jint EGL14::EGL_VERTICAL_RESOLUTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VERTICAL_RESOLUTION"
		);
	}
	jint EGL14::EGL_VG_ALPHA_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT"
		);
	}
	jint EGL14::EGL_VG_ALPHA_FORMAT_NONPRE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_NONPRE"
		);
	}
	jint EGL14::EGL_VG_ALPHA_FORMAT_PRE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_PRE"
		);
	}
	jint EGL14::EGL_VG_ALPHA_FORMAT_PRE_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_PRE_BIT"
		);
	}
	jint EGL14::EGL_VG_COLORSPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE"
		);
	}
	jint EGL14::EGL_VG_COLORSPACE_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_LINEAR"
		);
	}
	jint EGL14::EGL_VG_COLORSPACE_LINEAR_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_LINEAR_BIT"
		);
	}
	jint EGL14::EGL_VG_COLORSPACE_sRGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_sRGB"
		);
	}
	jint EGL14::EGL_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_WIDTH"
		);
	}
	jint EGL14::EGL_WINDOW_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_WINDOW_BIT"
		);
	}
	
	// Constructors
	void EGL14::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGL14",
			"()V"
		);
	}
	
	// Methods
	jboolean EGL14::eglBindAPI(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglBindAPI",
			"(I)Z",
			arg0
		);
	}
	jboolean EGL14::eglBindTexImage(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglBindTexImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean EGL14::eglChooseConfig(__jni_impl::android::opengl::EGLDisplay arg0, jintArray arg1, jint arg2, jarray arg3, jint arg4, jint arg5, jintArray arg6, jint arg7)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglChooseConfig",
			"(Landroid/opengl/EGLDisplay;[II[Landroid/opengl/EGLConfig;II[II)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	jboolean EGL14::eglCopyBuffers(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglCopyBuffers",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject EGL14::eglCreateContext(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, __jni_impl::android::opengl::EGLContext arg2, jintArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreateContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Landroid/opengl/EGLContext;[II)Landroid/opengl/EGLContext;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	QAndroidJniObject EGL14::eglCreatePbufferFromClientBuffer(__jni_impl::android::opengl::EGLDisplay arg0, jint arg1, jint arg2, __jni_impl::android::opengl::EGLConfig arg3, jintArray arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePbufferFromClientBuffer",
			"(Landroid/opengl/EGLDisplay;IILandroid/opengl/EGLConfig;[II)Landroid/opengl/EGLSurface;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		);
	}
	QAndroidJniObject EGL14::eglCreatePbufferSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, jintArray arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePbufferSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;[II)Landroid/opengl/EGLSurface;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject EGL14::eglCreatePixmapSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePixmapSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;I[II)Landroid/opengl/EGLSurface;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject EGL14::eglCreateWindowSurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, jobject arg2, jintArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreateWindowSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Ljava/lang/Object;[II)Landroid/opengl/EGLSurface;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL14::eglDestroyContext(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLContext arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglDestroyContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean EGL14::eglDestroySurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglDestroySurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean EGL14::eglGetConfigAttrib(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLConfig arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglGetConfigAttrib",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;I[II)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL14::eglGetConfigs(__jni_impl::android::opengl::EGLDisplay arg0, jarray arg1, jint arg2, jint arg3, jintArray arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglGetConfigs",
			"(Landroid/opengl/EGLDisplay;[Landroid/opengl/EGLConfig;II[II)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject EGL14::eglGetCurrentContext()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentContext",
			"()Landroid/opengl/EGLContext;"
		);
	}
	QAndroidJniObject EGL14::eglGetCurrentDisplay()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentDisplay",
			"()Landroid/opengl/EGLDisplay;"
		);
	}
	QAndroidJniObject EGL14::eglGetCurrentSurface(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentSurface",
			"(I)Landroid/opengl/EGLSurface;",
			arg0
		);
	}
	QAndroidJniObject EGL14::eglGetDisplay(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetDisplay",
			"(I)Landroid/opengl/EGLDisplay;",
			arg0
		);
	}
	jint EGL14::eglGetError()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.EGL14",
			"eglGetError",
			"()I"
		);
	}
	jboolean EGL14::eglInitialize(__jni_impl::android::opengl::EGLDisplay arg0, jintArray arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglInitialize",
			"(Landroid/opengl/EGLDisplay;[II[II)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL14::eglMakeCurrent(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, __jni_impl::android::opengl::EGLSurface arg2, __jni_impl::android::opengl::EGLContext arg3)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglMakeCurrent",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;Landroid/opengl/EGLSurface;Landroid/opengl/EGLContext;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jint EGL14::eglQueryAPI()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.EGL14",
			"eglQueryAPI",
			"()I"
		);
	}
	jboolean EGL14::eglQueryContext(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLContext arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglQueryContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;I[II)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jstring EGL14::eglQueryString(__jni_impl::android::opengl::EGLDisplay arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglQueryString",
			"(Landroid/opengl/EGLDisplay;I)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jboolean EGL14::eglQuerySurface(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglQuerySurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I[II)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL14::eglReleaseTexImage(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglReleaseTexImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean EGL14::eglReleaseThread()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglReleaseThread",
			"()Z"
		);
	}
	jboolean EGL14::eglSurfaceAttrib(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglSurfaceAttrib",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;II)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jboolean EGL14::eglSwapBuffers(__jni_impl::android::opengl::EGLDisplay arg0, __jni_impl::android::opengl::EGLSurface arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglSwapBuffers",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean EGL14::eglSwapInterval(__jni_impl::android::opengl::EGLDisplay arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglSwapInterval",
			"(Landroid/opengl/EGLDisplay;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean EGL14::eglTerminate(__jni_impl::android::opengl::EGLDisplay arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglTerminate",
			"(Landroid/opengl/EGLDisplay;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean EGL14::eglWaitClient()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitClient",
			"()Z"
		);
	}
	jboolean EGL14::eglWaitGL()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitGL",
			"()Z"
		);
	}
	jboolean EGL14::eglWaitNative(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitNative",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGL14 : public __jni_impl::android::opengl::EGL14
	{
	public:
		EGL14(QAndroidJniObject obj) { __thiz = obj; }
		EGL14()
		{
			__constructor();
		}
	};
} // namespace android::opengl

