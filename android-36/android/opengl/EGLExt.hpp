#pragma once

#include "../hardware/SyncFence.def.hpp"
#include "./EGLDisplay.def.hpp"
#include "./EGLSurface.def.hpp"
#include "./EGLSync.def.hpp"
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
	inline jint EGLExt::EGL_NO_NATIVE_FENCE_FD_ANDROID()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_NO_NATIVE_FENCE_FD_ANDROID"
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
	inline jint EGLExt::EGL_SYNC_NATIVE_FENCE_ANDROID()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_SYNC_NATIVE_FENCE_ANDROID"
		);
	}
	inline jint EGLExt::EGL_SYNC_NATIVE_FENCE_FD_ANDROID()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_SYNC_NATIVE_FENCE_FD_ANDROID"
		);
	}
	inline jint EGLExt::EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID()
	{
		return getStaticField<jint>(
			"android.opengl.EGLExt",
			"EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID"
		);
	}
	
	// Constructors
	inline EGLExt::EGLExt()
		: JObject(
			"android.opengl.EGLExt",
			"()V"
		) {}
	
	// Methods
	inline android::hardware::SyncFence EGLExt::eglDupNativeFenceFDANDROID(android::opengl::EGLDisplay arg0, android::opengl::EGLSync arg1)
	{
		return callStaticObjectMethod(
			"android.opengl.EGLExt",
			"eglDupNativeFenceFDANDROID",
			"(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSync;)Landroid/hardware/SyncFence;",
			arg0.object(),
			arg1.object()
		);
	}
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
