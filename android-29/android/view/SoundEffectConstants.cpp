#include "./SoundEffectConstants.hpp"

namespace android::view
{
	// Fields
	jint SoundEffectConstants::CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"CLICK"
		);
	}
	jint SoundEffectConstants::NAVIGATION_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_DOWN"
		);
	}
	jint SoundEffectConstants::NAVIGATION_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_LEFT"
		);
	}
	jint SoundEffectConstants::NAVIGATION_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_RIGHT"
		);
	}
	jint SoundEffectConstants::NAVIGATION_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_UP"
		);
	}
	
	// QAndroidJniObject forward
	SoundEffectConstants::SoundEffectConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SoundEffectConstants::getContantForFocusDirection(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.SoundEffectConstants",
			"getContantForFocusDirection",
			"(I)I",
			arg0
		);
	}
} // namespace android::view

