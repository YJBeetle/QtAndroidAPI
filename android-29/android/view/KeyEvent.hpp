#pragma once

#ifndef ANDROID_VIEW_KEYEVENT
#define ANDROID_VIEW_KEYEVENT

#include "../../__JniBaseClass.hpp"
#include "InputEvent.hpp"

namespace __jni_impl::android::view
{
	class KeyEvent_DispatcherState;
}
namespace __jni_impl::android::view
{
	class KeyCharacterMap;
}
namespace __jni_impl::android::view
{
	class KeyCharacterMap_KeyData;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class KeyEvent : public __jni_impl::android::view::InputEvent
	{
	public:
		// Fields
		static jint ACTION_DOWN();
		static jint ACTION_MULTIPLE();
		static jint ACTION_UP();
		static QAndroidJniObject CREATOR();
		static jint FLAG_CANCELED();
		static jint FLAG_CANCELED_LONG_PRESS();
		static jint FLAG_EDITOR_ACTION();
		static jint FLAG_FALLBACK();
		static jint FLAG_FROM_SYSTEM();
		static jint FLAG_KEEP_TOUCH_MODE();
		static jint FLAG_LONG_PRESS();
		static jint FLAG_SOFT_KEYBOARD();
		static jint FLAG_TRACKING();
		static jint FLAG_VIRTUAL_HARD_KEY();
		static jint FLAG_WOKE_HERE();
		static jint KEYCODE_0();
		static jint KEYCODE_1();
		static jint KEYCODE_11();
		static jint KEYCODE_12();
		static jint KEYCODE_2();
		static jint KEYCODE_3();
		static jint KEYCODE_3D_MODE();
		static jint KEYCODE_4();
		static jint KEYCODE_5();
		static jint KEYCODE_6();
		static jint KEYCODE_7();
		static jint KEYCODE_8();
		static jint KEYCODE_9();
		static jint KEYCODE_A();
		static jint KEYCODE_ALL_APPS();
		static jint KEYCODE_ALT_LEFT();
		static jint KEYCODE_ALT_RIGHT();
		static jint KEYCODE_APOSTROPHE();
		static jint KEYCODE_APP_SWITCH();
		static jint KEYCODE_ASSIST();
		static jint KEYCODE_AT();
		static jint KEYCODE_AVR_INPUT();
		static jint KEYCODE_AVR_POWER();
		static jint KEYCODE_B();
		static jint KEYCODE_BACK();
		static jint KEYCODE_BACKSLASH();
		static jint KEYCODE_BOOKMARK();
		static jint KEYCODE_BREAK();
		static jint KEYCODE_BRIGHTNESS_DOWN();
		static jint KEYCODE_BRIGHTNESS_UP();
		static jint KEYCODE_BUTTON_1();
		static jint KEYCODE_BUTTON_10();
		static jint KEYCODE_BUTTON_11();
		static jint KEYCODE_BUTTON_12();
		static jint KEYCODE_BUTTON_13();
		static jint KEYCODE_BUTTON_14();
		static jint KEYCODE_BUTTON_15();
		static jint KEYCODE_BUTTON_16();
		static jint KEYCODE_BUTTON_2();
		static jint KEYCODE_BUTTON_3();
		static jint KEYCODE_BUTTON_4();
		static jint KEYCODE_BUTTON_5();
		static jint KEYCODE_BUTTON_6();
		static jint KEYCODE_BUTTON_7();
		static jint KEYCODE_BUTTON_8();
		static jint KEYCODE_BUTTON_9();
		static jint KEYCODE_BUTTON_A();
		static jint KEYCODE_BUTTON_B();
		static jint KEYCODE_BUTTON_C();
		static jint KEYCODE_BUTTON_L1();
		static jint KEYCODE_BUTTON_L2();
		static jint KEYCODE_BUTTON_MODE();
		static jint KEYCODE_BUTTON_R1();
		static jint KEYCODE_BUTTON_R2();
		static jint KEYCODE_BUTTON_SELECT();
		static jint KEYCODE_BUTTON_START();
		static jint KEYCODE_BUTTON_THUMBL();
		static jint KEYCODE_BUTTON_THUMBR();
		static jint KEYCODE_BUTTON_X();
		static jint KEYCODE_BUTTON_Y();
		static jint KEYCODE_BUTTON_Z();
		static jint KEYCODE_C();
		static jint KEYCODE_CALCULATOR();
		static jint KEYCODE_CALENDAR();
		static jint KEYCODE_CALL();
		static jint KEYCODE_CAMERA();
		static jint KEYCODE_CAPS_LOCK();
		static jint KEYCODE_CAPTIONS();
		static jint KEYCODE_CHANNEL_DOWN();
		static jint KEYCODE_CHANNEL_UP();
		static jint KEYCODE_CLEAR();
		static jint KEYCODE_COMMA();
		static jint KEYCODE_CONTACTS();
		static jint KEYCODE_COPY();
		static jint KEYCODE_CTRL_LEFT();
		static jint KEYCODE_CTRL_RIGHT();
		static jint KEYCODE_CUT();
		static jint KEYCODE_D();
		static jint KEYCODE_DEL();
		static jint KEYCODE_DPAD_CENTER();
		static jint KEYCODE_DPAD_DOWN();
		static jint KEYCODE_DPAD_DOWN_LEFT();
		static jint KEYCODE_DPAD_DOWN_RIGHT();
		static jint KEYCODE_DPAD_LEFT();
		static jint KEYCODE_DPAD_RIGHT();
		static jint KEYCODE_DPAD_UP();
		static jint KEYCODE_DPAD_UP_LEFT();
		static jint KEYCODE_DPAD_UP_RIGHT();
		static jint KEYCODE_DVR();
		static jint KEYCODE_E();
		static jint KEYCODE_EISU();
		static jint KEYCODE_ENDCALL();
		static jint KEYCODE_ENTER();
		static jint KEYCODE_ENVELOPE();
		static jint KEYCODE_EQUALS();
		static jint KEYCODE_ESCAPE();
		static jint KEYCODE_EXPLORER();
		static jint KEYCODE_F();
		static jint KEYCODE_F1();
		static jint KEYCODE_F10();
		static jint KEYCODE_F11();
		static jint KEYCODE_F12();
		static jint KEYCODE_F2();
		static jint KEYCODE_F3();
		static jint KEYCODE_F4();
		static jint KEYCODE_F5();
		static jint KEYCODE_F6();
		static jint KEYCODE_F7();
		static jint KEYCODE_F8();
		static jint KEYCODE_F9();
		static jint KEYCODE_FOCUS();
		static jint KEYCODE_FORWARD();
		static jint KEYCODE_FORWARD_DEL();
		static jint KEYCODE_FUNCTION();
		static jint KEYCODE_G();
		static jint KEYCODE_GRAVE();
		static jint KEYCODE_GUIDE();
		static jint KEYCODE_H();
		static jint KEYCODE_HEADSETHOOK();
		static jint KEYCODE_HELP();
		static jint KEYCODE_HENKAN();
		static jint KEYCODE_HOME();
		static jint KEYCODE_I();
		static jint KEYCODE_INFO();
		static jint KEYCODE_INSERT();
		static jint KEYCODE_J();
		static jint KEYCODE_K();
		static jint KEYCODE_KANA();
		static jint KEYCODE_KATAKANA_HIRAGANA();
		static jint KEYCODE_L();
		static jint KEYCODE_LANGUAGE_SWITCH();
		static jint KEYCODE_LAST_CHANNEL();
		static jint KEYCODE_LEFT_BRACKET();
		static jint KEYCODE_M();
		static jint KEYCODE_MANNER_MODE();
		static jint KEYCODE_MEDIA_AUDIO_TRACK();
		static jint KEYCODE_MEDIA_CLOSE();
		static jint KEYCODE_MEDIA_EJECT();
		static jint KEYCODE_MEDIA_FAST_FORWARD();
		static jint KEYCODE_MEDIA_NEXT();
		static jint KEYCODE_MEDIA_PAUSE();
		static jint KEYCODE_MEDIA_PLAY();
		static jint KEYCODE_MEDIA_PLAY_PAUSE();
		static jint KEYCODE_MEDIA_PREVIOUS();
		static jint KEYCODE_MEDIA_RECORD();
		static jint KEYCODE_MEDIA_REWIND();
		static jint KEYCODE_MEDIA_SKIP_BACKWARD();
		static jint KEYCODE_MEDIA_SKIP_FORWARD();
		static jint KEYCODE_MEDIA_STEP_BACKWARD();
		static jint KEYCODE_MEDIA_STEP_FORWARD();
		static jint KEYCODE_MEDIA_STOP();
		static jint KEYCODE_MEDIA_TOP_MENU();
		static jint KEYCODE_MENU();
		static jint KEYCODE_META_LEFT();
		static jint KEYCODE_META_RIGHT();
		static jint KEYCODE_MINUS();
		static jint KEYCODE_MOVE_END();
		static jint KEYCODE_MOVE_HOME();
		static jint KEYCODE_MUHENKAN();
		static jint KEYCODE_MUSIC();
		static jint KEYCODE_MUTE();
		static jint KEYCODE_N();
		static jint KEYCODE_NAVIGATE_IN();
		static jint KEYCODE_NAVIGATE_NEXT();
		static jint KEYCODE_NAVIGATE_OUT();
		static jint KEYCODE_NAVIGATE_PREVIOUS();
		static jint KEYCODE_NOTIFICATION();
		static jint KEYCODE_NUM();
		static jint KEYCODE_NUMPAD_0();
		static jint KEYCODE_NUMPAD_1();
		static jint KEYCODE_NUMPAD_2();
		static jint KEYCODE_NUMPAD_3();
		static jint KEYCODE_NUMPAD_4();
		static jint KEYCODE_NUMPAD_5();
		static jint KEYCODE_NUMPAD_6();
		static jint KEYCODE_NUMPAD_7();
		static jint KEYCODE_NUMPAD_8();
		static jint KEYCODE_NUMPAD_9();
		static jint KEYCODE_NUMPAD_ADD();
		static jint KEYCODE_NUMPAD_COMMA();
		static jint KEYCODE_NUMPAD_DIVIDE();
		static jint KEYCODE_NUMPAD_DOT();
		static jint KEYCODE_NUMPAD_ENTER();
		static jint KEYCODE_NUMPAD_EQUALS();
		static jint KEYCODE_NUMPAD_LEFT_PAREN();
		static jint KEYCODE_NUMPAD_MULTIPLY();
		static jint KEYCODE_NUMPAD_RIGHT_PAREN();
		static jint KEYCODE_NUMPAD_SUBTRACT();
		static jint KEYCODE_NUM_LOCK();
		static jint KEYCODE_O();
		static jint KEYCODE_P();
		static jint KEYCODE_PAGE_DOWN();
		static jint KEYCODE_PAGE_UP();
		static jint KEYCODE_PAIRING();
		static jint KEYCODE_PASTE();
		static jint KEYCODE_PERIOD();
		static jint KEYCODE_PICTSYMBOLS();
		static jint KEYCODE_PLUS();
		static jint KEYCODE_POUND();
		static jint KEYCODE_POWER();
		static jint KEYCODE_PROFILE_SWITCH();
		static jint KEYCODE_PROG_BLUE();
		static jint KEYCODE_PROG_GREEN();
		static jint KEYCODE_PROG_RED();
		static jint KEYCODE_PROG_YELLOW();
		static jint KEYCODE_Q();
		static jint KEYCODE_R();
		static jint KEYCODE_REFRESH();
		static jint KEYCODE_RIGHT_BRACKET();
		static jint KEYCODE_RO();
		static jint KEYCODE_S();
		static jint KEYCODE_SCROLL_LOCK();
		static jint KEYCODE_SEARCH();
		static jint KEYCODE_SEMICOLON();
		static jint KEYCODE_SETTINGS();
		static jint KEYCODE_SHIFT_LEFT();
		static jint KEYCODE_SHIFT_RIGHT();
		static jint KEYCODE_SLASH();
		static jint KEYCODE_SLEEP();
		static jint KEYCODE_SOFT_LEFT();
		static jint KEYCODE_SOFT_RIGHT();
		static jint KEYCODE_SOFT_SLEEP();
		static jint KEYCODE_SPACE();
		static jint KEYCODE_STAR();
		static jint KEYCODE_STB_INPUT();
		static jint KEYCODE_STB_POWER();
		static jint KEYCODE_STEM_1();
		static jint KEYCODE_STEM_2();
		static jint KEYCODE_STEM_3();
		static jint KEYCODE_STEM_PRIMARY();
		static jint KEYCODE_SWITCH_CHARSET();
		static jint KEYCODE_SYM();
		static jint KEYCODE_SYSRQ();
		static jint KEYCODE_SYSTEM_NAVIGATION_DOWN();
		static jint KEYCODE_SYSTEM_NAVIGATION_LEFT();
		static jint KEYCODE_SYSTEM_NAVIGATION_RIGHT();
		static jint KEYCODE_SYSTEM_NAVIGATION_UP();
		static jint KEYCODE_T();
		static jint KEYCODE_TAB();
		static jint KEYCODE_THUMBS_DOWN();
		static jint KEYCODE_THUMBS_UP();
		static jint KEYCODE_TV();
		static jint KEYCODE_TV_ANTENNA_CABLE();
		static jint KEYCODE_TV_AUDIO_DESCRIPTION();
		static jint KEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN();
		static jint KEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP();
		static jint KEYCODE_TV_CONTENTS_MENU();
		static jint KEYCODE_TV_DATA_SERVICE();
		static jint KEYCODE_TV_INPUT();
		static jint KEYCODE_TV_INPUT_COMPONENT_1();
		static jint KEYCODE_TV_INPUT_COMPONENT_2();
		static jint KEYCODE_TV_INPUT_COMPOSITE_1();
		static jint KEYCODE_TV_INPUT_COMPOSITE_2();
		static jint KEYCODE_TV_INPUT_HDMI_1();
		static jint KEYCODE_TV_INPUT_HDMI_2();
		static jint KEYCODE_TV_INPUT_HDMI_3();
		static jint KEYCODE_TV_INPUT_HDMI_4();
		static jint KEYCODE_TV_INPUT_VGA_1();
		static jint KEYCODE_TV_MEDIA_CONTEXT_MENU();
		static jint KEYCODE_TV_NETWORK();
		static jint KEYCODE_TV_NUMBER_ENTRY();
		static jint KEYCODE_TV_POWER();
		static jint KEYCODE_TV_RADIO_SERVICE();
		static jint KEYCODE_TV_SATELLITE();
		static jint KEYCODE_TV_SATELLITE_BS();
		static jint KEYCODE_TV_SATELLITE_CS();
		static jint KEYCODE_TV_SATELLITE_SERVICE();
		static jint KEYCODE_TV_TELETEXT();
		static jint KEYCODE_TV_TERRESTRIAL_ANALOG();
		static jint KEYCODE_TV_TERRESTRIAL_DIGITAL();
		static jint KEYCODE_TV_TIMER_PROGRAMMING();
		static jint KEYCODE_TV_ZOOM_MODE();
		static jint KEYCODE_U();
		static jint KEYCODE_UNKNOWN();
		static jint KEYCODE_V();
		static jint KEYCODE_VOICE_ASSIST();
		static jint KEYCODE_VOLUME_DOWN();
		static jint KEYCODE_VOLUME_MUTE();
		static jint KEYCODE_VOLUME_UP();
		static jint KEYCODE_W();
		static jint KEYCODE_WAKEUP();
		static jint KEYCODE_WINDOW();
		static jint KEYCODE_X();
		static jint KEYCODE_Y();
		static jint KEYCODE_YEN();
		static jint KEYCODE_Z();
		static jint KEYCODE_ZENKAKU_HANKAKU();
		static jint KEYCODE_ZOOM_IN();
		static jint KEYCODE_ZOOM_OUT();
		static jint MAX_KEYCODE();
		static jint META_ALT_LEFT_ON();
		static jint META_ALT_MASK();
		static jint META_ALT_ON();
		static jint META_ALT_RIGHT_ON();
		static jint META_CAPS_LOCK_ON();
		static jint META_CTRL_LEFT_ON();
		static jint META_CTRL_MASK();
		static jint META_CTRL_ON();
		static jint META_CTRL_RIGHT_ON();
		static jint META_FUNCTION_ON();
		static jint META_META_LEFT_ON();
		static jint META_META_MASK();
		static jint META_META_ON();
		static jint META_META_RIGHT_ON();
		static jint META_NUM_LOCK_ON();
		static jint META_SCROLL_LOCK_ON();
		static jint META_SHIFT_LEFT_ON();
		static jint META_SHIFT_MASK();
		static jint META_SHIFT_ON();
		static jint META_SHIFT_RIGHT_ON();
		static jint META_SYM_ON();
		
