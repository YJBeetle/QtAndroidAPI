#include "./InputDevice_MotionRange.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	InputDevice_MotionRange::InputDevice_MotionRange(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint InputDevice_MotionRange::getAxis()
	{
		return callMethod<jint>(
			"getAxis",
			"()I"
		);
	}
	jfloat InputDevice_MotionRange::getFlat()
	{
		return callMethod<jfloat>(
			"getFlat",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getFuzz()
	{
		return callMethod<jfloat>(
			"getFuzz",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getMax()
	{
		return callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getMin()
	{
		return callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getRange()
	{
		return callMethod<jfloat>(
			"getRange",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getResolution()
	{
		return callMethod<jfloat>(
			"getResolution",
			"()F"
		);
	}
	jint InputDevice_MotionRange::getSource()
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jboolean InputDevice_MotionRange::isFromSource(jint arg0)
	{
		return callMethod<jboolean>(
			"isFromSource",
			"(I)Z",
			arg0
		);
	}
} // namespace android::view

