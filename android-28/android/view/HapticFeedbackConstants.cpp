#include "./HapticFeedbackConstants.hpp"

namespace android::view
{
	// Fields
	jint HapticFeedbackConstants::CLOCK_TICK()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"CLOCK_TICK"
		);
	}
	jint HapticFeedbackConstants::CONTEXT_CLICK()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"CONTEXT_CLICK"
		);
	}
	jint HapticFeedbackConstants::FLAG_IGNORE_GLOBAL_SETTING()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"FLAG_IGNORE_GLOBAL_SETTING"
		);
	}
	jint HapticFeedbackConstants::FLAG_IGNORE_VIEW_SETTING()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"FLAG_IGNORE_VIEW_SETTING"
		);
	}
	jint HapticFeedbackConstants::KEYBOARD_PRESS()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_PRESS"
		);
	}
	jint HapticFeedbackConstants::KEYBOARD_RELEASE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_RELEASE"
		);
	}
	jint HapticFeedbackConstants::KEYBOARD_TAP()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_TAP"
		);
	}
	jint HapticFeedbackConstants::LONG_PRESS()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"LONG_PRESS"
		);
	}
	jint HapticFeedbackConstants::TEXT_HANDLE_MOVE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"TEXT_HANDLE_MOVE"
		);
	}
	jint HapticFeedbackConstants::VIRTUAL_KEY()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"VIRTUAL_KEY"
		);
	}
	jint HapticFeedbackConstants::VIRTUAL_KEY_RELEASE()
	{
		return getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"VIRTUAL_KEY_RELEASE"
		);
	}
	
	// QAndroidJniObject forward
	HapticFeedbackConstants::HapticFeedbackConstants(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::view

