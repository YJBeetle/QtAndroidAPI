#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::telephony
{
	class SmsMessage_MessageClass;
}
namespace android::telephony
{
	class SmsMessage_SubmitPdu;
}

namespace android::telephony
{
	class SmsMessage : public __JniBaseClass
	{
	public:
		// Fields
		static jint ENCODING_16BIT();
		static jint ENCODING_7BIT();
		static jint ENCODING_8BIT();
		static jint ENCODING_UNKNOWN();
		static jstring FORMAT_3GPP();
		static jstring FORMAT_3GPP2();
		static jint MAX_USER_DATA_BYTES();
		static jint MAX_USER_DATA_BYTES_WITH_HEADER();
		static jint MAX_USER_DATA_SEPTETS();
		static jint MAX_USER_DATA_SEPTETS_WITH_HEADER();
		
		SmsMessage(QAndroidJniObject obj);
		// Constructors
		SmsMessage() = default;
		
		// Methods
		static jintArray calculateLength(jstring arg0, jboolean arg1);
		static QAndroidJniObject createFromPdu(jbyteArray arg0);
		static QAndroidJniObject createFromPdu(jbyteArray arg0, jstring arg1);
		static QAndroidJniObject getSubmitPdu(jstring arg0, jstring arg1, jstring arg2, jboolean arg3);
		static QAndroidJniObject getSubmitPdu(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, jboolean arg4);
		static jint getTPLayerLengthForPDU(jstring arg0);
		jstring getDisplayMessageBody();
		jstring getDisplayOriginatingAddress();
		jstring getEmailBody();
		jstring getEmailFrom();
		jint getIndexOnIcc();
		jint getIndexOnSim();
		jstring getMessageBody();
		QAndroidJniObject getMessageClass();
		jstring getOriginatingAddress();
		jbyteArray getPdu();
		jint getProtocolIdentifier();
		jstring getPseudoSubject();
		jstring getServiceCenterAddress();
		jint getStatus();
		jint getStatusOnIcc();
		jint getStatusOnSim();
		jlong getTimestampMillis();
		jbyteArray getUserData();
		jboolean isCphsMwiMessage();
		jboolean isEmail();
		jboolean isMWIClearMessage();
		jboolean isMWISetMessage();
		jboolean isMwiDontStore();
		jboolean isReplace();
		jboolean isReplyPathPresent();
		jboolean isStatusReportMessage();
	};
} // namespace android::telephony

