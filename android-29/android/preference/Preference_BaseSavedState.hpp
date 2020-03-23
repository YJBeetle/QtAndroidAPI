#pragma once

#ifndef ANDROID_PREFERENCE_PREFERENCE_BASESAVEDSTATE
#define ANDROID_PREFERENCE_PREFERENCE_BASESAVEDSTATE

#include "../view/AbsSavedState.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::preference
{
	class Preference_BaseSavedState : public __jni_impl::android::view::AbsSavedState
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::preference

#include "../os/Parcel.hpp"

namespace __jni_impl::android::preference
{
	// Fields
	QAndroidJniObject Preference_BaseSavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.Preference$BaseSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void Preference_BaseSavedState::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void Preference_BaseSavedState::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::android::preference

namespace android::preference
{
	class Preference_BaseSavedState : public __jni_impl::android::preference::Preference_BaseSavedState
	{
	public:
		Preference_BaseSavedState(QAndroidJniObject obj) { __thiz = obj; }
		Preference_BaseSavedState(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		Preference_BaseSavedState(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::preference

#endif // ANDROID_PREFERENCE_PREFERENCE_BASESAVEDSTATE