		// Constructors
		void __constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8);
		void __constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		void __constructor(jlong arg0, jstring arg1, jint arg2, jint arg3);
		void __constructor(jlong arg0, const QString &arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::view::KeyEvent arg0);
		void __constructor(__jni_impl::android::view::KeyEvent arg0, jlong arg1, jint arg2);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void __constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		
		// Methods
		jboolean dispatch(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::KeyEvent_DispatcherState arg1, jobject arg2);
		jboolean dispatch(__jni_impl::__JniBaseClass arg0);
		jstring toString();
		jint getModifiers();
		jboolean isSystem();
		jint getSource();
		jint getFlags();
		jchar getNumber();
		static jint getMaxKeyCode();
		static jint getDeadChar(jint arg0, jint arg1);
		static QAndroidJniObject changeTimeRepeat(__jni_impl::android::view::KeyEvent arg0, jlong arg1, jint arg2);
		static QAndroidJniObject changeTimeRepeat(__jni_impl::android::view::KeyEvent arg0, jlong arg1, jint arg2, jint arg3);
		static QAndroidJniObject changeAction(__jni_impl::android::view::KeyEvent arg0, jint arg1);
		static QAndroidJniObject changeFlags(__jni_impl::android::view::KeyEvent arg0, jint arg1);
		static jboolean isGamepadButton(jint arg0);
		jint getDeviceId();
		void setSource(jint arg0);
		jint getMetaState();
		static jint getModifierMetaStateMask();
		static jboolean isModifierKey(jint arg0);
		static jint normalizeMetaState(jint arg0);
		static jboolean metaStateHasNoModifiers(jint arg0);
		static jboolean metaStateHasModifiers(jint arg0, jint arg1);
		jboolean hasNoModifiers();
		jboolean hasModifiers(jint arg0);
		jboolean isAltPressed();
		jboolean isShiftPressed();
		jboolean isSymPressed();
		jboolean isCtrlPressed();
		jboolean isMetaPressed();
		jboolean isFunctionPressed();
		jboolean isCapsLockOn();
		jboolean isNumLockOn();
		jboolean isScrollLockOn();
		void startTracking();
		jboolean isTracking();
		jboolean isLongPress();
		jint getKeyCode();
		jstring getCharacters();
		jint getScanCode();
		jint getRepeatCount();
		jlong getDownTime();
		jlong getEventTime();
		QAndroidJniObject getKeyCharacterMap();
		jchar getDisplayLabel();
		jint getUnicodeChar(jint arg0);
		jint getUnicodeChar();
		jboolean getKeyData(__jni_impl::android::view::KeyCharacterMap_KeyData arg0);
		jchar getMatch(jcharArray arg0);
		jchar getMatch(jcharArray arg0, jint arg1);
		jboolean isPrintingKey();
		static jstring keyCodeToString(jint arg0);
		static jint keyCodeFromString(jstring arg0);
		static jint keyCodeFromString(const QString &arg0);
		jint getAction();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean isCanceled();
	};
} // namespace __jni_impl::android::view

