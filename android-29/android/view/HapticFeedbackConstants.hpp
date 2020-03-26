#pragma once

#ifndef ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS
#define ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class HapticFeedbackConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLOCK_TICK();
		static jint CONTEXT_CLICK();
		static jint FLAG_IGNORE_GLOBAL_SETTING();
		static jint FLAG_IGNORE_VIEW_SETTING();
		static jint KEYBOARD_PRESS();
		static jint KEYBOARD_RELEASE();
		static jint KEYBOARD_TAP();
		static jint LONG_PRESS();
		static jint TEXT_HANDLE_MOVE();
		static jint VIRTUAL_KEY();
		static jint VIRTUAL_KEY_RELEASE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
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
	
	// Constructors
	void HapticFeedbackConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.HapticFeedbackConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class HapticFeedbackConstants : public __jni_impl::android::view::HapticFeedbackConstants
	{
	public:
		HapticFeedbackConstants(QAndroidJniObject obj) { __thiz = obj; }
		HapticFeedbackConstants()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS

