#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::graphics
{
	class Picture : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Picture arg0);
		
		// Methods
		QAndroidJniObject beginRecording(jint arg0, jint arg1);
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void endRecording();
		jint getHeight();
		jint getWidth();
		jboolean requiresHardwareAcceleration();
	};
} // namespace __jni_impl::android::graphics

#include "Canvas.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Picture::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Picture",
			"()V"
		);
	}
	void Picture::__constructor(__jni_impl::android::graphics::Picture arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Picture",
			"(Landroid/graphics/Picture;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Picture::beginRecording(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"beginRecording",
			"(II)Landroid/graphics/Canvas;",
			arg0,
			arg1
		);
	}
	void Picture::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void Picture::endRecording()
	{
		__thiz.callMethod<void>(
			"endRecording",
			"()V"
		);
	}
	jint Picture::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Picture::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Picture::requiresHardwareAcceleration()
	{
		return __thiz.callMethod<jboolean>(
			"requiresHardwareAcceleration",
			"()Z"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Picture : public __jni_impl::android::graphics::Picture
	{
	public:
		Picture(QAndroidJniObject obj) { __thiz = obj; }
		Picture()
		{
			__constructor();
		}
		Picture(__jni_impl::android::graphics::Picture arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

