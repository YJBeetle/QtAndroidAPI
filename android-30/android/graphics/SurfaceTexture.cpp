#include "../os/Handler.hpp"
#include "./SurfaceTexture.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	SurfaceTexture::SurfaceTexture(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SurfaceTexture::SurfaceTexture(jboolean arg0)
		: __JniBaseClass(
			"android.graphics.SurfaceTexture",
			"(Z)V",
			arg0
		) {}
	SurfaceTexture::SurfaceTexture(jint arg0)
		: __JniBaseClass(
			"android.graphics.SurfaceTexture",
			"(I)V",
			arg0
		) {}
	SurfaceTexture::SurfaceTexture(jint arg0, jboolean arg1)
		: __JniBaseClass(
			"android.graphics.SurfaceTexture",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void SurfaceTexture::attachToGLContext(jint arg0)
	{
		callMethod<void>(
			"attachToGLContext",
			"(I)V",
			arg0
		);
	}
	void SurfaceTexture::detachFromGLContext()
	{
		callMethod<void>(
			"detachFromGLContext",
			"()V"
		);
	}
	jlong SurfaceTexture::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	void SurfaceTexture::getTransformMatrix(jfloatArray arg0)
	{
		callMethod<void>(
			"getTransformMatrix",
			"([F)V",
			arg0
		);
	}
	jboolean SurfaceTexture::isReleased()
	{
		return callMethod<jboolean>(
			"isReleased",
			"()Z"
		);
	}
	void SurfaceTexture::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void SurfaceTexture::releaseTexImage()
	{
		callMethod<void>(
			"releaseTexImage",
			"()V"
		);
	}
	void SurfaceTexture::setDefaultBufferSize(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setDefaultBufferSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SurfaceTexture::setOnFrameAvailableListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;)V",
			arg0.object()
		);
	}
	void SurfaceTexture::setOnFrameAvailableListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SurfaceTexture::updateTexImage()
	{
		callMethod<void>(
			"updateTexImage",
			"()V"
		);
	}
} // namespace android::graphics

