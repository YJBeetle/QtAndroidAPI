#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::gsm
{
	class SmsMessage_SubmitPdu : public __JniBaseClass
	{
	public:
		// Fields
		jbyteArray encodedMessage();
		jbyteArray encodedScAddress();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::telephony::gsm


namespace __jni_impl::android::telephony::gsm
{
	// Fields
	jbyteArray SmsMessage_SubmitPdu::encodedMessage()
	{
		return __thiz.getObjectField(
			"encodedMessage",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray SmsMessage_SubmitPdu::encodedScAddress()
	{
		return __thiz.getObjectField(
			"encodedScAddress",
			"[B"
		).object<jbyteArray>();
	}
	
	// Constructors
	void SmsMessage_SubmitPdu::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.SmsMessage$SubmitPdu",
			"()V"
		);
	}
	
	// Methods
	jstring SmsMessage_SubmitPdu::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::telephony::gsm

namespace android::telephony::gsm
{
	class SmsMessage_SubmitPdu : public __jni_impl::android::telephony::gsm::SmsMessage_SubmitPdu
	{
	public:
		SmsMessage_SubmitPdu(QAndroidJniObject obj) { __thiz = obj; }
		SmsMessage_SubmitPdu()
		{
			__constructor();
		}
	};
} // namespace android::telephony::gsm

