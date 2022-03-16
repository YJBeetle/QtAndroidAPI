#include "../../../JIntArray.hpp"
#include "../../os/Handler.hpp"
#include "../../view/InputDevice.hpp"
#include "../../view/InputEvent.hpp"
#include "../../view/VerifiedInputEvent.hpp"
#include "../../../JString.hpp"
#include "./InputManager.hpp"

namespace android::hardware::input
{
	// Fields
	JString InputManager::ACTION_QUERY_KEYBOARD_LAYOUTS()
	{
		return getStaticObjectField(
			"android.hardware.input.InputManager",
			"ACTION_QUERY_KEYBOARD_LAYOUTS",
			"Ljava/lang/String;"
		);
	}
	JString InputManager::META_DATA_KEYBOARD_LAYOUTS()
	{
		return getStaticObjectField(
			"android.hardware.input.InputManager",
			"META_DATA_KEYBOARD_LAYOUTS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	android::view::InputDevice InputManager::getInputDevice(jint arg0) const
	{
		return callObjectMethod(
			"getInputDevice",
			"(I)Landroid/view/InputDevice;",
			arg0
		);
	}
	JIntArray InputManager::getInputDeviceIds() const
	{
		return callObjectMethod(
			"getInputDeviceIds",
			"()[I"
		);
	}
	jfloat InputManager::getMaximumObscuringOpacityForTouch() const
	{
		return callMethod<jfloat>(
			"getMaximumObscuringOpacityForTouch",
			"()F"
		);
	}
	void InputManager::registerInputDeviceListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerInputDeviceListener",
			"(Landroid/hardware/input/InputManager$InputDeviceListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void InputManager::unregisterInputDeviceListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterInputDeviceListener",
			"(Landroid/hardware/input/InputManager$InputDeviceListener;)V",
			arg0.object()
		);
	}
	android::view::VerifiedInputEvent InputManager::verifyInputEvent(android::view::InputEvent arg0) const
	{
		return callObjectMethod(
			"verifyInputEvent",
			"(Landroid/view/InputEvent;)Landroid/view/VerifiedInputEvent;",
			arg0.object()
		);
	}
} // namespace android::hardware::input

