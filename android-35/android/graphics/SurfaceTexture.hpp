#pragma once

#include "../../JFloatArray.hpp"
#include "../os/Handler.def.hpp"
#include "./SurfaceTexture.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline SurfaceTexture::SurfaceTexture(jboolean arg0)
		: JObject(
			"android.graphics.SurfaceTexture",
			"(Z)V",
			arg0
		) {}
	inline SurfaceTexture::SurfaceTexture(jint arg0)
		: JObject(
			"android.graphics.SurfaceTexture",
			"(I)V",
			arg0
		) {}
	inline SurfaceTexture::SurfaceTexture(jint arg0, jboolean arg1)
		: JObject(
			"android.graphics.SurfaceTexture",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline void SurfaceTexture::attachToGLContext(jint arg0) const
	{
		callMethod<void>(
			"attachToGLContext",
			"(I)V",
			arg0
		);
	}
	inline void SurfaceTexture::detachFromGLContext() const
	{
		callMethod<void>(
			"detachFromGLContext",
			"()V"
		);
	}
	inline jint SurfaceTexture::getDataSpace() const
	{
		return callMethod<jint>(
			"getDataSpace",
			"()I"
		);
	}
	inline jlong SurfaceTexture::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	inline void SurfaceTexture::getTransformMatrix(JFloatArray arg0) const
	{
		callMethod<void>(
			"getTransformMatrix",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline jboolean SurfaceTexture::isReleased() const
	{
		return callMethod<jboolean>(
			"isReleased",
			"()Z"
		);
	}
	inline void SurfaceTexture::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void SurfaceTexture::releaseTexImage() const
	{
		callMethod<void>(
			"releaseTexImage",
			"()V"
		);
	}
	inline void SurfaceTexture::setDefaultBufferSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setDefaultBufferSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SurfaceTexture::setOnFrameAvailableListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;)V",
			arg0.object()
		);
	}
	inline void SurfaceTexture::setOnFrameAvailableListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SurfaceTexture::updateTexImage() const
	{
		callMethod<void>(
			"updateTexImage",
			"()V"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
