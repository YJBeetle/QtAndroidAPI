#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_MmsSms : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_CONVERSATIONS_URI();
		static QAndroidJniObject CONTENT_DRAFT_URI();
		static QAndroidJniObject CONTENT_FILTER_BYPHONE_URI();
		static QAndroidJniObject CONTENT_LOCKED_URI();
		static QAndroidJniObject CONTENT_UNDELIVERED_URI();
		static QAndroidJniObject CONTENT_URI();
		static jint ERR_TYPE_GENERIC();
		static jint ERR_TYPE_GENERIC_PERMANENT();
		static jint ERR_TYPE_MMS_PROTO_PERMANENT();
		static jint ERR_TYPE_MMS_PROTO_TRANSIENT();
		static jint ERR_TYPE_SMS_PROTO_PERMANENT();
		static jint ERR_TYPE_SMS_PROTO_TRANSIENT();
		static jint ERR_TYPE_TRANSPORT_FAILURE();
		static jint MMS_PROTO();
		static jint NO_ERROR();
		static QAndroidJniObject SEARCH_URI();
		static jint SMS_PROTO();
		static jstring TYPE_DISCRIMINATOR_COLUMN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_MmsSms(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_MmsSms(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

