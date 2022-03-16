#pragma once

#include "./EGLDisplay.def.hpp"
#include "./EGLSurface.def.hpp"
#include "./EGLExt.def.hpp"

namespace android::opengl
{
	// Fields
	inline jint EGLExt::EGL_CONTEXT_FLAGS_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_FLAGS_KHR"
		);
	}
	inline jint EGLExt::EGL_CONTEXT_MAJOR_VERSION_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_MAJOR_VERSION_KHR"
		);
	}
	inline jint EGLExt::EGL_CONTEXT_MINOR_VERSION_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_CONTEXT_MINOR_VERSION_KHR"
		);
	}
	inline jint EGLExt::EGL_OPENGL_ES3_BIT_KHR()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_OPENGL_ES3_BIT_KHR"
		);
	}
	inline jint EGLExt::EGL_RECORDABLE_ANDROID()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_RECORDABLE_ANDROID"
		);
	}
	
	// Constructors
	inline EGLExt::EGLExt()
		: JObject(
			"android.opengl.EGLExt",
			"()V"
		) {}
	
	// Methods
	inline jboolean EGLExt::eglPresentationTimeANDROID(android::opengl::EGLDisplay arg0, android::opengl::EGLSurface arg1, jlong arg2)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.EGLExt",
			"eglPresentationTimeANDROID",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;J)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::opengl

// Base class headers

