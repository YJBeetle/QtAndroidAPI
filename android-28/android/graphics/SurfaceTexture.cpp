#include "../../JFloatArray.hpp"
#include "../os/Handler.hpp"
#include "./SurfaceTexture.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	SurfaceTexture::SurfaceTexture(jboolean arg0)
		: JObject(
			"android.graphics.SurfaceTexture",
			"(Z)V",
			arg0
		) {}
	SurfaceTexture::SurfaceTexture(jint arg0)
		: JObject(
			"android.graphics.SurfaceTexture",
			"(I)V",
			arg0
		) {}
	SurfaceTexture::SurfaceTexture(jint arg0, jboolean arg1)
		: JObject(
			"android.graphics.SurfaceTexture",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void SurfaceTexture::attachToGLContext(jint arg0) const
	{
		callMethod<void>(
			"attachToGLContext",
			"(I)V",
			arg0
		);
	}
	void SurfaceTexture::detachFromGLContext() const
	{
		callMethod<void>(
			"detachFromGLContext",
			"()V"
		);
	}
	jlong SurfaceTexture::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	void SurfaceTexture::getTransformMatrix(JFloatArray arg0) const
	{
		callMethod<void>(
			"getTransformMatrix",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	jboolean SurfaceTexture::isReleased() const
	{
		return callMethod<jboolean>(
			"isReleased",
			"()Z"
		);
	}
	void SurfaceTexture::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void SurfaceTexture::releaseTexImage() const
	{
		callMethod<void>(
			"releaseTexImage",
			"()V"
		);
	}
	void SurfaceTexture::setDefaultBufferSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setDefaultBufferSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SurfaceTexture::setOnFrameAvailableListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;)V",
			arg0.object()
		);
	}
	void SurfaceTexture::setOnFrameAvailableListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SurfaceTexture::updateTexImage() const
	{
		callMethod<void>(
			"updateTexImage",
			"()V"
		);
	}
} // namespace android::graphics

