#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Handler;
}
namespace android::view
{
	class InputDevice;
}
namespace android::view
{
	class InputEvent;
}
namespace android::view
{
	class VerifiedInputEvent;
}

namespace android::hardware::input
{
	class InputManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_QUERY_KEYBOARD_LAYOUTS();
		static jstring META_DATA_KEYBOARD_LAYOUTS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::InputDevice getInputDevice(jint arg0);
		jintArray getInputDeviceIds();
		void registerInputDeviceListener(__JniBaseClass arg0, android::os::Handler arg1);
		void unregisterInputDeviceListener(__JniBaseClass arg0);
		android::view::VerifiedInputEvent verifyInputEvent(android::view::InputEvent arg0);
	};
} // namespace android::hardware::input

