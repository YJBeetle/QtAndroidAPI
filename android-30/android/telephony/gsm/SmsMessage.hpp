#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace android::telephony::gsm
{
	class SmsMessage_MessageClass;
}
namespace android::telephony::gsm
{
	class SmsMessage_SubmitPdu;
}
class JString;
class JString;

namespace android::telephony::gsm
{
	class SmsMessage : public JObject
	{
	public:
		// Fields
		static jint ENCODING_16BIT();
		static jint ENCODING_7BIT();
		static jint ENCODING_8BIT();
		static jint ENCODING_UNKNOWN();
		static jint MAX_USER_DATA_BYTES();
		static jint MAX_USER_DATA_SEPTETS();
		static jint MAX_USER_DATA_SEPTETS_WITH_HEADER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SmsMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SmsMessage(QAndroidJniObject obj);
		
		// Constructors
		SmsMessage();
		
		// Methods
		static JIntArray calculateLength(JString arg0, jboolean arg1);
		static android::telephony::gsm::SmsMessage createFromPdu(JByteArray arg0);
		static android::telephony::gsm::SmsMessage_SubmitPdu getSubmitPdu(JString arg0, JString arg1, JString arg2, jboolean arg3);
		static android::telephony::gsm::SmsMessage_SubmitPdu getSubmitPdu(JString arg0, JString arg1, jshort arg2, JByteArray arg3, jboolean arg4);
		static jint getTPLayerLengthForPDU(JString arg0);
		JString getDisplayMessageBody();
		JString getDisplayOriginatingAddress();
		JString getEmailBody();
		JString getEmailFrom();
		jint getIndexOnSim();
		JString getMessageBody();
		android::telephony::gsm::SmsMessage_MessageClass getMessageClass();
		JString getOriginatingAddress();
		JByteArray getPdu();
		jint getProtocolIdentifier();
		JString getPseudoSubject();
		JString getServiceCenterAddress();
		jint getStatus();
		jint getStatusOnSim();
		jlong getTimestampMillis();
		JByteArray getUserData();
		jboolean isCphsMwiMessage();
		jboolean isEmail();
		jboolean isMWIClearMessage();
		jboolean isMWISetMessage();
		jboolean isMwiDontStore();
		jboolean isReplace();
		jboolean isReplyPathPresent();
		jboolean isStatusReportMessage();
	};
} // namespace android::telephony::gsm

