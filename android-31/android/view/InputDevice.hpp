#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JBooleanArray;
namespace android::hardware
{
	class BatteryState;
}
namespace android::hardware
{
	class SensorManager;
}
namespace android::hardware::lights
{
	class LightsManager;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class Vibrator;
}
namespace android::os
{
	class VibratorManager;
}
namespace android::view
{
	class InputDevice_MotionRange;
}
namespace android::view
{
	class KeyCharacterMap;
}
class JString;

namespace android::view
{
	class InputDevice : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint KEYBOARD_TYPE_ALPHABETIC();
		static jint KEYBOARD_TYPE_NONE();
		static jint KEYBOARD_TYPE_NON_ALPHABETIC();
		static jint MOTION_RANGE_ORIENTATION();
		static jint MOTION_RANGE_PRESSURE();
		static jint MOTION_RANGE_SIZE();
		static jint MOTION_RANGE_TOOL_MAJOR();
		static jint MOTION_RANGE_TOOL_MINOR();
		static jint MOTION_RANGE_TOUCH_MAJOR();
		static jint MOTION_RANGE_TOUCH_MINOR();
		static jint MOTION_RANGE_X();
		static jint MOTION_RANGE_Y();
		static jint SOURCE_ANY();
		static jint SOURCE_BLUETOOTH_STYLUS();
		static jint SOURCE_CLASS_BUTTON();
		static jint SOURCE_CLASS_JOYSTICK();
		static jint SOURCE_CLASS_MASK();
		static jint SOURCE_CLASS_NONE();
		static jint SOURCE_CLASS_POINTER();
		static jint SOURCE_CLASS_POSITION();
		static jint SOURCE_CLASS_TRACKBALL();
		static jint SOURCE_DPAD();
		static jint SOURCE_GAMEPAD();
		static jint SOURCE_HDMI();
		static jint SOURCE_JOYSTICK();
		static jint SOURCE_KEYBOARD();
		static jint SOURCE_MOUSE();
		static jint SOURCE_MOUSE_RELATIVE();
		static jint SOURCE_ROTARY_ENCODER();
		static jint SOURCE_SENSOR();
		static jint SOURCE_STYLUS();
		static jint SOURCE_TOUCHPAD();
		static jint SOURCE_TOUCHSCREEN();
		static jint SOURCE_TOUCH_NAVIGATION();
		static jint SOURCE_TRACKBALL();
		static jint SOURCE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputDevice(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::InputDevice getDevice(jint arg0);
		static JIntArray getDeviceIds();
		jint describeContents() const;
		android::hardware::BatteryState getBatteryState() const;
		jint getControllerNumber() const;
		JString getDescriptor() const;
		jint getId() const;
		android::view::KeyCharacterMap getKeyCharacterMap() const;
		jint getKeyboardType() const;
		android::hardware::lights::LightsManager getLightsManager() const;
		android::view::InputDevice_MotionRange getMotionRange(jint arg0) const;
		android::view::InputDevice_MotionRange getMotionRange(jint arg0, jint arg1) const;
		JObject getMotionRanges() const;
		JString getName() const;
		jint getProductId() const;
		android::hardware::SensorManager getSensorManager() const;
		jint getSources() const;
		jint getVendorId() const;
		android::os::Vibrator getVibrator() const;
		android::os::VibratorManager getVibratorManager() const;
		JBooleanArray hasKeys(JIntArray arg0) const;
		jboolean hasMicrophone() const;
		jboolean isEnabled() const;
		jboolean isExternal() const;
		jboolean isVirtual() const;
		jboolean supportsSource(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

