#include "./InputDevice_MotionRange.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	InputDevice_MotionRange::InputDevice_MotionRange(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint InputDevice_MotionRange::getAxis() const
	{
		return callMethod<jint>(
			"getAxis",
			"()I"
		);
	}
	jfloat InputDevice_MotionRange::getFlat() const
	{
		return callMethod<jfloat>(
			"getFlat",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getFuzz() const
	{
		return callMethod<jfloat>(
			"getFuzz",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getMax() const
	{
		return callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getMin() const
	{
		return callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getRange() const
	{
		return callMethod<jfloat>(
			"getRange",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getResolution() const
	{
		return callMethod<jfloat>(
			"getResolution",
			"()F"
		);
	}
	jint InputDevice_MotionRange::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jboolean InputDevice_MotionRange::isFromSource(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFromSource",
			"(I)Z",
			arg0
		);
	}
} // namespace android::view

