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

namespace android::hardware::input
{
	class InputManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_QUERY_KEYBOARD_LAYOUTS();
		static jstring META_DATA_KEYBOARD_LAYOUTS();
		
		InputManager(QAndroidJniObject obj);
		// Constructors
		InputManager() = default;
		
		// Methods
		QAndroidJniObject getInputDevice(jint arg0);
		jintArray getInputDeviceIds();
		void registerInputDeviceListener(__JniBaseClass arg0, android::os::Handler arg1);
		void unregisterInputDeviceListener(__JniBaseClass arg0);
	};
} // namespace android::hardware::input

