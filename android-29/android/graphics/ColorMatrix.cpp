#include "../../JFloatArray.hpp"
#include "../../JObject.hpp"
#include "./ColorMatrix.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	ColorMatrix::ColorMatrix(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ColorMatrix::ColorMatrix()
		: JObject(
			"android.graphics.ColorMatrix",
			"()V"
		) {}
	ColorMatrix::ColorMatrix(JFloatArray arg0)
		: JObject(
			"android.graphics.ColorMatrix",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	ColorMatrix::ColorMatrix(android::graphics::ColorMatrix &arg0)
		: JObject(
			"android.graphics.ColorMatrix",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ColorMatrix::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JFloatArray ColorMatrix::getArray()
	{
		return callObjectMethod(
			"getArray",
			"()[F"
		);
	}
	void ColorMatrix::postConcat(android::graphics::ColorMatrix arg0)
	{
		callMethod<void>(
			"postConcat",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		);
	}
	void ColorMatrix::preConcat(android::graphics::ColorMatrix arg0)
	{
		callMethod<void>(
			"preConcat",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		);
	}
	void ColorMatrix::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void ColorMatrix::set(JFloatArray arg0)
	{
		callMethod<void>(
			"set",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void ColorMatrix::set(android::graphics::ColorMatrix arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		);
	}
	void ColorMatrix::setConcat(android::graphics::ColorMatrix arg0, android::graphics::ColorMatrix arg1)
	{
		callMethod<void>(
			"setConcat",
			"(Landroid/graphics/ColorMatrix;Landroid/graphics/ColorMatrix;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ColorMatrix::setRGB2YUV()
	{
		callMethod<void>(
			"setRGB2YUV",
			"()V"
		);
	}
	void ColorMatrix::setRotate(jint arg0, jfloat arg1)
	{
		callMethod<void>(
			"setRotate",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void ColorMatrix::setSaturation(jfloat arg0)
	{
		callMethod<void>(
			"setSaturation",
			"(F)V",
			arg0
		);
	}
	void ColorMatrix::setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"setYUV2RGB",
			"()V"
		);
	}
} // namespace android::graphics

