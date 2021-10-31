#include "./ColorMatrix.hpp"

namespace android::graphics
{
	// Fields
	
	ColorMatrix::ColorMatrix(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ColorMatrix::ColorMatrix()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrix",
			"()V"
		);
	}
	ColorMatrix::ColorMatrix(jfloatArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrix",
			"([F)V",
			arg0
		);
	}
	ColorMatrix::ColorMatrix(android::graphics::ColorMatrix &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrix",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ColorMatrix::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloatArray ColorMatrix::getArray()
	{
		return __thiz.callObjectMethod(
			"getArray",
			"()[F"
		).object<jfloatArray>();
	}
	void ColorMatrix::postConcat(android::graphics::ColorMatrix arg0)
	{
		__thiz.callMethod<void>(
			"postConcat",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorMatrix::preConcat(android::graphics::ColorMatrix arg0)
	{
		__thiz.callMethod<void>(
			"preConcat",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorMatrix::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void ColorMatrix::set(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"([F)V",
			arg0
		);
	}
	void ColorMatrix::set(android::graphics::ColorMatrix arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorMatrix::setConcat(android::graphics::ColorMatrix arg0, android::graphics::ColorMatrix arg1)
	{
		__thiz.callMethod<void>(
			"setConcat",
			"(Landroid/graphics/ColorMatrix;Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ColorMatrix::setRGB2YUV()
	{
		__thiz.callMethod<void>(
			"setRGB2YUV",
			"()V"
		);
	}
	void ColorMatrix::setRotate(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setRotate",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void ColorMatrix::setSaturation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setSaturation",
			"(F)V",
			arg0
		);
	}
	void ColorMatrix::setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setScale",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ColorMatrix::setYUV2RGB()
	{
		__thiz.callMethod<void>(
			"setYUV2RGB",
			"()V"
		);
	}
} // namespace android::graphics