#include "KeyEvent_DispatcherState.hpp"
#include "KeyCharacterMap.hpp"
#include "KeyCharacterMap_KeyData.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
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
	
	// Constructors
	void KeyEvent::__constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
	{
		__thiz = QAndroidJniObject(
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
		);
	}
	void KeyEvent::__constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
	{
		__thiz = QAndroidJniObject(
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
		);
	}
	void KeyEvent::__constructor(jlong arg0, jstring arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent",
			"(JLjava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void KeyEvent::__constructor(jlong arg0, const QString &arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent",
			"(JLjava/lang/String;II)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	void KeyEvent::__constructor(__jni_impl::android::view::KeyEvent arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyEvent::__constructor(__jni_impl::android::view::KeyEvent arg0, jlong arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent",
			"(Landroid/view/KeyEvent;JI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void KeyEvent::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent",
			"(II)V",
			arg0,
			arg1
		);
	}
	void KeyEvent::__constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent",
			"(JJIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void KeyEvent::__constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent",
			"(JJIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void KeyEvent::__constructor(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		__thiz = QAndroidJniObject(
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
		);
	}
	
	// Methods
	jboolean KeyEvent::dispatch(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::KeyEvent_DispatcherState arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"dispatch",
			"(Landroid/view/KeyEvent$Callback;Landroid/view/KeyEvent$DispatcherState;Ljava/lang/Object;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean KeyEvent::dispatch(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatch",
			"(Landroid/view/KeyEvent$Callback;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring KeyEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint KeyEvent::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jboolean KeyEvent::isSystem()
	{
		return __thiz.callMethod<jboolean>(
			"isSystem",
			"()Z"
		);
	}
	jint KeyEvent::getSource()
	{
		return __thiz.callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jint KeyEvent::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jchar KeyEvent::getNumber()
	{
		return __thiz.callMethod<jchar>(
			"getNumber",
			"()C"
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
	QAndroidJniObject KeyEvent::changeTimeRepeat(__jni_impl::android::view::KeyEvent arg0, jlong arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeTimeRepeat",
			"(Landroid/view/KeyEvent;JI)Landroid/view/KeyEvent;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject KeyEvent::changeTimeRepeat(__jni_impl::android::view::KeyEvent arg0, jlong arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeTimeRepeat",
			"(Landroid/view/KeyEvent;JII)Landroid/view/KeyEvent;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject KeyEvent::changeAction(__jni_impl::android::view::KeyEvent arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeAction",
			"(Landroid/view/KeyEvent;I)Landroid/view/KeyEvent;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject KeyEvent::changeFlags(__jni_impl::android::view::KeyEvent arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyEvent",
			"changeFlags",
			"(Landroid/view/KeyEvent;I)Landroid/view/KeyEvent;",
			arg0.__jniObject().object(),
			arg1
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
	jint KeyEvent::getDeviceId()
	{
		return __thiz.callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	void KeyEvent::setSource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(I)V",
			arg0
		);
	}
	jint KeyEvent::getMetaState()
	{
		return __thiz.callMethod<jint>(
			"getMetaState",
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
	jboolean KeyEvent::isModifierKey(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"isModifierKey",
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
	jboolean KeyEvent::metaStateHasNoModifiers(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.KeyEvent",
			"metaStateHasNoModifiers",
			"(I)Z",
			arg0
		);
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
	jboolean KeyEvent::hasNoModifiers()
	{
		return __thiz.callMethod<jboolean>(
			"hasNoModifiers",
			"()Z"
		);
	}
	jboolean KeyEvent::hasModifiers(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasModifiers",
			"(I)Z",
			arg0
		);
	}
	jboolean KeyEvent::isAltPressed()
	{
		return __thiz.callMethod<jboolean>(
			"isAltPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isShiftPressed()
	{
		return __thiz.callMethod<jboolean>(
			"isShiftPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isSymPressed()
	{
		return __thiz.callMethod<jboolean>(
			"isSymPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isCtrlPressed()
	{
		return __thiz.callMethod<jboolean>(
			"isCtrlPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isMetaPressed()
	{
		return __thiz.callMethod<jboolean>(
			"isMetaPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isFunctionPressed()
	{
		return __thiz.callMethod<jboolean>(
			"isFunctionPressed",
			"()Z"
		);
	}
	jboolean KeyEvent::isCapsLockOn()
	{
		return __thiz.callMethod<jboolean>(
			"isCapsLockOn",
			"()Z"
		);
	}
	jboolean KeyEvent::isNumLockOn()
	{
		return __thiz.callMethod<jboolean>(
			"isNumLockOn",
			"()Z"
		);
	}
	jboolean KeyEvent::isScrollLockOn()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollLockOn",
			"()Z"
		);
	}
	void KeyEvent::startTracking()
	{
		__thiz.callMethod<void>(
			"startTracking",
			"()V"
		);
	}
	jboolean KeyEvent::isTracking()
	{
		return __thiz.callMethod<jboolean>(
			"isTracking",
			"()Z"
		);
	}
	jboolean KeyEvent::isLongPress()
	{
		return __thiz.callMethod<jboolean>(
			"isLongPress",
			"()Z"
		);
	}
	jint KeyEvent::getKeyCode()
	{
		return __thiz.callMethod<jint>(
			"getKeyCode",
			"()I"
		);
	}
	jstring KeyEvent::getCharacters()
	{
		return __thiz.callObjectMethod(
			"getCharacters",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint KeyEvent::getScanCode()
	{
		return __thiz.callMethod<jint>(
			"getScanCode",
			"()I"
		);
	}
	jint KeyEvent::getRepeatCount()
	{
		return __thiz.callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jlong KeyEvent::getDownTime()
	{
		return __thiz.callMethod<jlong>(
			"getDownTime",
			"()J"
		);
	}
	jlong KeyEvent::getEventTime()
	{
		return __thiz.callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	QAndroidJniObject KeyEvent::getKeyCharacterMap()
	{
		return __thiz.callObjectMethod(
			"getKeyCharacterMap",
			"()Landroid/view/KeyCharacterMap;"
		);
	}
	jchar KeyEvent::getDisplayLabel()
	{
		return __thiz.callMethod<jchar>(
			"getDisplayLabel",
			"()C"
		);
	}
	jint KeyEvent::getUnicodeChar(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getUnicodeChar",
			"(I)I",
			arg0
		);
	}
	jint KeyEvent::getUnicodeChar()
	{
		return __thiz.callMethod<jint>(
			"getUnicodeChar",
			"()I"
		);
	}
	jboolean KeyEvent::getKeyData(__jni_impl::android::view::KeyCharacterMap_KeyData arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getKeyData",
			"(Landroid/view/KeyCharacterMap$KeyData;)Z",
			arg0.__jniObject().object()
		);
	}
	jchar KeyEvent::getMatch(jcharArray arg0)
	{
		return __thiz.callMethod<jchar>(
			"getMatch",
			"([C)C",
			arg0
		);
	}
	jchar KeyEvent::getMatch(jcharArray arg0, jint arg1)
	{
		return __thiz.callMethod<jchar>(
			"getMatch",
			"([CI)C",
			arg0,
			arg1
		);
	}
	jboolean KeyEvent::isPrintingKey()
	{
		return __thiz.callMethod<jboolean>(
			"isPrintingKey",
			"()Z"
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
	jint KeyEvent::keyCodeFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.KeyEvent",
			"keyCodeFromString",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint KeyEvent::keyCodeFromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.KeyEvent",
			"keyCodeFromString",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint KeyEvent::getAction()
	{
		return __thiz.callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	void KeyEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean KeyEvent::isCanceled()
	{
		return __thiz.callMethod<jboolean>(
			"isCanceled",
			"()Z"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class KeyEvent : public __jni_impl::android::view::KeyEvent
	{
	public:
		KeyEvent(QAndroidJniObject obj) { __thiz = obj; }
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8);
		}
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9);
		}
		KeyEvent(jlong arg0, jstring arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		KeyEvent(__jni_impl::android::view::KeyEvent arg0)
		{
			__constructor(
				arg0);
		}
		KeyEvent(__jni_impl::android::view::KeyEvent arg0, jlong arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		KeyEvent(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_KEYEVENT

