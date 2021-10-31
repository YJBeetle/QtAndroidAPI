#include "./EGLConfig.hpp"
#include "./EGLContext.hpp"
#include "./EGLDisplay.hpp"
#include "./EGLSurface.hpp"
#include "./EGL14.hpp"

namespace android::opengl
{
	// Fields
	jint EGL14::EGL_ALPHA_MASK_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_ALPHA_MASK_SIZE"
		);
	}
	jint EGL14::EGL_ALPHA_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_ALPHA_SIZE"
		);
	}
	jint EGL14::EGL_BACK_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BACK_BUFFER"
		);
	}
	jint EGL14::EGL_BAD_ACCESS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ACCESS"
		);
	}
	jint EGL14::EGL_BAD_ALLOC()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ALLOC"
		);
	}
	jint EGL14::EGL_BAD_ATTRIBUTE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ATTRIBUTE"
		);
	}
	jint EGL14::EGL_BAD_CONFIG()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CONFIG"
		);
	}
	jint EGL14::EGL_BAD_CONTEXT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CONTEXT"
		);
	}
	jint EGL14::EGL_BAD_CURRENT_SURFACE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CURRENT_SURFACE"
		);
	}
	jint EGL14::EGL_BAD_DISPLAY()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_DISPLAY"
		);
	}
	jint EGL14::EGL_BAD_MATCH()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_MATCH"
		);
	}
	jint EGL14::EGL_BAD_NATIVE_PIXMAP()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_NATIVE_PIXMAP"
		);
	}
	jint EGL14::EGL_BAD_NATIVE_WINDOW()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_NATIVE_WINDOW"
		);
	}
	jint EGL14::EGL_BAD_PARAMETER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_PARAMETER"
		);
	}
	jint EGL14::EGL_BAD_SURFACE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_SURFACE"
		);
	}
	jint EGL14::EGL_BIND_TO_TEXTURE_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BIND_TO_TEXTURE_RGB"
		);
	}
	jint EGL14::EGL_BIND_TO_TEXTURE_RGBA()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BIND_TO_TEXTURE_RGBA"
		);
	}
	jint EGL14::EGL_BLUE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BLUE_SIZE"
		);
	}
	jint EGL14::EGL_BUFFER_DESTROYED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_DESTROYED"
		);
	}
	jint EGL14::EGL_BUFFER_PRESERVED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_PRESERVED"
		);
	}
	jint EGL14::EGL_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_SIZE"
		);
	}
	jint EGL14::EGL_CLIENT_APIS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CLIENT_APIS"
		);
	}
	jint EGL14::EGL_COLOR_BUFFER_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_COLOR_BUFFER_TYPE"
		);
	}
	jint EGL14::EGL_CONFIG_CAVEAT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFIG_CAVEAT"
		);
	}
	jint EGL14::EGL_CONFIG_ID()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFIG_ID"
		);
	}
	jint EGL14::EGL_CONFORMANT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFORMANT"
		);
	}
	jint EGL14::EGL_CONTEXT_CLIENT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_CLIENT_TYPE"
		);
	}
	jint EGL14::EGL_CONTEXT_CLIENT_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_CLIENT_VERSION"
		);
	}
	jint EGL14::EGL_CONTEXT_LOST()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_LOST"
		);
	}
	jint EGL14::EGL_CORE_NATIVE_ENGINE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CORE_NATIVE_ENGINE"
		);
	}
	jint EGL14::EGL_DEFAULT_DISPLAY()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DEFAULT_DISPLAY"
		);
	}
	jint EGL14::EGL_DEPTH_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DEPTH_SIZE"
		);
	}
	jint EGL14::EGL_DISPLAY_SCALING()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DISPLAY_SCALING"
		);
	}
	jint EGL14::EGL_DRAW()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DRAW"
		);
	}
	jint EGL14::EGL_EXTENSIONS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_EXTENSIONS"
		);
	}
	jint EGL14::EGL_FALSE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_FALSE"
		);
	}
	jint EGL14::EGL_GREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_GREEN_SIZE"
		);
	}
	jint EGL14::EGL_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_HEIGHT"
		);
	}
	jint EGL14::EGL_HORIZONTAL_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_HORIZONTAL_RESOLUTION"
		);
	}
	jint EGL14::EGL_LARGEST_PBUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LARGEST_PBUFFER"
		);
	}
	jint EGL14::EGL_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LEVEL"
		);
	}
	jint EGL14::EGL_LUMINANCE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LUMINANCE_BUFFER"
		);
	}
	jint EGL14::EGL_LUMINANCE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LUMINANCE_SIZE"
		);
	}
	jint EGL14::EGL_MATCH_NATIVE_PIXMAP()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MATCH_NATIVE_PIXMAP"
		);
	}
	jint EGL14::EGL_MAX_PBUFFER_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_HEIGHT"
		);
	}
	jint EGL14::EGL_MAX_PBUFFER_PIXELS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_PIXELS"
		);
	}
	jint EGL14::EGL_MAX_PBUFFER_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_WIDTH"
		);
	}
	jint EGL14::EGL_MAX_SWAP_INTERVAL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_SWAP_INTERVAL"
		);
	}
	jint EGL14::EGL_MIN_SWAP_INTERVAL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIN_SWAP_INTERVAL"
		);
	}
	jint EGL14::EGL_MIPMAP_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIPMAP_LEVEL"
		);
	}
	jint EGL14::EGL_MIPMAP_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIPMAP_TEXTURE"
		);
	}
	jint EGL14::EGL_MULTISAMPLE_RESOLVE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE"
		);
	}
	jint EGL14::EGL_MULTISAMPLE_RESOLVE_BOX()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_BOX"
		);
	}
	jint EGL14::EGL_MULTISAMPLE_RESOLVE_BOX_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_BOX_BIT"
		);
	}
	jint EGL14::EGL_MULTISAMPLE_RESOLVE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_DEFAULT"
		);
	}
	jint EGL14::EGL_NATIVE_RENDERABLE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_RENDERABLE"
		);
	}
	jint EGL14::EGL_NATIVE_VISUAL_ID()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_VISUAL_ID"
		);
	}
	jint EGL14::EGL_NATIVE_VISUAL_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_VISUAL_TYPE"
		);
	}
	jint EGL14::EGL_NONE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NONE"
		);
	}
	jint EGL14::EGL_NON_CONFORMANT_CONFIG()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NON_CONFORMANT_CONFIG"
		);
	}
	jint EGL14::EGL_NOT_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NOT_INITIALIZED"
		);
	}
	android::opengl::EGLContext EGL14::EGL_NO_CONTEXT()
	{
		return getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_CONTEXT",
			"Landroid/opengl/EGLContext;"
		);
	}
	android::opengl::EGLDisplay EGL14::EGL_NO_DISPLAY()
	{
		return getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_DISPLAY",
			"Landroid/opengl/EGLDisplay;"
		);
	}
	android::opengl::EGLSurface EGL14::EGL_NO_SURFACE()
	{
		return getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_SURFACE",
			"Landroid/opengl/EGLSurface;"
		);
	}
	jint EGL14::EGL_NO_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NO_TEXTURE"
		);
	}
	jint EGL14::EGL_OPENGL_API()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_API"
		);
	}
	jint EGL14::EGL_OPENGL_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_BIT"
		);
	}
	jint EGL14::EGL_OPENGL_ES2_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES2_BIT"
		);
	}
	jint EGL14::EGL_OPENGL_ES_API()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES_API"
		);
	}
	jint EGL14::EGL_OPENGL_ES_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES_BIT"
		);
	}
	jint EGL14::EGL_OPENVG_API()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_API"
		);
	}
	jint EGL14::EGL_OPENVG_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_BIT"
		);
	}
	jint EGL14::EGL_OPENVG_IMAGE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_IMAGE"
		);
	}
	jint EGL14::EGL_PBUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PBUFFER_BIT"
		);
	}
	jint EGL14::EGL_PIXEL_ASPECT_RATIO()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PIXEL_ASPECT_RATIO"
		);
	}
	jint EGL14::EGL_PIXMAP_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PIXMAP_BIT"
		);
	}
	jint EGL14::EGL_READ()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_READ"
		);
	}
	jint EGL14::EGL_RED_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RED_SIZE"
		);
	}
	jint EGL14::EGL_RENDERABLE_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RENDERABLE_TYPE"
		);
	}
	jint EGL14::EGL_RENDER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RENDER_BUFFER"
		);
	}
	jint EGL14::EGL_RGB_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RGB_BUFFER"
		);
	}
	jint EGL14::EGL_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SAMPLES"
		);
	}
	jint EGL14::EGL_SAMPLE_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SAMPLE_BUFFERS"
		);
	}
	jint EGL14::EGL_SINGLE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SINGLE_BUFFER"
		);
	}
	jint EGL14::EGL_SLOW_CONFIG()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SLOW_CONFIG"
		);
	}
	jint EGL14::EGL_STENCIL_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_STENCIL_SIZE"
		);
	}
	jint EGL14::EGL_SUCCESS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SUCCESS"
		);
	}
	jint EGL14::EGL_SURFACE_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SURFACE_TYPE"
		);
	}
	jint EGL14::EGL_SWAP_BEHAVIOR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SWAP_BEHAVIOR"
		);
	}
	jint EGL14::EGL_SWAP_BEHAVIOR_PRESERVED_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SWAP_BEHAVIOR_PRESERVED_BIT"
		);
	}
	jint EGL14::EGL_TEXTURE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_2D"
		);
	}
	jint EGL14::EGL_TEXTURE_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_FORMAT"
		);
	}
	jint EGL14::EGL_TEXTURE_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_RGB"
		);
	}
	jint EGL14::EGL_TEXTURE_RGBA()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_RGBA"
		);
	}
	jint EGL14::EGL_TEXTURE_TARGET()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_TARGET"
		);
	}
	jint EGL14::EGL_TRANSPARENT_BLUE_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_BLUE_VALUE"
		);
	}
	jint EGL14::EGL_TRANSPARENT_GREEN_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_GREEN_VALUE"
		);
	}
	jint EGL14::EGL_TRANSPARENT_RED_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_RED_VALUE"
		);
	}
	jint EGL14::EGL_TRANSPARENT_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_RGB"
		);
	}
	jint EGL14::EGL_TRANSPARENT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_TYPE"
		);
	}
	jint EGL14::EGL_TRUE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRUE"
		);
	}
	jint EGL14::EGL_VENDOR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VENDOR"
		);
	}
	jint EGL14::EGL_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VERSION"
		);
	}
	jint EGL14::EGL_VERTICAL_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VERTICAL_RESOLUTION"
		);
	}
	jint EGL14::EGL_VG_ALPHA_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT"
		);
	}
	jint EGL14::EGL_VG_ALPHA_FORMAT_NONPRE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_NONPRE"
		);
	}
	jint EGL14::EGL_VG_ALPHA_FORMAT_PRE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_PRE"
		);
	}
	jint EGL14::EGL_VG_ALPHA_FORMAT_PRE_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_PRE_BIT"
		);
	}
	jint EGL14::EGL_VG_COLORSPACE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE"
		);
	}
	jint EGL14::EGL_VG_COLORSPACE_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_LINEAR"
		);
	}
	jint EGL14::EGL_VG_COLORSPACE_LINEAR_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_LINEAR_BIT"
		);
	}
	jint EGL14::EGL_VG_COLORSPACE_sRGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_sRGB"
		);
	}
	jint EGL14::EGL_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_WIDTH"
		);
	}
	jint EGL14::EGL_WINDOW_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_WINDOW_BIT"
		);
	}
	
	// QAndroidJniObject forward
	EGL14::EGL14(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EGL14::EGL14()
		: __JniBaseClass(
			"android.opengl.EGL14",
			"()V"
		) {}
	
	// Methods
	jboolean EGL14::eglBindAPI(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglBindAPI",
			"(I)Z",
			arg0
		);
	}
	jboolean EGL14::eglBindTexImage(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglBindTexImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean EGL14::eglChooseConfig(android::opengl::EGLDisplay arg0, jintArray arg1, jint arg2, jarray arg3, jint arg4, jint arg5, jintArray arg6, jint arg7)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglChooseConfig",
			"(Landroid/opengl/EGLDisplay;[II[Landroid/opengl/EGLConfig;II[II)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	jboolean EGL14::eglCopyBuffers(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglCopyBuffers",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::opengl::EGLContext EGL14::eglCreateContext(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, android::opengl::EGLContext arg2, jintArray arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreateContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Landroid/opengl/EGLContext;[II)Landroid/opengl/EGLContext;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		);
	}
	android::opengl::EGLSurface EGL14::eglCreatePbufferFromClientBuffer(android::opengl::EGLDisplay arg0, jint arg1, jint arg2, android::opengl::EGLConfig arg3, jintArray arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePbufferFromClientBuffer",
			"(Landroid/opengl/EGLDisplay;IILandroid/opengl/EGLConfig;[II)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	android::opengl::EGLSurface EGL14::eglCreatePbufferSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jintArray arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePbufferSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;[II)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	android::opengl::EGLSurface EGL14::eglCreatePixmapSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePixmapSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;I[II)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	android::opengl::EGLSurface EGL14::eglCreateWindowSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jobject arg2, jintArray arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreateWindowSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Ljava/lang/Object;[II)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL14::eglDestroyContext(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglDestroyContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean EGL14::eglDestroySurface(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglDestroySurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean EGL14::eglGetConfigAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglGetConfigAttrib",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;I[II)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL14::eglGetConfigs(android::opengl::EGLDisplay arg0, jarray arg1, jint arg2, jint arg3, jintArray arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglGetConfigs",
			"(Landroid/opengl/EGLDisplay;[Landroid/opengl/EGLConfig;II[II)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	android::opengl::EGLContext EGL14::eglGetCurrentContext()
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentContext",
			"()Landroid/opengl/EGLContext;"
		);
	}
	android::opengl::EGLDisplay EGL14::eglGetCurrentDisplay()
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentDisplay",
			"()Landroid/opengl/EGLDisplay;"
		);
	}
	android::opengl::EGLSurface EGL14::eglGetCurrentSurface(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentSurface",
			"(I)Landroid/opengl/EGLSurface;",
			arg0
		);
	}
	android::opengl::EGLDisplay EGL14::eglGetDisplay(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetDisplay",
			"(I)Landroid/opengl/EGLDisplay;",
			arg0
		);
	}
	jint EGL14::eglGetError()
	{
		return callStaticMethod<jint>(
			"android.opengl.EGL14",
			"eglGetError",
			"()I"
		);
	}
	jboolean EGL14::eglInitialize(android::opengl::EGLDisplay arg0, jintArray arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglInitialize",
			"(Landroid/opengl/EGLDisplay;[II[II)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL14::eglMakeCurrent(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, android::opengl::EGLSurface arg2, android::opengl::EGLContext arg3)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglMakeCurrent",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;Landroid/opengl/EGLSurface;Landroid/opengl/EGLContext;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	jint EGL14::eglQueryAPI()
	{
		return callStaticMethod<jint>(
			"android.opengl.EGL14",
			"eglQueryAPI",
			"()I"
		);
	}
	jboolean EGL14::eglQueryContext(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglQueryContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;I[II)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	jstring EGL14::eglQueryString(android::opengl::EGLDisplay arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglQueryString",
			"(Landroid/opengl/EGLDisplay;I)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	jboolean EGL14::eglQuerySurface(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2, jintArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglQuerySurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I[II)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	jboolean EGL14::eglReleaseTexImage(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglReleaseTexImage",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean EGL14::eglReleaseThread()
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglReleaseThread",
			"()Z"
		);
	}
	jboolean EGL14::eglSurfaceAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglSurfaceAttrib",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;II)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	jboolean EGL14::eglSwapBuffers(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglSwapBuffers",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean EGL14::eglSwapInterval(android::opengl::EGLDisplay arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglSwapInterval",
			"(Landroid/opengl/EGLDisplay;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean EGL14::eglTerminate(android::opengl::EGLDisplay arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglTerminate",
			"(Landroid/opengl/EGLDisplay;)Z",
			arg0.object()
		);
	}
	jboolean EGL14::eglWaitClient()
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitClient",
			"()Z"
		);
	}
	jboolean EGL14::eglWaitGL()
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitGL",
			"()Z"
		);
	}
	jboolean EGL14::eglWaitNative(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitNative",
			"(I)Z",
			arg0
		);
	}
} // namespace android::opengl

