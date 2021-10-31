#include "./PhoneNumberFormattingTextWatcher.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher()
		: __JniBaseClass(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"()V"
		) {}
	PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher(jstring arg0)
		: __JniBaseClass(
			"android.telephony.PhoneNumberFormattingTextWatcher",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	void PhoneNumberFormattingTextWatcher::afterTextChanged(__JniBaseClass arg0)
	{
		callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	void PhoneNumberFormattingTextWatcher::beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void PhoneNumberFormattingTextWatcher::onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::telephony

