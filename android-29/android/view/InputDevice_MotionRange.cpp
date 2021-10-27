#include "./InputDevice_MotionRange.hpp"

namespace android::view
{
	// Fields
	
	InputDevice_MotionRange::InputDevice_MotionRange(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint InputDevice_MotionRange::getAxis()
	{
		return __thiz.callMethod<jint>(
			"getAxis",
			"()I"
		);
	}
	jfloat InputDevice_MotionRange::getFlat()
	{
		return __thiz.callMethod<jfloat>(
			"getFlat",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getFuzz()
	{
		return __thiz.callMethod<jfloat>(
			"getFuzz",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getMax()
	{
		return __thiz.callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getMin()
	{
		return __thiz.callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getRange()
	{
		return __thiz.callMethod<jfloat>(
			"getRange",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getResolution()
	{
		return __thiz.callMethod<jfloat>(
			"getResolution",
			"()F"
		);
	}
	jint InputDevice_MotionRange::getSource()
	{
		return __thiz.callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jboolean InputDevice_MotionRange::isFromSource(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isFromSource",
			"(I)Z",
			arg0
		);
	}
} // namespace android::view

