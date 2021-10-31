#include "../os/Handler.hpp"
#include "./SurfaceTexture.hpp"

namespace android::graphics
{
	// Fields
	
	SurfaceTexture::SurfaceTexture(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SurfaceTexture::SurfaceTexture(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture",
			"(Z)V",
			arg0
		);
	}
	SurfaceTexture::SurfaceTexture(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture",
			"(I)V",
			arg0
		);
	}
	SurfaceTexture::SurfaceTexture(jint arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void SurfaceTexture::attachToGLContext(jint arg0)
	{
		__thiz.callMethod<void>(
			"attachToGLContext",
			"(I)V",
			arg0
		);
	}
	void SurfaceTexture::detachFromGLContext()
	{
		__thiz.callMethod<void>(
			"detachFromGLContext",
			"()V"
		);
	}
	jlong SurfaceTexture::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	void SurfaceTexture::getTransformMatrix(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"getTransformMatrix",
			"([F)V",
			arg0
		);
	}
	jboolean SurfaceTexture::isReleased()
	{
		return __thiz.callMethod<jboolean>(
			"isReleased",
			"()Z"
		);
	}
	void SurfaceTexture::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void SurfaceTexture::releaseTexImage()
	{
		__thiz.callMethod<void>(
			"releaseTexImage",
			"()V"
		);
	}
	void SurfaceTexture::setDefaultBufferSize(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setDefaultBufferSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SurfaceTexture::setOnFrameAvailableListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SurfaceTexture::setOnFrameAvailableListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SurfaceTexture::updateTexImage()
	{
		__thiz.callMethod<void>(
			"updateTexImage",
			"()V"
		);
	}
} // namespace android::graphics

