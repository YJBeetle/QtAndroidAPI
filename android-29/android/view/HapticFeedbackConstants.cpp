#include "./HapticFeedbackConstants.hpp"

namespace android::view
{
	// Fields
	jint HapticFeedbackConstants::CLOCK_TICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"CLOCK_TICK"
		);
	}
	jint HapticFeedbackConstants::CONTEXT_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"CONTEXT_CLICK"
		);
	}
	jint HapticFeedbackConstants::FLAG_IGNORE_GLOBAL_SETTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"FLAG_IGNORE_GLOBAL_SETTING"
		);
	}
	jint HapticFeedbackConstants::FLAG_IGNORE_VIEW_SETTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"FLAG_IGNORE_VIEW_SETTING"
		);
	}
	jint HapticFeedbackConstants::KEYBOARD_PRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_PRESS"
		);
	}
	jint HapticFeedbackConstants::KEYBOARD_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_RELEASE"
		);
	}
	jint HapticFeedbackConstants::KEYBOARD_TAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"KEYBOARD_TAP"
		);
	}
	jint HapticFeedbackConstants::LONG_PRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"LONG_PRESS"
		);
	}
	jint HapticFeedbackConstants::TEXT_HANDLE_MOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"TEXT_HANDLE_MOVE"
		);
	}
	jint HapticFeedbackConstants::VIRTUAL_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"VIRTUAL_KEY"
		);
	}
	jint HapticFeedbackConstants::VIRTUAL_KEY_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.HapticFeedbackConstants",
			"VIRTUAL_KEY_RELEASE"
		);
	}
	
	HapticFeedbackConstants::HapticFeedbackConstants(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::view

