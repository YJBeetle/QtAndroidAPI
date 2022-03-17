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
	inline jint HapticFeedbackConstants::REJECT()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"REJECT"
		);
	}
	inline jint HapticFeedbackConstants::TEXT_HANDLE_MOVE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"TEXT_HANDLE_MOVE"
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

