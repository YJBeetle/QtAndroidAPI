#pragma once

#ifndef ANDROID_VIEW_SOUNDEFFECTCONSTANTS
#define ANDROID_VIEW_SOUNDEFFECTCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class SoundEffectConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLICK();
		static jint NAVIGATION_DOWN();
		static jint NAVIGATION_LEFT();
		static jint NAVIGATION_RIGHT();
		static jint NAVIGATION_UP();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getContantForFocusDirection(jint arg0);
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	jint SoundEffectConstants::CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"CLICK");
	}
	jint SoundEffectConstants::NAVIGATION_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_DOWN");
	}
	jint SoundEffectConstants::NAVIGATION_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_LEFT");
	}
	jint SoundEffectConstants::NAVIGATION_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_RIGHT");
	}
	jint SoundEffectConstants::NAVIGATION_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.SoundEffectConstants",
			"NAVIGATION_UP");
	}
	
	// Constructors
	void SoundEffectConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.SoundEffectConstants",
			"(V)V");
	}
	
	// Methods
	jint SoundEffectConstants::getContantForFocusDirection(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.SoundEffectConstants",
			"getContantForFocusDirection",
			"(I)I",
			arg0);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class SoundEffectConstants : public __jni_impl::android::view::SoundEffectConstants
	{
	public:
		SoundEffectConstants(QAndroidJniObject obj) { __thiz = obj; }
		SoundEffectConstants()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SOUNDEFFECTCONSTANTS

