#include "../os/Parcel.hpp"
#include "./KeyCharacterMap.hpp"
#include "./KeyCharacterMap_KeyData.hpp"
#include "./KeyEvent_DispatcherState.hpp"
#include "./KeyEvent.hpp"

namespace android::view
{
	// Fields
	jint KeyEvent::ACTION_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"ACTION_DOWN"
		);
	}
	jint KeyEvent::ACTION_MULTIPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"ACTION_MULTIPLE"
		);
	}
	jint KeyEvent::ACTION_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"ACTION_UP"
		);
	}
	QAndroidJniObject KeyEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.KeyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint KeyEvent::FLAG_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_CANCELED"
		);
	}
	jint KeyEvent::FLAG_CANCELED_LONG_PRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_CANCELED_LONG_PRESS"
		);
	}
	jint KeyEvent::FLAG_EDITOR_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_EDITOR_ACTION"
		);
	}
	jint KeyEvent::FLAG_FALLBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_FALLBACK"
		);
	}
	jint KeyEvent::FLAG_FROM_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_FROM_SYSTEM"
		);
	}
	jint KeyEvent::FLAG_KEEP_TOUCH_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_KEEP_TOUCH_MODE"
		);
	}
	jint KeyEvent::FLAG_LONG_PRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_LONG_PRESS"
		);
	}
	jint KeyEvent::FLAG_SOFT_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_SOFT_KEYBOARD"
		);
	}
	jint KeyEvent::FLAG_TRACKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_TRACKING"
		);
	}
	jint KeyEvent::FLAG_VIRTUAL_HARD_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_VIRTUAL_HARD_KEY"
		);
	}
	jint KeyEvent::FLAG_WOKE_HERE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"FLAG_WOKE_HERE"
		);
	}
	jint KeyEvent::KEYCODE_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_0"
		);
	}
	jint KeyEvent::KEYCODE_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_1"
		);
	}
	jint KeyEvent::KEYCODE_11()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_11"
		);
	}
	jint KeyEvent::KEYCODE_12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_12"
		);
	}
	jint KeyEvent::KEYCODE_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_2"
		);
	}
	jint KeyEvent::KEYCODE_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_3"
		);
	}
	jint KeyEvent::KEYCODE_3D_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_3D_MODE"
		);
	}
	jint KeyEvent::KEYCODE_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_4"
		);
	}
	jint KeyEvent::KEYCODE_5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_5"
		);
	}
	jint KeyEvent::KEYCODE_6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_6"
		);
	}
	jint KeyEvent::KEYCODE_7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_7"
		);
	}
	jint KeyEvent::KEYCODE_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_8"
		);
	}
	jint KeyEvent::KEYCODE_9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_9"
		);
	}
	jint KeyEvent::KEYCODE_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_A"
		);
	}
	jint KeyEvent::KEYCODE_ALL_APPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ALL_APPS"
		);
	}
	jint KeyEvent::KEYCODE_ALT_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ALT_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_ALT_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ALT_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_APOSTROPHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_APOSTROPHE"
		);
	}
	jint KeyEvent::KEYCODE_APP_SWITCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_APP_SWITCH"
		);
	}
	jint KeyEvent::KEYCODE_ASSIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ASSIST"
		);
	}
	jint KeyEvent::KEYCODE_AT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_AT"
		);
	}
	jint KeyEvent::KEYCODE_AVR_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_AVR_INPUT"
		);
	}
	jint KeyEvent::KEYCODE_AVR_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_AVR_POWER"
		);
	}
	jint KeyEvent::KEYCODE_B()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_B"
		);
	}
	jint KeyEvent::KEYCODE_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BACK"
		);
	}
	jint KeyEvent::KEYCODE_BACKSLASH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BACKSLASH"
		);
	}
	jint KeyEvent::KEYCODE_BOOKMARK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BOOKMARK"
		);
	}
	jint KeyEvent::KEYCODE_BREAK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BREAK"
		);
	}
	jint KeyEvent::KEYCODE_BRIGHTNESS_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BRIGHTNESS_DOWN"
		);
	}
	jint KeyEvent::KEYCODE_BRIGHTNESS_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BRIGHTNESS_UP"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_1"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_10"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_11()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_11"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_12"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_13()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_13"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_14()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_14"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_15()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_15"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_16"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_2"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_3"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_4"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_5"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_6"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_7"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_8"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_9"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_A"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_B()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_B"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_C()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_C"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_L1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_L1"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_L2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_L2"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_MODE"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_R1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_R1"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_R2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_R2"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_SELECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_SELECT"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_START"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_THUMBL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_THUMBL"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_THUMBR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_THUMBR"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_X"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_Y"
		);
	}
	jint KeyEvent::KEYCODE_BUTTON_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_BUTTON_Z"
		);
	}
	jint KeyEvent::KEYCODE_C()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_C"
		);
	}
	jint KeyEvent::KEYCODE_CALCULATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CALCULATOR"
		);
	}
	jint KeyEvent::KEYCODE_CALENDAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CALENDAR"
		);
	}
	jint KeyEvent::KEYCODE_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CALL"
		);
	}
	jint KeyEvent::KEYCODE_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CAMERA"
		);
	}
	jint KeyEvent::KEYCODE_CAPS_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CAPS_LOCK"
		);
	}
	jint KeyEvent::KEYCODE_CAPTIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CAPTIONS"
		);
	}
	jint KeyEvent::KEYCODE_CHANNEL_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CHANNEL_DOWN"
		);
	}
	jint KeyEvent::KEYCODE_CHANNEL_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CHANNEL_UP"
		);
	}
	jint KeyEvent::KEYCODE_CLEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CLEAR"
		);
	}
	jint KeyEvent::KEYCODE_COMMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_COMMA"
		);
	}
	jint KeyEvent::KEYCODE_CONTACTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CONTACTS"
		);
	}
	jint KeyEvent::KEYCODE_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_COPY"
		);
	}
	jint KeyEvent::KEYCODE_CTRL_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CTRL_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_CTRL_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CTRL_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_CUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_CUT"
		);
	}
	jint KeyEvent::KEYCODE_D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_D"
		);
	}
	jint KeyEvent::KEYCODE_DEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DEL"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_CENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_CENTER"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_DOWN"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_DOWN_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_DOWN_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_DOWN_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_DOWN_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_UP"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_UP_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_UP_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_DPAD_UP_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DPAD_UP_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_DVR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_DVR"
		);
	}
	jint KeyEvent::KEYCODE_E()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_E"
		);
	}
	jint KeyEvent::KEYCODE_EISU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_EISU"
		);
	}
	jint KeyEvent::KEYCODE_ENDCALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ENDCALL"
		);
	}
	jint KeyEvent::KEYCODE_ENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ENTER"
		);
	}
	jint KeyEvent::KEYCODE_ENVELOPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ENVELOPE"
		);
	}
	jint KeyEvent::KEYCODE_EQUALS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_EQUALS"
		);
	}
	jint KeyEvent::KEYCODE_ESCAPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ESCAPE"
		);
	}
	jint KeyEvent::KEYCODE_EXPLORER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_EXPLORER"
		);
	}
	jint KeyEvent::KEYCODE_F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F"
		);
	}
	jint KeyEvent::KEYCODE_F1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F1"
		);
	}
	jint KeyEvent::KEYCODE_F10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F10"
		);
	}
	jint KeyEvent::KEYCODE_F11()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F11"
		);
	}
	jint KeyEvent::KEYCODE_F12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F12"
		);
	}
	jint KeyEvent::KEYCODE_F2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F2"
		);
	}
	jint KeyEvent::KEYCODE_F3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F3"
		);
	}
	jint KeyEvent::KEYCODE_F4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F4"
		);
	}
	jint KeyEvent::KEYCODE_F5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F5"
		);
	}
	jint KeyEvent::KEYCODE_F6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F6"
		);
	}
	jint KeyEvent::KEYCODE_F7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F7"
		);
	}
	jint KeyEvent::KEYCODE_F8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F8"
		);
	}
	jint KeyEvent::KEYCODE_F9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_F9"
		);
	}
	jint KeyEvent::KEYCODE_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_FOCUS"
		);
	}
	jint KeyEvent::KEYCODE_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_FORWARD"
		);
	}
	jint KeyEvent::KEYCODE_FORWARD_DEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_FORWARD_DEL"
		);
	}
	jint KeyEvent::KEYCODE_FUNCTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_FUNCTION"
		);
	}
	jint KeyEvent::KEYCODE_G()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_G"
		);
	}
	jint KeyEvent::KEYCODE_GRAVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_GRAVE"
		);
	}
	jint KeyEvent::KEYCODE_GUIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_GUIDE"
		);
	}
	jint KeyEvent::KEYCODE_H()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_H"
		);
	}
	jint KeyEvent::KEYCODE_HEADSETHOOK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_HEADSETHOOK"
		);
	}
	jint KeyEvent::KEYCODE_HELP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_HELP"
		);
	}
	jint KeyEvent::KEYCODE_HENKAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_HENKAN"
		);
	}
	jint KeyEvent::KEYCODE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_HOME"
		);
	}
	jint KeyEvent::KEYCODE_I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_I"
		);
	}
	jint KeyEvent::KEYCODE_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_INFO"
		);
	}
	jint KeyEvent::KEYCODE_INSERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_INSERT"
		);
	}
	jint KeyEvent::KEYCODE_J()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_J"
		);
	}
	jint KeyEvent::KEYCODE_K()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_K"
		);
	}
	jint KeyEvent::KEYCODE_KANA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_KANA"
		);
	}
	jint KeyEvent::KEYCODE_KATAKANA_HIRAGANA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_KATAKANA_HIRAGANA"
		);
	}
	jint KeyEvent::KEYCODE_L()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_L"
		);
	}
	jint KeyEvent::KEYCODE_LANGUAGE_SWITCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_LANGUAGE_SWITCH"
		);
	}
	jint KeyEvent::KEYCODE_LAST_CHANNEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_LAST_CHANNEL"
		);
	}
	jint KeyEvent::KEYCODE_LEFT_BRACKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_LEFT_BRACKET"
		);
	}
	jint KeyEvent::KEYCODE_M()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_M"
		);
	}
	jint KeyEvent::KEYCODE_MANNER_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MANNER_MODE"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_AUDIO_TRACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_AUDIO_TRACK"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_CLOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_CLOSE"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_EJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_EJECT"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_FAST_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_FAST_FORWARD"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_NEXT"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_PAUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_PAUSE"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_PLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_PLAY"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_PLAY_PAUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_PLAY_PAUSE"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_PREVIOUS"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_RECORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_RECORD"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_REWIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_REWIND"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_SKIP_BACKWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_SKIP_BACKWARD"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_SKIP_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_SKIP_FORWARD"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_STEP_BACKWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_STEP_BACKWARD"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_STEP_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_STEP_FORWARD"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_STOP"
		);
	}
	jint KeyEvent::KEYCODE_MEDIA_TOP_MENU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MEDIA_TOP_MENU"
		);
	}
	jint KeyEvent::KEYCODE_MENU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MENU"
		);
	}
	jint KeyEvent::KEYCODE_META_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_META_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_META_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_META_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_MINUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MINUS"
		);
	}
	jint KeyEvent::KEYCODE_MOVE_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MOVE_END"
		);
	}
	jint KeyEvent::KEYCODE_MOVE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MOVE_HOME"
		);
	}
	jint KeyEvent::KEYCODE_MUHENKAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MUHENKAN"
		);
	}
	jint KeyEvent::KEYCODE_MUSIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MUSIC"
		);
	}
	jint KeyEvent::KEYCODE_MUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_MUTE"
		);
	}
	jint KeyEvent::KEYCODE_N()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_N"
		);
	}
	jint KeyEvent::KEYCODE_NAVIGATE_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NAVIGATE_IN"
		);
	}
	jint KeyEvent::KEYCODE_NAVIGATE_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NAVIGATE_NEXT"
		);
	}
	jint KeyEvent::KEYCODE_NAVIGATE_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NAVIGATE_OUT"
		);
	}
	jint KeyEvent::KEYCODE_NAVIGATE_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NAVIGATE_PREVIOUS"
		);
	}
	jint KeyEvent::KEYCODE_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NOTIFICATION"
		);
	}
	jint KeyEvent::KEYCODE_NUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUM"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_0"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_1"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_2"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_3"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_4"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_5"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_6"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_7"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_8"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_9"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_ADD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_ADD"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_COMMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_COMMA"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_DIVIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_DIVIDE"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_DOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_DOT"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_ENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_ENTER"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_EQUALS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_EQUALS"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_LEFT_PAREN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_LEFT_PAREN"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_MULTIPLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_MULTIPLY"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_RIGHT_PAREN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_RIGHT_PAREN"
		);
	}
	jint KeyEvent::KEYCODE_NUMPAD_SUBTRACT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUMPAD_SUBTRACT"
		);
	}
	jint KeyEvent::KEYCODE_NUM_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_NUM_LOCK"
		);
	}
	jint KeyEvent::KEYCODE_O()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_O"
		);
	}
	jint KeyEvent::KEYCODE_P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_P"
		);
	}
	jint KeyEvent::KEYCODE_PAGE_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PAGE_DOWN"
		);
	}
	jint KeyEvent::KEYCODE_PAGE_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PAGE_UP"
		);
	}
	jint KeyEvent::KEYCODE_PAIRING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PAIRING"
		);
	}
	jint KeyEvent::KEYCODE_PASTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PASTE"
		);
	}
	jint KeyEvent::KEYCODE_PERIOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PERIOD"
		);
	}
	jint KeyEvent::KEYCODE_PICTSYMBOLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PICTSYMBOLS"
		);
	}
	jint KeyEvent::KEYCODE_PLUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PLUS"
		);
	}
	jint KeyEvent::KEYCODE_POUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_POUND"
		);
	}
	jint KeyEvent::KEYCODE_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_POWER"
		);
	}
	jint KeyEvent::KEYCODE_PROFILE_SWITCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROFILE_SWITCH"
		);
	}
	jint KeyEvent::KEYCODE_PROG_BLUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROG_BLUE"
		);
	}
	jint KeyEvent::KEYCODE_PROG_GREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROG_GREEN"
		);
	}
	jint KeyEvent::KEYCODE_PROG_RED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROG_RED"
		);
	}
	jint KeyEvent::KEYCODE_PROG_YELLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_PROG_YELLOW"
		);
	}
	jint KeyEvent::KEYCODE_Q()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_Q"
		);
	}
	jint KeyEvent::KEYCODE_R()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_R"
		);
	}
	jint KeyEvent::KEYCODE_REFRESH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_REFRESH"
		);
	}
	jint KeyEvent::KEYCODE_RIGHT_BRACKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_RIGHT_BRACKET"
		);
	}
	jint KeyEvent::KEYCODE_RO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_RO"
		);
	}
	jint KeyEvent::KEYCODE_S()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_S"
		);
	}
	jint KeyEvent::KEYCODE_SCROLL_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SCROLL_LOCK"
		);
	}
	jint KeyEvent::KEYCODE_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SEARCH"
		);
	}
	jint KeyEvent::KEYCODE_SEMICOLON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SEMICOLON"
		);
	}
	jint KeyEvent::KEYCODE_SETTINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SETTINGS"
		);
	}
	jint KeyEvent::KEYCODE_SHIFT_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SHIFT_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_SHIFT_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SHIFT_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_SLASH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SLASH"
		);
	}
	jint KeyEvent::KEYCODE_SLEEP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SLEEP"
		);
	}
	jint KeyEvent::KEYCODE_SOFT_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SOFT_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_SOFT_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SOFT_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_SOFT_SLEEP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SOFT_SLEEP"
		);
	}
	jint KeyEvent::KEYCODE_SPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SPACE"
		);
	}
	jint KeyEvent::KEYCODE_STAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STAR"
		);
	}
	jint KeyEvent::KEYCODE_STB_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STB_INPUT"
		);
	}
	jint KeyEvent::KEYCODE_STB_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STB_POWER"
		);
	}
	jint KeyEvent::KEYCODE_STEM_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STEM_1"
		);
	}
	jint KeyEvent::KEYCODE_STEM_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STEM_2"
		);
	}
	jint KeyEvent::KEYCODE_STEM_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STEM_3"
		);
	}
	jint KeyEvent::KEYCODE_STEM_PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_STEM_PRIMARY"
		);
	}
	jint KeyEvent::KEYCODE_SWITCH_CHARSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SWITCH_CHARSET"
		);
	}
	jint KeyEvent::KEYCODE_SYM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYM"
		);
	}
	jint KeyEvent::KEYCODE_SYSRQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSRQ"
		);
	}
	jint KeyEvent::KEYCODE_SYSTEM_NAVIGATION_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSTEM_NAVIGATION_DOWN"
		);
	}
	jint KeyEvent::KEYCODE_SYSTEM_NAVIGATION_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSTEM_NAVIGATION_LEFT"
		);
	}
	jint KeyEvent::KEYCODE_SYSTEM_NAVIGATION_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSTEM_NAVIGATION_RIGHT"
		);
	}
	jint KeyEvent::KEYCODE_SYSTEM_NAVIGATION_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_SYSTEM_NAVIGATION_UP"
		);
	}
	jint KeyEvent::KEYCODE_T()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_T"
		);
	}
	jint KeyEvent::KEYCODE_TAB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TAB"
		);
	}
	jint KeyEvent::KEYCODE_THUMBS_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_THUMBS_DOWN"
		);
	}
	jint KeyEvent::KEYCODE_THUMBS_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_THUMBS_UP"
		);
	}
	jint KeyEvent::KEYCODE_TV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV"
		);
	}
	jint KeyEvent::KEYCODE_TV_ANTENNA_CABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_ANTENNA_CABLE"
		);
	}
	jint KeyEvent::KEYCODE_TV_AUDIO_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_AUDIO_DESCRIPTION"
		);
	}
	jint KeyEvent::KEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN"
		);
	}
	jint KeyEvent::KEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP"
		);
	}
	jint KeyEvent::KEYCODE_TV_CONTENTS_MENU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_CONTENTS_MENU"
		);
	}
	jint KeyEvent::KEYCODE_TV_DATA_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_DATA_SERVICE"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_COMPONENT_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_COMPONENT_1"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_COMPONENT_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_COMPONENT_2"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_COMPOSITE_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_COMPOSITE_1"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_COMPOSITE_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_COMPOSITE_2"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_HDMI_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_HDMI_1"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_HDMI_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_HDMI_2"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_HDMI_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_HDMI_3"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_HDMI_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_HDMI_4"
		);
	}
	jint KeyEvent::KEYCODE_TV_INPUT_VGA_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_INPUT_VGA_1"
		);
	}
	jint KeyEvent::KEYCODE_TV_MEDIA_CONTEXT_MENU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_MEDIA_CONTEXT_MENU"
		);
	}
	jint KeyEvent::KEYCODE_TV_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_NETWORK"
		);
	}
	jint KeyEvent::KEYCODE_TV_NUMBER_ENTRY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_NUMBER_ENTRY"
		);
	}
	jint KeyEvent::KEYCODE_TV_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_POWER"
		);
	}
	jint KeyEvent::KEYCODE_TV_RADIO_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_RADIO_SERVICE"
		);
	}
	jint KeyEvent::KEYCODE_TV_SATELLITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_SATELLITE"
		);
	}
	jint KeyEvent::KEYCODE_TV_SATELLITE_BS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_SATELLITE_BS"
		);
	}
	jint KeyEvent::KEYCODE_TV_SATELLITE_CS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_SATELLITE_CS"
		);
	}
	jint KeyEvent::KEYCODE_TV_SATELLITE_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_SATELLITE_SERVICE"
		);
	}
	jint KeyEvent::KEYCODE_TV_TELETEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_TELETEXT"
		);
	}
	jint KeyEvent::KEYCODE_TV_TERRESTRIAL_ANALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_TERRESTRIAL_ANALOG"
		);
	}
	jint KeyEvent::KEYCODE_TV_TERRESTRIAL_DIGITAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_TERRESTRIAL_DIGITAL"
		);
	}
	jint KeyEvent::KEYCODE_TV_TIMER_PROGRAMMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_TIMER_PROGRAMMING"
		);
	}
	jint KeyEvent::KEYCODE_TV_ZOOM_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_TV_ZOOM_MODE"
		);
	}
	jint KeyEvent::KEYCODE_U()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_U"
		);
	}
	jint KeyEvent::KEYCODE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_UNKNOWN"
		);
	}
	jint KeyEvent::KEYCODE_V()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_V"
		);
	}
	jint KeyEvent::KEYCODE_VOICE_ASSIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_VOICE_ASSIST"
		);
	}
	jint KeyEvent::KEYCODE_VOLUME_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_VOLUME_DOWN"
		);
	}
	jint KeyEvent::KEYCODE_VOLUME_MUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_VOLUME_MUTE"
		);
	}
	jint KeyEvent::KEYCODE_VOLUME_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_VOLUME_UP"
		);
	}
	jint KeyEvent::KEYCODE_W()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_W"
		);
	}
	jint KeyEvent::KEYCODE_WAKEUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_WAKEUP"
		);
	}
	jint KeyEvent::KEYCODE_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_WINDOW"
		);
	}
	jint KeyEvent::KEYCODE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_X"
		);
	}
	jint KeyEvent::KEYCODE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_Y"
		);
	}
	jint KeyEvent::KEYCODE_YEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_YEN"
		);
	}
	jint KeyEvent::KEYCODE_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_Z"
		);
	}
	jint KeyEvent::KEYCODE_ZENKAKU_HANKAKU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ZENKAKU_HANKAKU"
		);
	}
	jint KeyEvent::KEYCODE_ZOOM_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ZOOM_IN"
		);
	}
	jint KeyEvent::KEYCODE_ZOOM_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"KEYCODE_ZOOM_OUT"
		);
	}
	jint KeyEvent::MAX_KEYCODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"MAX_KEYCODE"
		);
	}
	jint KeyEvent::META_ALT_LEFT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_ALT_LEFT_ON"
		);
	}
	jint KeyEvent::META_ALT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_ALT_MASK"
		);
	}
	jint KeyEvent::META_ALT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_ALT_ON"
		);
	}
	jint KeyEvent::META_ALT_RIGHT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_ALT_RIGHT_ON"
		);
	}
	jint KeyEvent::META_CAPS_LOCK_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CAPS_LOCK_ON"
		);
	}
	jint KeyEvent::META_CTRL_LEFT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CTRL_LEFT_ON"
		);
	}
	jint KeyEvent::META_CTRL_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CTRL_MASK"
		);
	}
	jint KeyEvent::META_CTRL_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CTRL_ON"
		);
	}
	jint KeyEvent::META_CTRL_RIGHT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_CTRL_RIGHT_ON"
		);
	}
	jint KeyEvent::META_FUNCTION_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_FUNCTION_ON"
		);
	}
	jint KeyEvent::META_META_LEFT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_META_LEFT_ON"
		);
	}
	jint KeyEvent::META_META_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_META_MASK"
		);
	}
	jint KeyEvent::META_META_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_META_ON"
		);
	}
	jint KeyEvent::META_META_RIGHT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_META_RIGHT_ON"
		);
	}
	jint KeyEvent::META_NUM_LOCK_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_NUM_LOCK_ON"
		);
	}
	jint KeyEvent::META_SCROLL_LOCK_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SCROLL_LOCK_ON"
		);
	}
	jint KeyEvent::META_SHIFT_LEFT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SHIFT_LEFT_ON"
		);
	}
	jint KeyEvent::META_SHIFT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SHIFT_MASK"
		);
	}
	jint KeyEvent::META_SHIFT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SHIFT_ON"
		);
	}
	jint KeyEvent::META_SHIFT_RIGHT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SHIFT_RIGHT_ON"
		);
	}
	jint KeyEvent::META_SYM_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyEvent",
			"META_SYM_ON"
		);
	}
	
	// QAndroidJniObject forward
	KeyEvent::KeyEvent(QAndroidJniObject obj) : android::view::InputEvent(obj) {}
	
	// Constructors
	KeyEvent::KeyEvent(android::view::KeyEvent &arg0)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		) {}
	KeyEvent::KeyEvent(jint arg0, jint arg1)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(II)V",
			arg0,
			arg1
		) {}
	KeyEvent::KeyEvent(android::view::KeyEvent &arg0, jlong arg1, jint arg2)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(Landroid/view/KeyEvent;JI)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	KeyEvent::KeyEvent(jlong arg0, jstring arg1, jint arg2, jint arg3)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(JLjava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4)
		: android::view::InputEvent(
			"android.view.KeyEvent",
			"(JJIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
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
	KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
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
	KeyEvent::KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
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
	QAndroidJniObject KeyEvent::changeAction(android::view::KeyEvent arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeAction",
			"(Landroid/view/KeyEvent;I)Landroid/view/KeyEvent;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject KeyEvent::changeFlags(android::view::KeyEvent arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeFlags",
			"(Landroid/view/KeyEvent;I)Landroid/view/KeyEvent;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject KeyEvent::changeTimeRepeat(android::view::KeyEvent arg0, jlong arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeTimeRepeat",
			"(Landroid/view/KeyEvent;JI)Landroid/view/KeyEvent;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject KeyEvent::changeTimeRepeat(android::view::KeyEvent arg0, jlong arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeTimeRepeat",
			"(Landroid/view/KeyEvent;JII)Landroid/view/KeyEvent;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint KeyEvent::getDeadChar(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.KeyEvent",
			"getDeadChar",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint KeyEvent::getMaxKeyCode()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.KeyEvent",
			"getMaxKeyCode",
			"()I"
		);
	}
	jint KeyEvent::getModifierMetaStateMask()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.KeyEvent",
			"getModifierMetaStateMask",
			"()I"
		);
	}
	jboolean KeyEvent::isGamepadButton(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"isGamepadButton",
			"(I)Z",
			arg0
		);
	}
	jboolean KeyEvent::isModifierKey(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"isModifierKey",
			"(I)Z",
			arg0
		);
	}
	jint KeyEvent::keyCodeFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.KeyEvent",
			"keyCodeFromString",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring KeyEvent::keyCodeToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"keyCodeToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean KeyEvent::metaStateHasModifiers(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"metaStateHasModifiers",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean KeyEvent::metaStateHasNoModifiers(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"metaStateHasNoModifiers",
			"(I)Z",
			arg0
		);
	}
	jint KeyEvent::normalizeMetaState(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.KeyEvent",
			"normalizeMetaState",
			"(I)I",
			arg0
		);
	}
	jboolean KeyEvent::dispatch(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"dispatch",
			"(Landroid/view/KeyEvent$Callback;)Z",
			arg0.object()
		);
	}
	jboolean KeyEvent::dispatch(__JniBaseClass arg0, android::view::KeyEvent_DispatcherState arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"dispatch",
			"(Landroid/view/KeyEvent$Callback;Landroid/view/KeyEvent$DispatcherState;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint KeyEvent::getAction()
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	jstring KeyEvent::getCharacters()
	{
		return callObjectMethod(
			"getCharacters",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint KeyEvent::getDeviceId()
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	jchar KeyEvent::getDisplayLabel()
	{
		return callMethod<jchar>(
			"getDisplayLabel",
			"()C"
		);
	}
	jlong KeyEvent::getDownTime()
	{
		return callMethod<jlong>(
			"getDownTime",
			"()J"
		);
	}
	jlong KeyEvent::getEventTime()
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jint KeyEvent::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	QAndroidJniObject KeyEvent::getKeyCharacterMap()
	{
		return callObjectMethod(
			"getKeyCharacterMap",
			"()Landroid/view/KeyCharacterMap;"
		);
	}
	jint KeyEvent::getKeyCode()
	{
		return callMethod<jint>(
			"getKeyCode",
			"()I"
		);
	}
	jboolean KeyEvent::getKeyData(android::view::KeyCharacterMap_KeyData arg0)
	{
		return callMethod<jboolean>(
			"getKeyData",
			"(Landroid/view/KeyCharacterMap$KeyData;)Z",
			arg0.object()
		);
	}
	jchar KeyEvent::getMatch(jcharArray arg0)
	{
		return callMethod<jchar>(
			"getMatch",
			"([C)C",
			arg0
		);
	}
	jchar KeyEvent::getMatch(jcharArray arg0, jint arg1)
	{
		return callMethod<jchar>(
			"getMatch",
			"([CI)C",
			arg0,
			arg1
		);
	}
	jint KeyEvent::getMetaState()
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	jint KeyEvent::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jchar KeyEvent::getNumber()
	{
		return callMethod<jchar>(
			"getNumber",
			"()C"
		);
	}
	jint KeyEvent::getRepeatCount()
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jint KeyEvent::getScanCode()
	{
		return callMethod<jint>(
			"getScanCode",
			"()I"
		);
	}
	jint KeyEvent::getSource()
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jint KeyEvent::getUnicodeChar()
	{
		return callMethod<jint>(
			"getUnicodeChar",
			"()I"
		);
	}
	jint KeyEvent::getUnicodeChar(jint arg0)
	{
		return callMethod<jint>(
			"getUnicodeChar",
			"(I)I",
			arg0
		);
	}
	jboolean KeyEvent::hasModifiers(jint arg0)
	{
		return callMethod<jboolean>(
			"hasModifiers",
			"(I)Z",
			arg0
		);
	}
	jboolean KeyEvent::hasNoModifiers()
	{
		return callMethod<jboolean>(
			"hasNoModifiers",
			"()Z"
		);
	}
	jboolean KeyEvent::isAltPressed()
	{
		return callMethod<jboolean>(
			"isAltPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isCanceled()
	{
		return callMethod<jboolean>(
			"isCanceled",
			"()Z"
		);
	}
	jboolean KeyEvent::isCapsLockOn()
	{
		return callMethod<jboolean>(
			"isCapsLockOn",
			"()Z"
		);
	}
	jboolean KeyEvent::isCtrlPressed()
	{
		return callMethod<jboolean>(
			"isCtrlPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isFunctionPressed()
	{
		return callMethod<jboolean>(
			"isFunctionPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isLongPress()
	{
		return callMethod<jboolean>(
			"isLongPress",
			"()Z"
		);
	}
	jboolean KeyEvent::isMetaPressed()
	{
		return callMethod<jboolean>(
			"isMetaPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isNumLockOn()
	{
		return callMethod<jboolean>(
			"isNumLockOn",
			"()Z"
		);
	}
	jboolean KeyEvent::isPrintingKey()
	{
		return callMethod<jboolean>(
			"isPrintingKey",
			"()Z"
		);
	}
	jboolean KeyEvent::isScrollLockOn()
	{
		return callMethod<jboolean>(
			"isScrollLockOn",
			"()Z"
		);
	}
	jboolean KeyEvent::isShiftPressed()
	{
		return callMethod<jboolean>(
			"isShiftPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isSymPressed()
	{
		return callMethod<jboolean>(
			"isSymPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isSystem()
	{
		return callMethod<jboolean>(
			"isSystem",
			"()Z"
		);
	}
	jboolean KeyEvent::isTracking()
	{
		return callMethod<jboolean>(
			"isTracking",
			"()Z"
		);
	}
	void KeyEvent::setSource(jint arg0)
	{
		callMethod<void>(
			"setSource",
			"(I)V",
			arg0
		);
	}
	void KeyEvent::startTracking()
	{
		callMethod<void>(
			"startTracking",
			"()V"
		);
	}
	jstring KeyEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void KeyEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

