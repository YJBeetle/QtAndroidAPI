#pragma once

#include "../../JCharArray.hpp"
#include "../os/Parcel.def.hpp"
#include "./KeyCharacterMap.def.hpp"
#include "./KeyCharacterMap_KeyData.def.hpp"
#include "./KeyEvent_DispatcherState.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./KeyEvent.def.hpp"

namespace android::view
{
	// Fields
	inline jint KeyEvent::ACTION_DOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"ACTION_DOWN"
		);
	}
	inline jint KeyEvent::ACTION_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"ACTION_MULTIPLE"
		);
	}
	inline jint KeyEvent::ACTION_UP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"ACTION_UP"
		);
	}
	inline JObject KeyEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.KeyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint KeyEvent::FLAG_CANCELED()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_CANCELED"
		);
	}
	inline jint KeyEvent::FLAG_CANCELED_LONG_PRESS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_CANCELED_LONG_PRESS"
		);
	}
	inline jint KeyEvent::FLAG_EDITOR_ACTION()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_EDITOR_ACTION"
		);
	}
	inline jint KeyEvent::FLAG_FALLBACK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_FALLBACK"
		);
	}
	inline jint KeyEvent::FLAG_FROM_SYSTEM()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_FROM_SYSTEM"
		);
	}
	inline jint KeyEvent::FLAG_KEEP_TOUCH_MODE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_KEEP_TOUCH_MODE"
		);
	}
	inline jint KeyEvent::FLAG_LONG_PRESS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_LONG_PRESS"
		);
	}
	inline jint KeyEvent::FLAG_SOFT_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_SOFT_KEYBOARD"
		);
	}
	inline jint KeyEvent::FLAG_TRACKING()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_TRACKING"
		);
	}
	inline jint KeyEvent::FLAG_VIRTUAL_HARD_KEY()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_VIRTUAL_HARD_KEY"
		);
	}
	inline jint KeyEvent::FLAG_WOKE_HERE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_WOKE_HERE"
		);
	}
	inline jint KeyEvent::KEYCODE_0()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_0"
		);
	}
	inline jint KeyEvent::KEYCODE_1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_1"
		);
	}
	inline jint KeyEvent::KEYCODE_11()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_11"
		);
	}
	inline jint KeyEvent::KEYCODE_12()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_12"
		);
	}
	inline jint KeyEvent::KEYCODE_2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_2"
		);
	}
	inline jint KeyEvent::KEYCODE_3()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_3"
		);
	}
	inline jint KeyEvent::KEYCODE_3D_MODE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_3D_MODE"
		);
	}
	inline jint KeyEvent::KEYCODE_4()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_4"
		);
	}
	inline jint KeyEvent::KEYCODE_5()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_5"
		);
	}
	inline jint KeyEvent::KEYCODE_6()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_6"
		);
	}
	inline jint KeyEvent::KEYCODE_7()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_7"
		);
	}
	inline jint KeyEvent::KEYCODE_8()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_8"
		);
	}
	inline jint KeyEvent::KEYCODE_9()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_9"
		);
	}
	inline jint KeyEvent::KEYCODE_A()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_A"
		);
	}
	inline jint KeyEvent::KEYCODE_ALL_APPS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ALL_APPS"
		);
	}
	inline jint KeyEvent::KEYCODE_ALT_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ALT_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_ALT_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ALT_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_APOSTROPHE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_APOSTROPHE"
		);
	}
	inline jint KeyEvent::KEYCODE_APP_SWITCH()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_APP_SWITCH"
		);
	}
	inline jint KeyEvent::KEYCODE_ASSIST()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ASSIST"
		);
	}
	inline jint KeyEvent::KEYCODE_AT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_AT"
		);
	}
	inline jint KeyEvent::KEYCODE_AVR_INPUT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_AVR_INPUT"
		);
	}
	inline jint KeyEvent::KEYCODE_AVR_POWER()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_AVR_POWER"
		);
	}
	inline jint KeyEvent::KEYCODE_B()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_B"
		);
	}
	inline jint KeyEvent::KEYCODE_BACK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BACK"
		);
	}
	inline jint KeyEvent::KEYCODE_BACKSLASH()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BACKSLASH"
		);
	}
	inline jint KeyEvent::KEYCODE_BOOKMARK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BOOKMARK"
		);
	}
	inline jint KeyEvent::KEYCODE_BREAK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BREAK"
		);
	}
	inline jint KeyEvent::KEYCODE_BRIGHTNESS_DOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BRIGHTNESS_DOWN"
		);
	}
	inline jint KeyEvent::KEYCODE_BRIGHTNESS_UP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BRIGHTNESS_UP"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_1"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_10()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_10"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_11()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_11"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_12()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_12"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_13()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_13"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_14()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_14"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_15()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_15"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_16()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_16"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_2"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_3()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_3"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_4()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_4"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_5()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_5"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_6()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_6"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_7()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_7"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_8()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_8"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_9()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_9"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_A()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_A"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_B()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_B"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_C()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_C"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_L1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_L1"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_L2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_L2"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_MODE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_MODE"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_R1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_R1"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_R2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_R2"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_SELECT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_SELECT"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_START()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_START"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_THUMBL()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_THUMBL"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_THUMBR()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_THUMBR"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_X()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_X"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_Y()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_Y"
		);
	}
	inline jint KeyEvent::KEYCODE_BUTTON_Z()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_Z"
		);
	}
	inline jint KeyEvent::KEYCODE_C()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_C"
		);
	}
	inline jint KeyEvent::KEYCODE_CALCULATOR()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CALCULATOR"
		);
	}
	inline jint KeyEvent::KEYCODE_CALENDAR()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CALENDAR"
		);
	}
	inline jint KeyEvent::KEYCODE_CALL()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CALL"
		);
	}
	inline jint KeyEvent::KEYCODE_CAMERA()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CAMERA"
		);
	}
	inline jint KeyEvent::KEYCODE_CAPS_LOCK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CAPS_LOCK"
		);
	}
	inline jint KeyEvent::KEYCODE_CAPTIONS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CAPTIONS"
		);
	}
	inline jint KeyEvent::KEYCODE_CHANNEL_DOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CHANNEL_DOWN"
		);
	}
	inline jint KeyEvent::KEYCODE_CHANNEL_UP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CHANNEL_UP"
		);
	}
	inline jint KeyEvent::KEYCODE_CLEAR()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CLEAR"
		);
	}
	inline jint KeyEvent::KEYCODE_COMMA()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_COMMA"
		);
	}
	inline jint KeyEvent::KEYCODE_CONTACTS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CONTACTS"
		);
	}
	inline jint KeyEvent::KEYCODE_COPY()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_COPY"
		);
	}
	inline jint KeyEvent::KEYCODE_CTRL_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CTRL_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_CTRL_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CTRL_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_CUT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CUT"
		);
	}
	inline jint KeyEvent::KEYCODE_D()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_D"
		);
	}
	inline jint KeyEvent::KEYCODE_DEL()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DEL"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_CENTER()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_CENTER"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_DOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_DOWN"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_DOWN_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_DOWN_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_DOWN_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_DOWN_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_UP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_UP"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_UP_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_UP_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_DPAD_UP_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_UP_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_DVR()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DVR"
		);
	}
	inline jint KeyEvent::KEYCODE_E()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_E"
		);
	}
	inline jint KeyEvent::KEYCODE_EISU()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_EISU"
		);
	}
	inline jint KeyEvent::KEYCODE_ENDCALL()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ENDCALL"
		);
	}
	inline jint KeyEvent::KEYCODE_ENTER()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ENTER"
		);
	}
	inline jint KeyEvent::KEYCODE_ENVELOPE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ENVELOPE"
		);
	}
	inline jint KeyEvent::KEYCODE_EQUALS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_EQUALS"
		);
	}
	inline jint KeyEvent::KEYCODE_ESCAPE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ESCAPE"
		);
	}
	inline jint KeyEvent::KEYCODE_EXPLORER()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_EXPLORER"
		);
	}
	inline jint KeyEvent::KEYCODE_F()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F"
		);
	}
	inline jint KeyEvent::KEYCODE_F1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F1"
		);
	}
	inline jint KeyEvent::KEYCODE_F10()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F10"
		);
	}
	inline jint KeyEvent::KEYCODE_F11()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F11"
		);
	}
	inline jint KeyEvent::KEYCODE_F12()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F12"
		);
	}
	inline jint KeyEvent::KEYCODE_F2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F2"
		);
	}
	inline jint KeyEvent::KEYCODE_F3()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F3"
		);
	}
	inline jint KeyEvent::KEYCODE_F4()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F4"
		);
	}
	inline jint KeyEvent::KEYCODE_F5()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F5"
		);
	}
	inline jint KeyEvent::KEYCODE_F6()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F6"
		);
	}
	inline jint KeyEvent::KEYCODE_F7()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F7"
		);
	}
	inline jint KeyEvent::KEYCODE_F8()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F8"
		);
	}
	inline jint KeyEvent::KEYCODE_F9()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F9"
		);
	}
	inline jint KeyEvent::KEYCODE_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_FOCUS"
		);
	}
	inline jint KeyEvent::KEYCODE_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_FORWARD"
		);
	}
	inline jint KeyEvent::KEYCODE_FORWARD_DEL()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_FORWARD_DEL"
		);
	}
	inline jint KeyEvent::KEYCODE_FUNCTION()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_FUNCTION"
		);
	}
	inline jint KeyEvent::KEYCODE_G()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_G"
		);
	}
	inline jint KeyEvent::KEYCODE_GRAVE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_GRAVE"
		);
	}
	inline jint KeyEvent::KEYCODE_GUIDE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_GUIDE"
		);
	}
	inline jint KeyEvent::KEYCODE_H()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_H"
		);
	}
	inline jint KeyEvent::KEYCODE_HEADSETHOOK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_HEADSETHOOK"
		);
	}
	inline jint KeyEvent::KEYCODE_HELP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_HELP"
		);
	}
	inline jint KeyEvent::KEYCODE_HENKAN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_HENKAN"
		);
	}
	inline jint KeyEvent::KEYCODE_HOME()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_HOME"
		);
	}
	inline jint KeyEvent::KEYCODE_I()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_I"
		);
	}
	inline jint KeyEvent::KEYCODE_INFO()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_INFO"
		);
	}
	inline jint KeyEvent::KEYCODE_INSERT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_INSERT"
		);
	}
	inline jint KeyEvent::KEYCODE_J()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_J"
		);
	}
	inline jint KeyEvent::KEYCODE_K()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_K"
		);
	}
	inline jint KeyEvent::KEYCODE_KANA()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_KANA"
		);
	}
	inline jint KeyEvent::KEYCODE_KATAKANA_HIRAGANA()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_KATAKANA_HIRAGANA"
		);
	}
	inline jint KeyEvent::KEYCODE_L()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_L"
		);
	}
	inline jint KeyEvent::KEYCODE_LANGUAGE_SWITCH()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_LANGUAGE_SWITCH"
		);
	}
	inline jint KeyEvent::KEYCODE_LAST_CHANNEL()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_LAST_CHANNEL"
		);
	}
	inline jint KeyEvent::KEYCODE_LEFT_BRACKET()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_LEFT_BRACKET"
		);
	}
	inline jint KeyEvent::KEYCODE_M()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_M"
		);
	}
	inline jint KeyEvent::KEYCODE_MANNER_MODE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MANNER_MODE"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_AUDIO_TRACK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_AUDIO_TRACK"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_CLOSE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_CLOSE"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_EJECT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_EJECT"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_FAST_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_FAST_FORWARD"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_NEXT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_NEXT"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_PAUSE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_PAUSE"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_PLAY()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_PLAY"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_PLAY_PAUSE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_PLAY_PAUSE"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_PREVIOUS"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_RECORD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_RECORD"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_REWIND()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_REWIND"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_SKIP_BACKWARD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_SKIP_BACKWARD"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_SKIP_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_SKIP_FORWARD"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_STEP_BACKWARD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_STEP_BACKWARD"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_STEP_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_STEP_FORWARD"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_STOP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_STOP"
		);
	}
	inline jint KeyEvent::KEYCODE_MEDIA_TOP_MENU()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_TOP_MENU"
		);
	}
	inline jint KeyEvent::KEYCODE_MENU()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MENU"
		);
	}
	inline jint KeyEvent::KEYCODE_META_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_META_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_META_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_META_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_MINUS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MINUS"
		);
	}
	inline jint KeyEvent::KEYCODE_MOVE_END()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MOVE_END"
		);
	}
	inline jint KeyEvent::KEYCODE_MOVE_HOME()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MOVE_HOME"
		);
	}
	inline jint KeyEvent::KEYCODE_MUHENKAN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MUHENKAN"
		);
	}
	inline jint KeyEvent::KEYCODE_MUSIC()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MUSIC"
		);
	}
	inline jint KeyEvent::KEYCODE_MUTE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MUTE"
		);
	}
	inline jint KeyEvent::KEYCODE_N()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_N"
		);
	}
	inline jint KeyEvent::KEYCODE_NAVIGATE_IN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NAVIGATE_IN"
		);
	}
	inline jint KeyEvent::KEYCODE_NAVIGATE_NEXT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NAVIGATE_NEXT"
		);
	}
	inline jint KeyEvent::KEYCODE_NAVIGATE_OUT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NAVIGATE_OUT"
		);
	}
	inline jint KeyEvent::KEYCODE_NAVIGATE_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NAVIGATE_PREVIOUS"
		);
	}
	inline jint KeyEvent::KEYCODE_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NOTIFICATION"
		);
	}
	inline jint KeyEvent::KEYCODE_NUM()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUM"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_0()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_0"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_1"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_2"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_3()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_3"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_4()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_4"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_5()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_5"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_6()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_6"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_7()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_7"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_8()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_8"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_9()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_9"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_ADD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_ADD"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_COMMA()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_COMMA"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_DIVIDE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_DIVIDE"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_DOT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_DOT"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_ENTER()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_ENTER"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_EQUALS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_EQUALS"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_LEFT_PAREN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_LEFT_PAREN"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_MULTIPLY()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_MULTIPLY"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_RIGHT_PAREN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_RIGHT_PAREN"
		);
	}
	inline jint KeyEvent::KEYCODE_NUMPAD_SUBTRACT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_SUBTRACT"
		);
	}
	inline jint KeyEvent::KEYCODE_NUM_LOCK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUM_LOCK"
		);
	}
	inline jint KeyEvent::KEYCODE_O()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_O"
		);
	}
	inline jint KeyEvent::KEYCODE_P()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_P"
		);
	}
	inline jint KeyEvent::KEYCODE_PAGE_DOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PAGE_DOWN"
		);
	}
	inline jint KeyEvent::KEYCODE_PAGE_UP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PAGE_UP"
		);
	}
	inline jint KeyEvent::KEYCODE_PAIRING()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PAIRING"
		);
	}
	inline jint KeyEvent::KEYCODE_PASTE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PASTE"
		);
	}
	inline jint KeyEvent::KEYCODE_PERIOD()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PERIOD"
		);
	}
	inline jint KeyEvent::KEYCODE_PICTSYMBOLS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PICTSYMBOLS"
		);
	}
	inline jint KeyEvent::KEYCODE_PLUS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PLUS"
		);
	}
	inline jint KeyEvent::KEYCODE_POUND()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_POUND"
		);
	}
	inline jint KeyEvent::KEYCODE_POWER()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_POWER"
		);
	}
	inline jint KeyEvent::KEYCODE_PROG_BLUE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROG_BLUE"
		);
	}
	inline jint KeyEvent::KEYCODE_PROG_GREEN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROG_GREEN"
		);
	}
	inline jint KeyEvent::KEYCODE_PROG_RED()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROG_RED"
		);
	}
	inline jint KeyEvent::KEYCODE_PROG_YELLOW()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROG_YELLOW"
		);
	}
	inline jint KeyEvent::KEYCODE_Q()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_Q"
		);
	}
	inline jint KeyEvent::KEYCODE_R()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_R"
		);
	}
	inline jint KeyEvent::KEYCODE_REFRESH()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_REFRESH"
		);
	}
	inline jint KeyEvent::KEYCODE_RIGHT_BRACKET()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_RIGHT_BRACKET"
		);
	}
	inline jint KeyEvent::KEYCODE_RO()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_RO"
		);
	}
	inline jint KeyEvent::KEYCODE_S()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_S"
		);
	}
	inline jint KeyEvent::KEYCODE_SCROLL_LOCK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SCROLL_LOCK"
		);
	}
	inline jint KeyEvent::KEYCODE_SEARCH()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SEARCH"
		);
	}
	inline jint KeyEvent::KEYCODE_SEMICOLON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SEMICOLON"
		);
	}
	inline jint KeyEvent::KEYCODE_SETTINGS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SETTINGS"
		);
	}
	inline jint KeyEvent::KEYCODE_SHIFT_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SHIFT_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_SHIFT_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SHIFT_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_SLASH()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SLASH"
		);
	}
	inline jint KeyEvent::KEYCODE_SLEEP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SLEEP"
		);
	}
	inline jint KeyEvent::KEYCODE_SOFT_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SOFT_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_SOFT_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SOFT_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_SOFT_SLEEP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SOFT_SLEEP"
		);
	}
	inline jint KeyEvent::KEYCODE_SPACE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SPACE"
		);
	}
	inline jint KeyEvent::KEYCODE_STAR()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STAR"
		);
	}
	inline jint KeyEvent::KEYCODE_STB_INPUT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STB_INPUT"
		);
	}
	inline jint KeyEvent::KEYCODE_STB_POWER()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STB_POWER"
		);
	}
	inline jint KeyEvent::KEYCODE_STEM_1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STEM_1"
		);
	}
	inline jint KeyEvent::KEYCODE_STEM_2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STEM_2"
		);
	}
	inline jint KeyEvent::KEYCODE_STEM_3()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STEM_3"
		);
	}
	inline jint KeyEvent::KEYCODE_STEM_PRIMARY()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STEM_PRIMARY"
		);
	}
	inline jint KeyEvent::KEYCODE_SWITCH_CHARSET()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SWITCH_CHARSET"
		);
	}
	inline jint KeyEvent::KEYCODE_SYM()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYM"
		);
	}
	inline jint KeyEvent::KEYCODE_SYSRQ()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSRQ"
		);
	}
	inline jint KeyEvent::KEYCODE_SYSTEM_NAVIGATION_DOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSTEM_NAVIGATION_DOWN"
		);
	}
	inline jint KeyEvent::KEYCODE_SYSTEM_NAVIGATION_LEFT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSTEM_NAVIGATION_LEFT"
		);
	}
	inline jint KeyEvent::KEYCODE_SYSTEM_NAVIGATION_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSTEM_NAVIGATION_RIGHT"
		);
	}
	inline jint KeyEvent::KEYCODE_SYSTEM_NAVIGATION_UP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSTEM_NAVIGATION_UP"
		);
	}
	inline jint KeyEvent::KEYCODE_T()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_T"
		);
	}
	inline jint KeyEvent::KEYCODE_TAB()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TAB"
		);
	}
	inline jint KeyEvent::KEYCODE_TV()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_ANTENNA_CABLE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_ANTENNA_CABLE"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_AUDIO_DESCRIPTION()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_AUDIO_DESCRIPTION"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_CONTENTS_MENU()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_CONTENTS_MENU"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_DATA_SERVICE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_DATA_SERVICE"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_COMPONENT_1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_COMPONENT_1"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_COMPONENT_2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_COMPONENT_2"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_COMPOSITE_1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_COMPOSITE_1"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_COMPOSITE_2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_COMPOSITE_2"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_HDMI_1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_HDMI_1"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_HDMI_2()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_HDMI_2"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_HDMI_3()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_HDMI_3"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_HDMI_4()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_HDMI_4"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_INPUT_VGA_1()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_VGA_1"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_MEDIA_CONTEXT_MENU()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_MEDIA_CONTEXT_MENU"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_NETWORK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_NETWORK"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_NUMBER_ENTRY()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_NUMBER_ENTRY"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_POWER()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_POWER"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_RADIO_SERVICE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_RADIO_SERVICE"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_SATELLITE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_SATELLITE"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_SATELLITE_BS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_SATELLITE_BS"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_SATELLITE_CS()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_SATELLITE_CS"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_SATELLITE_SERVICE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_SATELLITE_SERVICE"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_TELETEXT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_TELETEXT"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_TERRESTRIAL_ANALOG()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_TERRESTRIAL_ANALOG"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_TERRESTRIAL_DIGITAL()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_TERRESTRIAL_DIGITAL"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_TIMER_PROGRAMMING()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_TIMER_PROGRAMMING"
		);
	}
	inline jint KeyEvent::KEYCODE_TV_ZOOM_MODE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_ZOOM_MODE"
		);
	}
	inline jint KeyEvent::KEYCODE_U()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_U"
		);
	}
	inline jint KeyEvent::KEYCODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_UNKNOWN"
		);
	}
	inline jint KeyEvent::KEYCODE_V()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_V"
		);
	}
	inline jint KeyEvent::KEYCODE_VOICE_ASSIST()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_VOICE_ASSIST"
		);
	}
	inline jint KeyEvent::KEYCODE_VOLUME_DOWN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_VOLUME_DOWN"
		);
	}
	inline jint KeyEvent::KEYCODE_VOLUME_MUTE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_VOLUME_MUTE"
		);
	}
	inline jint KeyEvent::KEYCODE_VOLUME_UP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_VOLUME_UP"
		);
	}
	inline jint KeyEvent::KEYCODE_W()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_W"
		);
	}
	inline jint KeyEvent::KEYCODE_WAKEUP()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_WAKEUP"
		);
	}
	inline jint KeyEvent::KEYCODE_WINDOW()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_WINDOW"
		);
	}
	inline jint KeyEvent::KEYCODE_X()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_X"
		);
	}
	inline jint KeyEvent::KEYCODE_Y()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_Y"
		);
	}
	inline jint KeyEvent::KEYCODE_YEN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_YEN"
		);
	}
	inline jint KeyEvent::KEYCODE_Z()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_Z"
		);
	}
	inline jint KeyEvent::KEYCODE_ZENKAKU_HANKAKU()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ZENKAKU_HANKAKU"
		);
	}
	inline jint KeyEvent::KEYCODE_ZOOM_IN()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ZOOM_IN"
		);
	}
	inline jint KeyEvent::KEYCODE_ZOOM_OUT()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ZOOM_OUT"
		);
	}
	inline jint KeyEvent::MAX_KEYCODE()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"MAX_KEYCODE"
		);
	}
	inline jint KeyEvent::META_ALT_LEFT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_ALT_LEFT_ON"
		);
	}
	inline jint KeyEvent::META_ALT_MASK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_ALT_MASK"
		);
	}
	inline jint KeyEvent::META_ALT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_ALT_ON"
		);
	}
	inline jint KeyEvent::META_ALT_RIGHT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_ALT_RIGHT_ON"
		);
	}
	inline jint KeyEvent::META_CAPS_LOCK_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CAPS_LOCK_ON"
		);
	}
	inline jint KeyEvent::META_CTRL_LEFT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CTRL_LEFT_ON"
		);
	}
	inline jint KeyEvent::META_CTRL_MASK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CTRL_MASK"
		);
	}
	inline jint KeyEvent::META_CTRL_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CTRL_ON"
		);
	}
	inline jint KeyEvent::META_CTRL_RIGHT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CTRL_RIGHT_ON"
		);
	}
	inline jint KeyEvent::META_FUNCTION_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_FUNCTION_ON"
		);
	}
	inline jint KeyEvent::META_META_LEFT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_META_LEFT_ON"
		);
	}
	inline jint KeyEvent::META_META_MASK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_META_MASK"
		);
	}
	inline jint KeyEvent::META_META_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_META_ON"
		);
	}
	inline jint KeyEvent::META_META_RIGHT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_META_RIGHT_ON"
		);
	}
	inline jint KeyEvent::META_NUM_LOCK_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_NUM_LOCK_ON"
		);
	}
	inline jint KeyEvent::META_SCROLL_LOCK_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SCROLL_LOCK_ON"
		);
	}
	inline jint KeyEvent::META_SHIFT_LEFT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SHIFT_LEFT_ON"
		);
	}
	inline jint KeyEvent::META_SHIFT_MASK()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SHIFT_MASK"
		);
	}
	inline jint KeyEvent::META_SHIFT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SHIFT_ON"
		);
	}
	inline jint KeyEvent::META_SHIFT_RIGHT_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SHIFT_RIGHT_ON"
		);
	}
	inline jint KeyEvent::META_SYM_ON()
	{
		return getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SYM_ON"
		);
	}
	
	// Constructors
	inline KeyEvent::KeyEvent(android::view::KeyEvent &arg0)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		) {}
	inline KeyEvent::KeyEvent(jint arg0, jint arg1)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(II)V",
			arg0,
			arg1
		) {}
	inline KeyEvent::KeyEvent(android::view::KeyEvent &arg0, jlong arg1, jint arg2)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(Landroid/view/KeyEvent;JI)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline KeyEvent::KeyEvent(jlong arg0, JString arg1, jint arg2, jint arg3)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(JLjava/lang/String;II)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		) {}
	inline KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(JJIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(JJIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	inline KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(JJIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	inline KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(JJIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
		) {}
	inline KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(JJIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		) {}
	
	// Methods
	inline android::view::KeyEvent KeyEvent::changeAction(android::view::KeyEvent arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeAction",
			"(Landroid/view/KeyEvent;I)Landroid/view/KeyEvent;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::KeyEvent KeyEvent::changeFlags(android::view::KeyEvent arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeFlags",
			"(Landroid/view/KeyEvent;I)Landroid/view/KeyEvent;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::KeyEvent KeyEvent::changeTimeRepeat(android::view::KeyEvent arg0, jlong arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeTimeRepeat",
			"(Landroid/view/KeyEvent;JI)Landroid/view/KeyEvent;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::view::KeyEvent KeyEvent::changeTimeRepeat(android::view::KeyEvent arg0, jlong arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeTimeRepeat",
			"(Landroid/view/KeyEvent;JII)Landroid/view/KeyEvent;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint KeyEvent::getDeadChar(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.KeyEvent",
			"getDeadChar",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint KeyEvent::getMaxKeyCode()
	{
		return callStaticMethod<jint>(
			"android.view.KeyEvent",
			"getMaxKeyCode",
			"()I"
		);
	}
	inline jint KeyEvent::getModifierMetaStateMask()
	{
		return callStaticMethod<jint>(
			"android.view.KeyEvent",
			"getModifierMetaStateMask",
			"()I"
		);
	}
	inline jboolean KeyEvent::isGamepadButton(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"isGamepadButton",
			"(I)Z",
			arg0
		);
	}
	inline jboolean KeyEvent::isModifierKey(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"isModifierKey",
			"(I)Z",
			arg0
		);
	}
	inline jint KeyEvent::keyCodeFromString(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.view.KeyEvent",
			"keyCodeFromString",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString KeyEvent::keyCodeToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.KeyEvent",
			"keyCodeToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jboolean KeyEvent::metaStateHasModifiers(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"metaStateHasModifiers",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean KeyEvent::metaStateHasNoModifiers(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"metaStateHasNoModifiers",
			"(I)Z",
			arg0
		);
	}
	inline jint KeyEvent::normalizeMetaState(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.view.KeyEvent",
			"normalizeMetaState",
			"(I)I",
			arg0
		);
	}
	inline jboolean KeyEvent::dispatch(JObject arg0) const
	{
		return callMethod<jboolean>(
			"dispatch",
			"(Landroid/view/KeyEvent$Callback;)Z",
			arg0.object()
		);
	}
	inline jboolean KeyEvent::dispatch(JObject arg0, android::view::KeyEvent_DispatcherState arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"dispatch",
			"(Landroid/view/KeyEvent$Callback;Landroid/view/KeyEvent$DispatcherState;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jobject>()
		);
	}
	inline jint KeyEvent::getAction() const
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	inline JString KeyEvent::getCharacters() const
	{
		return callObjectMethod(
			"getCharacters",
			"()Ljava/lang/String;"
		);
	}
	inline jint KeyEvent::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	inline jchar KeyEvent::getDisplayLabel() const
	{
		return callMethod<jchar>(
			"getDisplayLabel",
			"()C"
		);
	}
	inline jlong KeyEvent::getDownTime() const
	{
		return callMethod<jlong>(
			"getDownTime",
			"()J"
		);
	}
	inline jlong KeyEvent::getEventTime() const
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	inline jint KeyEvent::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline android::view::KeyCharacterMap KeyEvent::getKeyCharacterMap() const
	{
		return callObjectMethod(
			"getKeyCharacterMap",
			"()Landroid/view/KeyCharacterMap;"
		);
	}
	inline jint KeyEvent::getKeyCode() const
	{
		return callMethod<jint>(
			"getKeyCode",
			"()I"
		);
	}
	inline jboolean KeyEvent::getKeyData(android::view::KeyCharacterMap_KeyData arg0) const
	{
		return callMethod<jboolean>(
			"getKeyData",
			"(Landroid/view/KeyCharacterMap$KeyData;)Z",
			arg0.object()
		);
	}
	inline jchar KeyEvent::getMatch(JCharArray arg0) const
	{
		return callMethod<jchar>(
			"getMatch",
			"([C)C",
			arg0.object<jcharArray>()
		);
	}
	inline jchar KeyEvent::getMatch(JCharArray arg0, jint arg1) const
	{
		return callMethod<jchar>(
			"getMatch",
			"([CI)C",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline jint KeyEvent::getMetaState() const
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	inline jint KeyEvent::getModifiers() const
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	inline jchar KeyEvent::getNumber() const
	{
		return callMethod<jchar>(
			"getNumber",
			"()C"
		);
	}
	inline jint KeyEvent::getRepeatCount() const
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	inline jint KeyEvent::getScanCode() const
	{
		return callMethod<jint>(
			"getScanCode",
			"()I"
		);
	}
	inline jint KeyEvent::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	inline jint KeyEvent::getUnicodeChar() const
	{
		return callMethod<jint>(
			"getUnicodeChar",
			"()I"
		);
	}
	inline jint KeyEvent::getUnicodeChar(jint arg0) const
	{
		return callMethod<jint>(
			"getUnicodeChar",
			"(I)I",
			arg0
		);
	}
	inline jboolean KeyEvent::hasModifiers(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasModifiers",
			"(I)Z",
			arg0
		);
	}
	inline jboolean KeyEvent::hasNoModifiers() const
	{
		return callMethod<jboolean>(
			"hasNoModifiers",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isAltPressed() const
	{
		return callMethod<jboolean>(
			"isAltPressed",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isCanceled() const
	{
		return callMethod<jboolean>(
			"isCanceled",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isCapsLockOn() const
	{
		return callMethod<jboolean>(
			"isCapsLockOn",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isCtrlPressed() const
	{
		return callMethod<jboolean>(
			"isCtrlPressed",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isFunctionPressed() const
	{
		return callMethod<jboolean>(
			"isFunctionPressed",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isLongPress() const
	{
		return callMethod<jboolean>(
			"isLongPress",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isMetaPressed() const
	{
		return callMethod<jboolean>(
			"isMetaPressed",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isNumLockOn() const
	{
		return callMethod<jboolean>(
			"isNumLockOn",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isPrintingKey() const
	{
		return callMethod<jboolean>(
			"isPrintingKey",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isScrollLockOn() const
	{
		return callMethod<jboolean>(
			"isScrollLockOn",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isShiftPressed() const
	{
		return callMethod<jboolean>(
			"isShiftPressed",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isSymPressed() const
	{
		return callMethod<jboolean>(
			"isSymPressed",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isSystem() const
	{
		return callMethod<jboolean>(
			"isSystem",
			"()Z"
		);
	}
	inline jboolean KeyEvent::isTracking() const
	{
		return callMethod<jboolean>(
			"isTracking",
			"()Z"
		);
	}
	inline void KeyEvent::setSource(jint arg0) const
	{
		callMethod<void>(
			"setSource",
			"(I)V",
			arg0
		);
	}
	inline void KeyEvent::startTracking() const
	{
		callMethod<void>(
			"startTracking",
			"()V"
		);
	}
	inline JString KeyEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void KeyEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./InputEvent.hpp"

