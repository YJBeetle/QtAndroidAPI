#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content
{
	class Intent;
}
class JString;

namespace android::provider
{
	class Telephony_Sms_Intents : public JObject
	{
	public:
		// Fields
		static JString ACTION_CHANGE_DEFAULT();
		static JString ACTION_DEFAULT_SMS_PACKAGE_CHANGED();
		static JString ACTION_EXTERNAL_PROVIDER_CHANGE();
		static JString DATA_SMS_RECEIVED_ACTION();
		static JString EXTRA_IS_DEFAULT_SMS_APP();
		static JString EXTRA_PACKAGE_NAME();
		static jint RESULT_SMS_DUPLICATED();
		static jint RESULT_SMS_GENERIC_ERROR();
		static jint RESULT_SMS_HANDLED();
		static jint RESULT_SMS_OUT_OF_MEMORY();
		static jint RESULT_SMS_UNSUPPORTED();
		static JString SECRET_CODE_ACTION();
		static JString SIM_FULL_ACTION();
		static JString SMS_CB_RECEIVED_ACTION();
		static JString SMS_DELIVER_ACTION();
		static JString SMS_RECEIVED_ACTION();
		static JString SMS_REJECTED_ACTION();
		static JString SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION();
		static JString WAP_PUSH_DELIVER_ACTION();
		static JString WAP_PUSH_RECEIVED_ACTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Sms_Intents(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Sms_Intents(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JArray getMessagesFromIntent(android::content::Intent arg0);
	};
} // namespace android::provider

