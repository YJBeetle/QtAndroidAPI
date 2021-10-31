#pragma once

#include "../../__JniBaseClass.hpp"

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
	class EGLSurface;
}

namespace android::opengl
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
		static android::opengl::EGLContext EGL_NO_CONTEXT();
		static android::opengl::EGLDisplay EGL_NO_DISPLAY();
		static android::opengl::EGLSurface EGL_NO_SURFACE();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit EGL14(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EGL14(QJniObject obj);
		
		// Constructors
		EGL14();
		
		// Methods
		static jboolean eglBindAPI(jint arg0);
		static jboolean eglBindTexImage(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2);
		static jboolean eglChooseConfig(android::opengl::EGLDisplay arg0, jintArray arg1, jint arg2, jarray arg3, jint arg4, jint arg5, jintArray arg6, jint arg7);
		static jboolean eglCopyBuffers(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2);
		static android::opengl::EGLContext eglCreateContext(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, android::opengl::EGLContext arg2, jintArray arg3, jint arg4);
		static android::opengl::EGLSurface eglCreatePbufferFromClientBuffer(android::opengl::EGLDisplay arg0, jint arg1, jint arg2, android::opengl::EGLConfig arg3, jintArray arg4, jint arg5);
		static android::opengl::EGLSurface eglCreatePbufferSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jintArray arg2, jint arg3);
		static android::opengl::EGLSurface eglCreatePixmapSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jint arg2, jintArray arg3, jint arg4);
		static android::opengl::EGLSurface eglCreateWindowSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jobject arg2, jintArray arg3, jint arg4);
		static jboolean eglDestroyContext(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1);
		static jboolean eglDestroySurface(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1);
		static jboolean eglGetConfigAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jint arg2, jintArray arg3, jint arg4);
		static jboolean eglGetConfigs(android::opengl::EGLDisplay arg0, jarray arg1, jint arg2, jint arg3, jintArray arg4, jint arg5);
		static android::opengl::EGLContext eglGetCurrentContext();
		static android::opengl::EGLDisplay eglGetCurrentDisplay();
		static android::opengl::EGLSurface eglGetCurrentSurface(jint arg0);
		static android::opengl::EGLDisplay eglGetDisplay(jint arg0);
		static jint eglGetError();
		static jboolean eglInitialize(android::opengl::EGLDisplay arg0, jintArray arg1, jint arg2, jintArray arg3, jint arg4);
		static jboolean eglMakeCurrent(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, android::opengl::EGLSurface arg2, android::opengl::EGLContext arg3);
		static jint eglQueryAPI();
		static jboolean eglQueryContext(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1, jint arg2, jintArray arg3, jint arg4);
		static jstring eglQueryString(android::opengl::EGLDisplay arg0, jint arg1);
		static jboolean eglQuerySurface(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2, jintArray arg3, jint arg4);
		static jboolean eglReleaseTexImage(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2);
		static jboolean eglReleaseThread();
		static jboolean eglSurfaceAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2, jint arg3);
		static jboolean eglSwapBuffers(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1);
		static jboolean eglSwapInterval(android::opengl::EGLDisplay arg0, jint arg1);
		static jboolean eglTerminate(android::opengl::EGLDisplay arg0);
		static jboolean eglWaitClient();
		static jboolean eglWaitGL();
		static jboolean eglWaitNative(jint arg0);
	};
} // namespace android::opengl

