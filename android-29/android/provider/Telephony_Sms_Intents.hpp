#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}

namespace android::provider
{
	class Telephony_Sms_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHANGE_DEFAULT();
		static jstring ACTION_DEFAULT_SMS_PACKAGE_CHANGED();
		static jstring ACTION_EXTERNAL_PROVIDER_CHANGE();
		static jstring DATA_SMS_RECEIVED_ACTION();
		static jstring EXTRA_IS_DEFAULT_SMS_APP();
		static jstring EXTRA_PACKAGE_NAME();
		static jint RESULT_SMS_DUPLICATED();
		static jint RESULT_SMS_GENERIC_ERROR();
		static jint RESULT_SMS_HANDLED();
		static jint RESULT_SMS_OUT_OF_MEMORY();
		static jint RESULT_SMS_UNSUPPORTED();
		static jstring SECRET_CODE_ACTION();
		static jstring SIM_FULL_ACTION();
		static jstring SMS_CB_RECEIVED_ACTION();
		static jstring SMS_DELIVER_ACTION();
		static jstring SMS_RECEIVED_ACTION();
		static jstring SMS_REJECTED_ACTION();
		static jstring SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION();
		static jstring WAP_PUSH_DELIVER_ACTION();
		static jstring WAP_PUSH_RECEIVED_ACTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Sms_Intents(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Sms_Intents(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray getMessagesFromIntent(android::content::Intent arg0);
	};
} // namespace android::provider

