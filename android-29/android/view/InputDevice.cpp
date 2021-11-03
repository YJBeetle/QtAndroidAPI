#include "../os/Parcel.hpp"
#include "../os/Vibrator.hpp"
#include "./InputDevice_MotionRange.hpp"
#include "./KeyCharacterMap.hpp"
#include "./InputDevice.hpp"

namespace android::view
{
	// Fields
	JObject InputDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.view.InputDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint InputDevice::KEYBOARD_TYPE_ALPHABETIC()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_ALPHABETIC"
		);
	}
	jint InputDevice::KEYBOARD_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_NONE"
		);
	}
	jint InputDevice::KEYBOARD_TYPE_NON_ALPHABETIC()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_NON_ALPHABETIC"
		);
	}
	jint InputDevice::MOTION_RANGE_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_ORIENTATION"
		);
	}
	jint InputDevice::MOTION_RANGE_PRESSURE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_PRESSURE"
		);
	}
	jint InputDevice::MOTION_RANGE_SIZE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_SIZE"
		);
	}
	jint InputDevice::MOTION_RANGE_TOOL_MAJOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOOL_MAJOR"
		);
	}
	jint InputDevice::MOTION_RANGE_TOOL_MINOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOOL_MINOR"
		);
	}
	jint InputDevice::MOTION_RANGE_TOUCH_MAJOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOUCH_MAJOR"
		);
	}
	jint InputDevice::MOTION_RANGE_TOUCH_MINOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOUCH_MINOR"
		);
	}
	jint InputDevice::MOTION_RANGE_X()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_X"
		);
	}
	jint InputDevice::MOTION_RANGE_Y()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_Y"
		);
	}
	jint InputDevice::SOURCE_ANY()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_ANY"
		);
	}
	jint InputDevice::SOURCE_BLUETOOTH_STYLUS()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_BLUETOOTH_STYLUS"
		);
	}
	jint InputDevice::SOURCE_CLASS_BUTTON()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_BUTTON"
		);
	}
	jint InputDevice::SOURCE_CLASS_JOYSTICK()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_JOYSTICK"
		);
	}
	jint InputDevice::SOURCE_CLASS_MASK()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_MASK"
		);
	}
	jint InputDevice::SOURCE_CLASS_NONE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_NONE"
		);
	}
	jint InputDevice::SOURCE_CLASS_POINTER()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_POINTER"
		);
	}
	jint InputDevice::SOURCE_CLASS_POSITION()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_POSITION"
		);
	}
	jint InputDevice::SOURCE_CLASS_TRACKBALL()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_TRACKBALL"
		);
	}
	jint InputDevice::SOURCE_DPAD()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_DPAD"
		);
	}
	jint InputDevice::SOURCE_GAMEPAD()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_GAMEPAD"
		);
	}
	jint InputDevice::SOURCE_HDMI()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_HDMI"
		);
	}
	jint InputDevice::SOURCE_JOYSTICK()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_JOYSTICK"
		);
	}
	jint InputDevice::SOURCE_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_KEYBOARD"
		);
	}
	jint InputDevice::SOURCE_MOUSE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_MOUSE"
		);
	}
	jint InputDevice::SOURCE_MOUSE_RELATIVE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_MOUSE_RELATIVE"
		);
	}
	jint InputDevice::SOURCE_ROTARY_ENCODER()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_ROTARY_ENCODER"
		);
	}
	jint InputDevice::SOURCE_STYLUS()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_STYLUS"
		);
	}
	jint InputDevice::SOURCE_TOUCHPAD()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCHPAD"
		);
	}
	jint InputDevice::SOURCE_TOUCHSCREEN()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCHSCREEN"
		);
	}
	jint InputDevice::SOURCE_TOUCH_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCH_NAVIGATION"
		);
	}
	jint InputDevice::SOURCE_TRACKBALL()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TRACKBALL"
		);
	}
	jint InputDevice::SOURCE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	InputDevice::InputDevice(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::InputDevice InputDevice::getDevice(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.InputDevice",
			"getDevice",
			"(I)Landroid/view/InputDevice;",
			arg0
		);
	}
	jintArray InputDevice::getDeviceIds()
	{
		return callStaticObjectMethod(
			"android.view.InputDevice",
			"getDeviceIds",
			"()[I"
		).object<jintArray>();
	}
	jint InputDevice::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint InputDevice::getControllerNumber()
	{
		return callMethod<jint>(
			"getControllerNumber",
			"()I"
		);
	}
	jstring InputDevice::getDescriptor()
	{
		return callObjectMethod(
			"getDescriptor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputDevice::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	android::view::KeyCharacterMap InputDevice::getKeyCharacterMap()
	{
		return callObjectMethod(
			"getKeyCharacterMap",
			"()Landroid/view/KeyCharacterMap;"
		);
	}
	jint InputDevice::getKeyboardType()
	{
		return callMethod<jint>(
			"getKeyboardType",
			"()I"
		);
	}
	android::view::InputDevice_MotionRange InputDevice::getMotionRange(jint arg0)
	{
		return callObjectMethod(
			"getMotionRange",
			"(I)Landroid/view/InputDevice$MotionRange;",
			arg0
		);
	}
	android::view::InputDevice_MotionRange InputDevice::getMotionRange(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getMotionRange",
			"(II)Landroid/view/InputDevice$MotionRange;",
			arg0,
			arg1
		);
	}
	JObject InputDevice::getMotionRanges()
	{
		return callObjectMethod(
			"getMotionRanges",
			"()Ljava/util/List;"
		);
	}
	jstring InputDevice::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputDevice::getProductId()
	{
		return callMethod<jint>(
			"getProductId",
			"()I"
		);
	}
	jint InputDevice::getSources()
	{
		return callMethod<jint>(
			"getSources",
			"()I"
		);
	}
	jint InputDevice::getVendorId()
	{
		return callMethod<jint>(
			"getVendorId",
			"()I"
		);
	}
	android::os::Vibrator InputDevice::getVibrator()
	{
		return callObjectMethod(
			"getVibrator",
			"()Landroid/os/Vibrator;"
		);
	}
	jbooleanArray InputDevice::hasKeys(jintArray arg0)
	{
		return callObjectMethod(
			"hasKeys",
			"([I)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jboolean InputDevice::hasMicrophone()
	{
		return callMethod<jboolean>(
			"hasMicrophone",
			"()Z"
		);
	}
	jboolean InputDevice::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean InputDevice::isExternal()
	{
		return callMethod<jboolean>(
			"isExternal",
			"()Z"
		);
	}
	jboolean InputDevice::isVirtual()
	{
		return callMethod<jboolean>(
			"isVirtual",
			"()Z"
		);
	}
	jboolean InputDevice::supportsSource(jint arg0)
	{
		return callMethod<jboolean>(
			"supportsSource",
			"(I)Z",
			arg0
		);
	}
	jstring InputDevice::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InputDevice::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

