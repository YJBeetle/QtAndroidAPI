#pragma once

#ifndef ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER
#define ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class PhoneNumberFormattingTextWatcher : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
		void beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		void afterTextChanged(__jni_impl::__JniBaseClass arg0);
		void onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void PhoneNumberFormattingTextWatcher::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"()V");
	}
	void PhoneNumberFormattingTextWatcher::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	void PhoneNumberFormattingTextWatcher::beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void PhoneNumberFormattingTextWatcher::afterTextChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object()
		);
	}
	void PhoneNumberFormattingTextWatcher::onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class PhoneNumberFormattingTextWatcher : public __jni_impl::android::telephony::PhoneNumberFormattingTextWatcher
	{
	public:
		PhoneNumberFormattingTextWatcher(QAndroidJniObject obj) { __thiz = obj; }
		PhoneNumberFormattingTextWatcher()
		{
			__constructor();
		}
		PhoneNumberFormattingTextWatcher(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER

