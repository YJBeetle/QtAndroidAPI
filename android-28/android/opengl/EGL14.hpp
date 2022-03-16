#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./EGLConfig.def.hpp"
#include "./EGLContext.def.hpp"
#include "./EGLDisplay.def.hpp"
#include "./EGLSurface.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./EGL14.def.hpp"

namespace android::opengl
{
	// Fields
	inline jint EGL14::EGL_ALPHA_MASK_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_ALPHA_MASK_SIZE"
		);
	}
	inline jint EGL14::EGL_ALPHA_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_ALPHA_SIZE"
		);
	}
	inline jint EGL14::EGL_BACK_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BACK_BUFFER"
		);
	}
	inline jint EGL14::EGL_BAD_ACCESS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ACCESS"
		);
	}
	inline jint EGL14::EGL_BAD_ALLOC()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ALLOC"
		);
	}
	inline jint EGL14::EGL_BAD_ATTRIBUTE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_ATTRIBUTE"
		);
	}
	inline jint EGL14::EGL_BAD_CONFIG()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CONFIG"
		);
	}
	inline jint EGL14::EGL_BAD_CONTEXT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CONTEXT"
		);
	}
	inline jint EGL14::EGL_BAD_CURRENT_SURFACE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_CURRENT_SURFACE"
		);
	}
	inline jint EGL14::EGL_BAD_DISPLAY()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_DISPLAY"
		);
	}
	inline jint EGL14::EGL_BAD_MATCH()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_MATCH"
		);
	}
	inline jint EGL14::EGL_BAD_NATIVE_PIXMAP()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_NATIVE_PIXMAP"
		);
	}
	inline jint EGL14::EGL_BAD_NATIVE_WINDOW()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_NATIVE_WINDOW"
		);
	}
	inline jint EGL14::EGL_BAD_PARAMETER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_PARAMETER"
		);
	}
	inline jint EGL14::EGL_BAD_SURFACE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BAD_SURFACE"
		);
	}
	inline jint EGL14::EGL_BIND_TO_TEXTURE_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BIND_TO_TEXTURE_RGB"
		);
	}
	inline jint EGL14::EGL_BIND_TO_TEXTURE_RGBA()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BIND_TO_TEXTURE_RGBA"
		);
	}
	inline jint EGL14::EGL_BLUE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BLUE_SIZE"
		);
	}
	inline jint EGL14::EGL_BUFFER_DESTROYED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_DESTROYED"
		);
	}
	inline jint EGL14::EGL_BUFFER_PRESERVED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_PRESERVED"
		);
	}
	inline jint EGL14::EGL_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_BUFFER_SIZE"
		);
	}
	inline jint EGL14::EGL_CLIENT_APIS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CLIENT_APIS"
		);
	}
	inline jint EGL14::EGL_COLOR_BUFFER_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_COLOR_BUFFER_TYPE"
		);
	}
	inline jint EGL14::EGL_CONFIG_CAVEAT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFIG_CAVEAT"
		);
	}
	inline jint EGL14::EGL_CONFIG_ID()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFIG_ID"
		);
	}
	inline jint EGL14::EGL_CONFORMANT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONFORMANT"
		);
	}
	inline jint EGL14::EGL_CONTEXT_CLIENT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_CLIENT_TYPE"
		);
	}
	inline jint EGL14::EGL_CONTEXT_CLIENT_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_CLIENT_VERSION"
		);
	}
	inline jint EGL14::EGL_CONTEXT_LOST()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CONTEXT_LOST"
		);
	}
	inline jint EGL14::EGL_CORE_NATIVE_ENGINE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_CORE_NATIVE_ENGINE"
		);
	}
	inline jint EGL14::EGL_DEFAULT_DISPLAY()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DEFAULT_DISPLAY"
		);
	}
	inline jint EGL14::EGL_DEPTH_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DEPTH_SIZE"
		);
	}
	inline jint EGL14::EGL_DISPLAY_SCALING()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DISPLAY_SCALING"
		);
	}
	inline jint EGL14::EGL_DRAW()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_DRAW"
		);
	}
	inline jint EGL14::EGL_EXTENSIONS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_EXTENSIONS"
		);
	}
	inline jint EGL14::EGL_FALSE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_FALSE"
		);
	}
	inline jint EGL14::EGL_GREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_GREEN_SIZE"
		);
	}
	inline jint EGL14::EGL_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_HEIGHT"
		);
	}
	inline jint EGL14::EGL_HORIZONTAL_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_HORIZONTAL_RESOLUTION"
		);
	}
	inline jint EGL14::EGL_LARGEST_PBUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LARGEST_PBUFFER"
		);
	}
	inline jint EGL14::EGL_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LEVEL"
		);
	}
	inline jint EGL14::EGL_LUMINANCE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LUMINANCE_BUFFER"
		);
	}
	inline jint EGL14::EGL_LUMINANCE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_LUMINANCE_SIZE"
		);
	}
	inline jint EGL14::EGL_MATCH_NATIVE_PIXMAP()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MATCH_NATIVE_PIXMAP"
		);
	}
	inline jint EGL14::EGL_MAX_PBUFFER_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_HEIGHT"
		);
	}
	inline jint EGL14::EGL_MAX_PBUFFER_PIXELS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_PIXELS"
		);
	}
	inline jint EGL14::EGL_MAX_PBUFFER_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_PBUFFER_WIDTH"
		);
	}
	inline jint EGL14::EGL_MAX_SWAP_INTERVAL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MAX_SWAP_INTERVAL"
		);
	}
	inline jint EGL14::EGL_MIN_SWAP_INTERVAL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIN_SWAP_INTERVAL"
		);
	}
	inline jint EGL14::EGL_MIPMAP_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIPMAP_LEVEL"
		);
	}
	inline jint EGL14::EGL_MIPMAP_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MIPMAP_TEXTURE"
		);
	}
	inline jint EGL14::EGL_MULTISAMPLE_RESOLVE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE"
		);
	}
	inline jint EGL14::EGL_MULTISAMPLE_RESOLVE_BOX()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_BOX"
		);
	}
	inline jint EGL14::EGL_MULTISAMPLE_RESOLVE_BOX_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_BOX_BIT"
		);
	}
	inline jint EGL14::EGL_MULTISAMPLE_RESOLVE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_MULTISAMPLE_RESOLVE_DEFAULT"
		);
	}
	inline jint EGL14::EGL_NATIVE_RENDERABLE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_RENDERABLE"
		);
	}
	inline jint EGL14::EGL_NATIVE_VISUAL_ID()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_VISUAL_ID"
		);
	}
	inline jint EGL14::EGL_NATIVE_VISUAL_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NATIVE_VISUAL_TYPE"
		);
	}
	inline jint EGL14::EGL_NONE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NONE"
		);
	}
	inline jint EGL14::EGL_NON_CONFORMANT_CONFIG()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NON_CONFORMANT_CONFIG"
		);
	}
	inline jint EGL14::EGL_NOT_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NOT_INITIALIZED"
		);
	}
	inline android::opengl::EGLContext EGL14::EGL_NO_CONTEXT()
	{
		return getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_CONTEXT",
			"Landroid/opengl/EGLContext;"
		);
	}
	inline android::opengl::EGLDisplay EGL14::EGL_NO_DISPLAY()
	{
		return getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_DISPLAY",
			"Landroid/opengl/EGLDisplay;"
		);
	}
	inline android::opengl::EGLSurface EGL14::EGL_NO_SURFACE()
	{
		return getStaticObjectField(
			"android.opengl.EGL14",
			"EGL_NO_SURFACE",
			"Landroid/opengl/EGLSurface;"
		);
	}
	inline jint EGL14::EGL_NO_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_NO_TEXTURE"
		);
	}
	inline jint EGL14::EGL_OPENGL_API()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_API"
		);
	}
	inline jint EGL14::EGL_OPENGL_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_BIT"
		);
	}
	inline jint EGL14::EGL_OPENGL_ES2_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES2_BIT"
		);
	}
	inline jint EGL14::EGL_OPENGL_ES_API()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES_API"
		);
	}
	inline jint EGL14::EGL_OPENGL_ES_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENGL_ES_BIT"
		);
	}
	inline jint EGL14::EGL_OPENVG_API()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_API"
		);
	}
	inline jint EGL14::EGL_OPENVG_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_BIT"
		);
	}
	inline jint EGL14::EGL_OPENVG_IMAGE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_OPENVG_IMAGE"
		);
	}
	inline jint EGL14::EGL_PBUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PBUFFER_BIT"
		);
	}
	inline jint EGL14::EGL_PIXEL_ASPECT_RATIO()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PIXEL_ASPECT_RATIO"
		);
	}
	inline jint EGL14::EGL_PIXMAP_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_PIXMAP_BIT"
		);
	}
	inline jint EGL14::EGL_READ()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_READ"
		);
	}
	inline jint EGL14::EGL_RED_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RED_SIZE"
		);
	}
	inline jint EGL14::EGL_RENDERABLE_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RENDERABLE_TYPE"
		);
	}
	inline jint EGL14::EGL_RENDER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RENDER_BUFFER"
		);
	}
	inline jint EGL14::EGL_RGB_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_RGB_BUFFER"
		);
	}
	inline jint EGL14::EGL_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SAMPLES"
		);
	}
	inline jint EGL14::EGL_SAMPLE_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SAMPLE_BUFFERS"
		);
	}
	inline jint EGL14::EGL_SINGLE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SINGLE_BUFFER"
		);
	}
	inline jint EGL14::EGL_SLOW_CONFIG()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SLOW_CONFIG"
		);
	}
	inline jint EGL14::EGL_STENCIL_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_STENCIL_SIZE"
		);
	}
	inline jint EGL14::EGL_SUCCESS()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SUCCESS"
		);
	}
	inline jint EGL14::EGL_SURFACE_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SURFACE_TYPE"
		);
	}
	inline jint EGL14::EGL_SWAP_BEHAVIOR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SWAP_BEHAVIOR"
		);
	}
	inline jint EGL14::EGL_SWAP_BEHAVIOR_PRESERVED_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_SWAP_BEHAVIOR_PRESERVED_BIT"
		);
	}
	inline jint EGL14::EGL_TEXTURE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_2D"
		);
	}
	inline jint EGL14::EGL_TEXTURE_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_FORMAT"
		);
	}
	inline jint EGL14::EGL_TEXTURE_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_RGB"
		);
	}
	inline jint EGL14::EGL_TEXTURE_RGBA()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_RGBA"
		);
	}
	inline jint EGL14::EGL_TEXTURE_TARGET()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TEXTURE_TARGET"
		);
	}
	inline jint EGL14::EGL_TRANSPARENT_BLUE_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_BLUE_VALUE"
		);
	}
	inline jint EGL14::EGL_TRANSPARENT_GREEN_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_GREEN_VALUE"
		);
	}
	inline jint EGL14::EGL_TRANSPARENT_RED_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_RED_VALUE"
		);
	}
	inline jint EGL14::EGL_TRANSPARENT_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_RGB"
		);
	}
	inline jint EGL14::EGL_TRANSPARENT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRANSPARENT_TYPE"
		);
	}
	inline jint EGL14::EGL_TRUE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_TRUE"
		);
	}
	inline jint EGL14::EGL_VENDOR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VENDOR"
		);
	}
	inline jint EGL14::EGL_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VERSION"
		);
	}
	inline jint EGL14::EGL_VERTICAL_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VERTICAL_RESOLUTION"
		);
	}
	inline jint EGL14::EGL_VG_ALPHA_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT"
		);
	}
	inline jint EGL14::EGL_VG_ALPHA_FORMAT_NONPRE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_NONPRE"
		);
	}
	inline jint EGL14::EGL_VG_ALPHA_FORMAT_PRE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_PRE"
		);
	}
	inline jint EGL14::EGL_VG_ALPHA_FORMAT_PRE_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_ALPHA_FORMAT_PRE_BIT"
		);
	}
	inline jint EGL14::EGL_VG_COLORSPACE()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE"
		);
	}
	inline jint EGL14::EGL_VG_COLORSPACE_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_LINEAR"
		);
	}
	inline jint EGL14::EGL_VG_COLORSPACE_LINEAR_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_LINEAR_BIT"
		);
	}
	inline jint EGL14::EGL_VG_COLORSPACE_sRGB()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_VG_COLORSPACE_sRGB"
		);
	}
	inline jint EGL14::EGL_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_WIDTH"
		);
	}
	inline jint EGL14::EGL_WINDOW_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.EGL14",
			"EGL_WINDOW_BIT"
		);
	}
	
	// Constructors
	inline EGL14::EGL14()
		: JObject(
			"android.opengl.EGL14",
			"()V"
		) {}
	
	// Methods
	inline jboolean EGL14::eglBindAPI(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglBindAPI",
			"(I)Z",
			arg0
		);
	}
	inline jboolean EGL14::eglBindTexImage(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2)
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
	inline jboolean EGL14::eglChooseConfig(android::opengl::EGLDisplay arg0, JIntArray arg1, jint arg2, JArray arg3, jint arg4, jint arg5, JIntArray arg6, jint arg7)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglChooseConfig",
			"(Landroid/opengl/EGLDisplay;[II[Landroid/opengl/EGLConfig;II[II)Z",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3.object<jarray>(),
			arg4,
			arg5,
			arg6.object<jintArray>(),
			arg7
		);
	}
	inline jboolean EGL14::eglCopyBuffers(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2)
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
	inline android::opengl::EGLContext EGL14::eglCreateContext(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, android::opengl::EGLContext arg2, JIntArray arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreateContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Landroid/opengl/EGLContext;[II)Landroid/opengl/EGLContext;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline android::opengl::EGLSurface EGL14::eglCreatePbufferFromClientBuffer(android::opengl::EGLDisplay arg0, jint arg1, jint arg2, android::opengl::EGLConfig arg3, JIntArray arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePbufferFromClientBuffer",
			"(Landroid/opengl/EGLDisplay;IILandroid/opengl/EGLConfig;[II)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object<jintArray>(),
			arg5
		);
	}
	inline android::opengl::EGLSurface EGL14::eglCreatePbufferSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, JIntArray arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePbufferSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;[II)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1.object(),
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline android::opengl::EGLSurface EGL14::eglCreatePixmapSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreatePixmapSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;I[II)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline android::opengl::EGLSurface EGL14::eglCreateWindowSurface(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, JObject arg2, JIntArray arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglCreateWindowSurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Ljava/lang/Object;[II)Landroid/opengl/EGLSurface;",
			arg0.object(),
			arg1.object(),
			arg2.object<jobject>(),
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline jboolean EGL14::eglDestroyContext(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglDestroyContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean EGL14::eglDestroySurface(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglDestroySurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean EGL14::eglGetConfigAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLConfig arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglGetConfigAttrib",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;I[II)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline jboolean EGL14::eglGetConfigs(android::opengl::EGLDisplay arg0, JArray arg1, jint arg2, jint arg3, JIntArray arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglGetConfigs",
			"(Landroid/opengl/EGLDisplay;[Landroid/opengl/EGLConfig;II[II)Z",
			arg0.object(),
			arg1.object<jarray>(),
			arg2,
			arg3,
			arg4.object<jintArray>(),
			arg5
		);
	}
	inline android::opengl::EGLContext EGL14::eglGetCurrentContext()
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentContext",
			"()Landroid/opengl/EGLContext;"
		);
	}
	inline android::opengl::EGLDisplay EGL14::eglGetCurrentDisplay()
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentDisplay",
			"()Landroid/opengl/EGLDisplay;"
		);
	}
	inline android::opengl::EGLSurface EGL14::eglGetCurrentSurface(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetCurrentSurface",
			"(I)Landroid/opengl/EGLSurface;",
			arg0
		);
	}
	inline android::opengl::EGLDisplay EGL14::eglGetDisplay(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglGetDisplay",
			"(I)Landroid/opengl/EGLDisplay;",
			arg0
		);
	}
	inline jint EGL14::eglGetError()
	{
		return callStaticMethod<jint>(
			"android.opengl.EGL14",
			"eglGetError",
			"()I"
		);
	}
	inline jboolean EGL14::eglInitialize(android::opengl::EGLDisplay arg0, JIntArray arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglInitialize",
			"(Landroid/opengl/EGLDisplay;[II[II)Z",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline jboolean EGL14::eglMakeCurrent(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, android::opengl::EGLSurface arg2, android::opengl::EGLContext arg3)
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
	inline jint EGL14::eglQueryAPI()
	{
		return callStaticMethod<jint>(
			"android.opengl.EGL14",
			"eglQueryAPI",
			"()I"
		);
	}
	inline jboolean EGL14::eglQueryContext(android::opengl::EGLDisplay arg0, android::opengl::EGLContext arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglQueryContext",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;I[II)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline JString EGL14::eglQueryString(android::opengl::EGLDisplay arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.opengl.EGL14",
			"eglQueryString",
			"(Landroid/opengl/EGLDisplay;I)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
	inline jboolean EGL14::eglQuerySurface(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglQuerySurface",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;I[II)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline jboolean EGL14::eglReleaseTexImage(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2)
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
	inline jboolean EGL14::eglReleaseThread()
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglReleaseThread",
			"()Z"
		);
	}
	inline jboolean EGL14::eglSurfaceAttrib(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jint arg2, jint arg3)
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
	inline jboolean EGL14::eglSwapBuffers(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglSwapBuffers",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean EGL14::eglSwapInterval(android::opengl::EGLDisplay arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglSwapInterval",
			"(Landroid/opengl/EGLDisplay;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean EGL14::eglTerminate(android::opengl::EGLDisplay arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglTerminate",
			"(Landroid/opengl/EGLDisplay;)Z",
			arg0.object()
		);
	}
	inline jboolean EGL14::eglWaitClient()
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitClient",
			"()Z"
		);
	}
	inline jboolean EGL14::eglWaitGL()
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitGL",
			"()Z"
		);
	}
	inline jboolean EGL14::eglWaitNative(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGL14",
			"eglWaitNative",
			"(I)Z",
			arg0
		);
	}
} // namespace android::opengl

// Base class headers

