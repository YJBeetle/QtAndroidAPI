#include "../../os/Handler.hpp"
#include "../../view/InputDevice.hpp"
#include "./InputManager.hpp"

namespace android::hardware::input
{
	// Fields
	jstring InputManager::ACTION_QUERY_KEYBOARD_LAYOUTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.input.InputManager",
			"ACTION_QUERY_KEYBOARD_LAYOUTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputManager::META_DATA_KEYBOARD_LAYOUTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.input.InputManager",
			"META_DATA_KEYBOARD_LAYOUTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	InputManager::InputManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject InputManager::getInputDevice(jint arg0)
	{
		return callObjectMethod(
			"getInputDevice",
			"(I)Landroid/view/InputDevice;",
			arg0
		);
	}
	jintArray InputManager::getInputDeviceIds()
	{
		return callObjectMethod(
			"getInputDeviceIds",
			"()[I"
		).object<jintArray>();
	}
	void InputManager::registerInputDeviceListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerInputDeviceListener",
			"(Landroid/hardware/input/InputManager$InputDeviceListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void InputManager::unregisterInputDeviceListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterInputDeviceListener",
			"(Landroid/hardware/input/InputManager$InputDeviceListener;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::input
