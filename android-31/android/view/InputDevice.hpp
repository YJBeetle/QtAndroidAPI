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
		
		// QJniObject forward
		template<typename ...Ts> explicit InputDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputDevice(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::InputDevice getDevice(jint arg0);
		static JIntArray getDeviceIds();
		jint describeContents();
		android::hardware::BatteryState getBatteryState();
		jint getControllerNumber();
		JString getDescriptor();
		jint getId();
		android::view::KeyCharacterMap getKeyCharacterMap();
		jint getKeyboardType();
		android::hardware::lights::LightsManager getLightsManager();
		android::view::InputDevice_MotionRange getMotionRange(jint arg0);
		android::view::InputDevice_MotionRange getMotionRange(jint arg0, jint arg1);
		JObject getMotionRanges();
		JString getName();
		jint getProductId();
		android::hardware::SensorManager getSensorManager();
		jint getSources();
		jint getVendorId();
		android::os::Vibrator getVibrator();
		android::os::VibratorManager getVibratorManager();
		JBooleanArray hasKeys(JIntArray arg0);
		jboolean hasMicrophone();
		jboolean isEnabled();
		jboolean isExternal();
		jboolean isVirtual();
		jboolean supportsSource(jint arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

