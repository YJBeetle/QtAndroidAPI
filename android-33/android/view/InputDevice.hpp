#pragma once

#include "../../JIntArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../hardware/BatteryState.def.hpp"
#include "../hardware/SensorManager.def.hpp"
#include "../hardware/lights/LightsManager.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/Vibrator.def.hpp"
#include "../os/VibratorManager.def.hpp"
#include "./InputDevice_MotionRange.def.hpp"
#include "./KeyCharacterMap.def.hpp"
#include "../../JString.hpp"
#include "./InputDevice.def.hpp"

namespace android::view
{
	// Fields
	inline JObject InputDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.view.InputDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint InputDevice::KEYBOARD_TYPE_ALPHABETIC()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_ALPHABETIC"
		);
	}
	inline jint InputDevice::KEYBOARD_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_NONE"
		);
	}
	inline jint InputDevice::KEYBOARD_TYPE_NON_ALPHABETIC()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_NON_ALPHABETIC"
		);
	}
	inline jint InputDevice::MOTION_RANGE_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_ORIENTATION"
		);
	}
	inline jint InputDevice::MOTION_RANGE_PRESSURE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_PRESSURE"
		);
	}
	inline jint InputDevice::MOTION_RANGE_SIZE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_SIZE"
		);
	}
	inline jint InputDevice::MOTION_RANGE_TOOL_MAJOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOOL_MAJOR"
		);
	}
	inline jint InputDevice::MOTION_RANGE_TOOL_MINOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOOL_MINOR"
		);
	}
	inline jint InputDevice::MOTION_RANGE_TOUCH_MAJOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOUCH_MAJOR"
		);
	}
	inline jint InputDevice::MOTION_RANGE_TOUCH_MINOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOUCH_MINOR"
		);
	}
	inline jint InputDevice::MOTION_RANGE_X()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_X"
		);
	}
	inline jint InputDevice::MOTION_RANGE_Y()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_Y"
		);
	}
	inline jint InputDevice::SOURCE_ANY()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_ANY"
		);
	}
	inline jint InputDevice::SOURCE_BLUETOOTH_STYLUS()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_BLUETOOTH_STYLUS"
		);
	}
	inline jint InputDevice::SOURCE_CLASS_BUTTON()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_BUTTON"
		);
	}
	inline jint InputDevice::SOURCE_CLASS_JOYSTICK()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_JOYSTICK"
		);
	}
	inline jint InputDevice::SOURCE_CLASS_MASK()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_MASK"
		);
	}
	inline jint InputDevice::SOURCE_CLASS_NONE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_NONE"
		);
	}
	inline jint InputDevice::SOURCE_CLASS_POINTER()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_POINTER"
		);
	}
	inline jint InputDevice::SOURCE_CLASS_POSITION()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_POSITION"
		);
	}
	inline jint InputDevice::SOURCE_CLASS_TRACKBALL()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_TRACKBALL"
		);
	}
	inline jint InputDevice::SOURCE_DPAD()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_DPAD"
		);
	}
	inline jint InputDevice::SOURCE_GAMEPAD()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_GAMEPAD"
		);
	}
	inline jint InputDevice::SOURCE_HDMI()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_HDMI"
		);
	}
	inline jint InputDevice::SOURCE_JOYSTICK()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_JOYSTICK"
		);
	}
	inline jint InputDevice::SOURCE_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_KEYBOARD"
		);
	}
	inline jint InputDevice::SOURCE_MOUSE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_MOUSE"
		);
	}
	inline jint InputDevice::SOURCE_MOUSE_RELATIVE()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_MOUSE_RELATIVE"
		);
	}
	inline jint InputDevice::SOURCE_ROTARY_ENCODER()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_ROTARY_ENCODER"
		);
	}
	inline jint InputDevice::SOURCE_SENSOR()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_SENSOR"
		);
	}
	inline jint InputDevice::SOURCE_STYLUS()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_STYLUS"
		);
	}
	inline jint InputDevice::SOURCE_TOUCHPAD()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCHPAD"
		);
	}
	inline jint InputDevice::SOURCE_TOUCHSCREEN()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCHSCREEN"
		);
	}
	inline jint InputDevice::SOURCE_TOUCH_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCH_NAVIGATION"
		);
	}
	inline jint InputDevice::SOURCE_TRACKBALL()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TRACKBALL"
		);
	}
	inline jint InputDevice::SOURCE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::InputDevice InputDevice::getDevice(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.InputDevice",
			"getDevice",
			"(I)Landroid/view/InputDevice;",
			arg0
		);
	}
	inline JIntArray InputDevice::getDeviceIds()
	{
		return callStaticObjectMethod(
			"android.view.InputDevice",
			"getDeviceIds",
			"()[I"
		);
	}
	inline jint InputDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::hardware::BatteryState InputDevice::getBatteryState() const
	{
		return callObjectMethod(
			"getBatteryState",
			"()Landroid/hardware/BatteryState;"
		);
	}
	inline jint InputDevice::getControllerNumber() const
	{
		return callMethod<jint>(
			"getControllerNumber",
			"()I"
		);
	}
	inline JString InputDevice::getDescriptor() const
	{
		return callObjectMethod(
			"getDescriptor",
			"()Ljava/lang/String;"
		);
	}
	inline jint InputDevice::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline android::view::KeyCharacterMap InputDevice::getKeyCharacterMap() const
	{
		return callObjectMethod(
			"getKeyCharacterMap",
			"()Landroid/view/KeyCharacterMap;"
		);
	}
	inline jint InputDevice::getKeyCodeForKeyLocation(jint arg0) const
	{
		return callMethod<jint>(
			"getKeyCodeForKeyLocation",
			"(I)I",
			arg0
		);
	}
	inline jint InputDevice::getKeyboardType() const
	{
		return callMethod<jint>(
			"getKeyboardType",
			"()I"
		);
	}
	inline android::hardware::lights::LightsManager InputDevice::getLightsManager() const
	{
		return callObjectMethod(
			"getLightsManager",
			"()Landroid/hardware/lights/LightsManager;"
		);
	}
	inline android::view::InputDevice_MotionRange InputDevice::getMotionRange(jint arg0) const
	{
		return callObjectMethod(
			"getMotionRange",
			"(I)Landroid/view/InputDevice$MotionRange;",
			arg0
		);
	}
	inline android::view::InputDevice_MotionRange InputDevice::getMotionRange(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getMotionRange",
			"(II)Landroid/view/InputDevice$MotionRange;",
			arg0,
			arg1
		);
	}
	inline JObject InputDevice::getMotionRanges() const
	{
		return callObjectMethod(
			"getMotionRanges",
			"()Ljava/util/List;"
		);
	}
	inline JString InputDevice::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint InputDevice::getProductId() const
	{
		return callMethod<jint>(
			"getProductId",
			"()I"
		);
	}
	inline android::hardware::SensorManager InputDevice::getSensorManager() const
	{
		return callObjectMethod(
			"getSensorManager",
			"()Landroid/hardware/SensorManager;"
		);
	}
	inline jint InputDevice::getSources() const
	{
		return callMethod<jint>(
			"getSources",
			"()I"
		);
	}
	inline jint InputDevice::getVendorId() const
	{
		return callMethod<jint>(
			"getVendorId",
			"()I"
		);
	}
	inline android::os::Vibrator InputDevice::getVibrator() const
	{
		return callObjectMethod(
			"getVibrator",
			"()Landroid/os/Vibrator;"
		);
	}
	inline android::os::VibratorManager InputDevice::getVibratorManager() const
	{
		return callObjectMethod(
			"getVibratorManager",
			"()Landroid/os/VibratorManager;"
		);
	}
	inline JBooleanArray InputDevice::hasKeys(JIntArray arg0) const
	{
		return callObjectMethod(
			"hasKeys",
			"([I)[Z",
			arg0.object<jintArray>()
		);
	}
	inline jboolean InputDevice::hasMicrophone() const
	{
		return callMethod<jboolean>(
			"hasMicrophone",
			"()Z"
		);
	}
	inline jboolean InputDevice::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean InputDevice::isExternal() const
	{
		return callMethod<jboolean>(
			"isExternal",
			"()Z"
		);
	}
	inline jboolean InputDevice::isVirtual() const
	{
		return callMethod<jboolean>(
			"isVirtual",
			"()Z"
		);
	}
	inline jboolean InputDevice::supportsSource(jint arg0) const
	{
		return callMethod<jboolean>(
			"supportsSource",
			"(I)Z",
			arg0
		);
	}
	inline JString InputDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InputDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
