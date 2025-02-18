#pragma once

#include "./HapticFeedbackConstants.def.hpp"

namespace android::view
{
	// Fields
	inline jint HapticFeedbackConstants::CLOCK_TICK()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"CLOCK_TICK"
		);
	}
	inline jint HapticFeedbackConstants::CONFIRM()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"CONFIRM"
		);
	}
	inline jint HapticFeedbackConstants::CONTEXT_CLICK()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"CONTEXT_CLICK"
		);
	}
	inline jint HapticFeedbackConstants::DRAG_START()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"DRAG_START"
		);
	}
	inline jint HapticFeedbackConstants::FLAG_IGNORE_GLOBAL_SETTING()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"FLAG_IGNORE_GLOBAL_SETTING"
		);
	}
	inline jint HapticFeedbackConstants::FLAG_IGNORE_VIEW_SETTING()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"FLAG_IGNORE_VIEW_SETTING"
		);
	}
	inline jint HapticFeedbackConstants::GESTURE_END()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"GESTURE_END"
		);
	}
	inline jint HapticFeedbackConstants::GESTURE_START()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"GESTURE_START"
		);
	}
	inline jint HapticFeedbackConstants::GESTURE_THRESHOLD_ACTIVATE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"GESTURE_THRESHOLD_ACTIVATE"
		);
	}
	inline jint HapticFeedbackConstants::GESTURE_THRESHOLD_DEACTIVATE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"GESTURE_THRESHOLD_DEACTIVATE"
		);
	}
	inline jint HapticFeedbackConstants::KEYBOARD_PRESS()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_PRESS"
		);
	}
	inline jint HapticFeedbackConstants::KEYBOARD_RELEASE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_RELEASE"
		);
	}
	inline jint HapticFeedbackConstants::KEYBOARD_TAP()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_TAP"
		);
	}
	inline jint HapticFeedbackConstants::LONG_PRESS()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"LONG_PRESS"
		);
	}
	inline jint HapticFeedbackConstants::NO_HAPTICS()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"NO_HAPTICS"
		);
	}
	inline jint HapticFeedbackConstants::REJECT()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"REJECT"
		);
	}
	inline jint HapticFeedbackConstants::SEGMENT_FREQUENT_TICK()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"SEGMENT_FREQUENT_TICK"
		);
	}
	inline jint HapticFeedbackConstants::SEGMENT_TICK()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"SEGMENT_TICK"
		);
	}
	inline jint HapticFeedbackConstants::TEXT_HANDLE_MOVE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"TEXT_HANDLE_MOVE"
		);
	}
	inline jint HapticFeedbackConstants::TOGGLE_OFF()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"TOGGLE_OFF"
		);
	}
	inline jint HapticFeedbackConstants::TOGGLE_ON()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"TOGGLE_ON"
		);
	}
	inline jint HapticFeedbackConstants::VIRTUAL_KEY()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"VIRTUAL_KEY"
		);
	}
	inline jint HapticFeedbackConstants::VIRTUAL_KEY_RELEASE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"VIRTUAL_KEY_RELEASE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
