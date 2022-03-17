#pragma once

#include "../../../JIntArray.hpp"
#include "../../os/Handler.def.hpp"
#include "../../view/InputDevice.def.hpp"
#include "../../view/InputEvent.def.hpp"
#include "../../view/VerifiedInputEvent.def.hpp"
#include "../../../JString.hpp"
#include "./InputManager.def.hpp"

namespace android::hardware::input
{
	// Fields
	inline JString InputManager::ACTION_QUERY_KEYBOARD_LAYOUTS()
	{
		return getStaticObjectField(
			"android.hardware.input.InputManager",
			"ACTION_QUERY_KEYBOARD_LAYOUTS",
			"Ljava/lang/String;"
		);
	}
	inline JString InputManager::META_DATA_KEYBOARD_LAYOUTS()
	{
		return getStaticObjectField(
			"android.hardware.input.InputManager",
			"META_DATA_KEYBOARD_LAYOUTS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::InputDevice InputManager::getInputDevice(jint arg0) const
	{
		return callObjectMethod(
			"getInputDevice",
			"(I)Landroid/view/InputDevice;",
			arg0
		);
	}
	inline JIntArray InputManager::getInputDeviceIds() const
	{
		return callObjectMethod(
			"getInputDeviceIds",
			"()[I"
		);
	}
	inline void InputManager::registerInputDeviceListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerInputDeviceListener",
			"(Landroid/hardware/input/InputManager$InputDeviceListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void InputManager::unregisterInputDeviceListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterInputDeviceListener",
			"(Landroid/hardware/input/InputManager$InputDeviceListener;)V",
			arg0.object()
		);
	}
	inline android::view::VerifiedInputEvent InputManager::verifyInputEvent(android::view::InputEvent arg0) const
	{
		return callObjectMethod(
			"verifyInputEvent",
			"(Landroid/view/InputEvent;)Landroid/view/VerifiedInputEvent;",
			arg0.object()
		);
	}
} // namespace android::hardware::input

// Base class headers

