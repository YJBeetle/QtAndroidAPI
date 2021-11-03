#include "./SoundEffectConstants.hpp"

namespace android::view
{
	// Fields
	jint SoundEffectConstants::CLICK()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"CLICK"
		);
	}
	jint SoundEffectConstants::NAVIGATION_DOWN()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_DOWN"
		);
	}
	jint SoundEffectConstants::NAVIGATION_LEFT()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_LEFT"
		);
	}
	jint SoundEffectConstants::NAVIGATION_REPEAT_DOWN()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_REPEAT_DOWN"
		);
	}
	jint SoundEffectConstants::NAVIGATION_REPEAT_LEFT()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_REPEAT_LEFT"
		);
	}
	jint SoundEffectConstants::NAVIGATION_REPEAT_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_REPEAT_RIGHT"
		);
	}
	jint SoundEffectConstants::NAVIGATION_REPEAT_UP()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_REPEAT_UP"
		);
	}
	jint SoundEffectConstants::NAVIGATION_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_RIGHT"
		);
	}
	jint SoundEffectConstants::NAVIGATION_UP()
	{
		return getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_UP"
		);
	}
	
	// QJniObject forward
	SoundEffectConstants::SoundEffectConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SoundEffectConstants::getConstantForFocusDirection(jint arg0, jboolean arg1)
	{
		return callStaticMethod<jint>(
			"android.view.SoundEffectConstants",
			"getConstantForFocusDirection",
			"(IZ)I",
			arg0,
			arg1
		);
	}
	jint SoundEffectConstants::getContantForFocusDirection(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.view.SoundEffectConstants",
			"getContantForFocusDirection",
			"(I)I",
			arg0
		);
	}
} // namespace android::view

