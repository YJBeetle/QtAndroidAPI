#include "./Canvas.hpp"
#include "./Picture.hpp"

namespace android::graphics
{
	// Fields
	
	Picture::Picture(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Picture::Picture()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Picture",
			"()V"
		);
	}
	Picture::Picture(android::graphics::Picture &arg0)
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
	void Picture::draw(android::graphics::Canvas arg0)
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
} // namespace android::graphics

