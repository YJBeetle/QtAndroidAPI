#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class InputDevice;
}
class JString;

namespace android::hardware::input
{
	class InputManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_QUERY_KEYBOARD_LAYOUTS();
		static JString META_DATA_KEYBOARD_LAYOUTS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::InputDevice getInputDevice(jint arg0) const;
		JIntArray getInputDeviceIds() const;
		void registerInputDeviceListener(JObject arg0, android::os::Handler arg1) const;
		void unregisterInputDeviceListener(JObject arg0) const;
	};
} // namespace android::hardware::input

