#pragma once

#ifndef ANDROID_GRAPHICS_SURFACETEXTURE
#define ANDROID_GRAPHICS_SURFACETEXTURE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::graphics
{
	class SurfaceTexture : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jboolean arg0);
		void __constructor(jint arg0);
		void __constructor(jint arg0, jboolean arg1);
		
		// Methods
		void attachToGLContext(jint arg0);
		void detachFromGLContext();
		jlong getTimestamp();
		void getTransformMatrix(jfloatArray arg0);
		jboolean isReleased();
		void release();
		void releaseTexImage();
		void setDefaultBufferSize(jint arg0, jint arg1);
		void setOnFrameAvailableListener(__jni_impl::__JniBaseClass arg0);
		void setOnFrameAvailableListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void updateTexImage();
	};
} // namespace __jni_impl::android::graphics

#include "../os/Handler.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void SurfaceTexture::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture",
			"(Z)V",
			arg0
		);
	}
	void SurfaceTexture::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SurfaceTexture",
			"(I)V",
			arg0
		);
	}
	void SurfaceTexture::__constructor(jint arg0, jboolean arg1)
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
	void SurfaceTexture::setOnFrameAvailableListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnFrameAvailableListener",
			"(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SurfaceTexture::setOnFrameAvailableListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
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
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class SurfaceTexture : public __jni_impl::android::graphics::SurfaceTexture
	{
	public:
		SurfaceTexture(QAndroidJniObject obj) { __thiz = obj; }
		SurfaceTexture(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		SurfaceTexture(jint arg0)
		{
			__constructor(
				arg0);
		}
		SurfaceTexture(jint arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_SURFACETEXTURE

