#include "./PhoneNumberFormattingTextWatcher.hpp"

namespace android::telephony
{
	// Fields
	
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"()V"
		);
	}
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	void PhoneNumberFormattingTextWatcher::afterTextChanged(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object()
		);
	}
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
	void PhoneNumberFormattingTextWatcher::beforeTextChanged(const QString &arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
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
	void PhoneNumberFormattingTextWatcher::onTextChanged(const QString &arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::telephony

