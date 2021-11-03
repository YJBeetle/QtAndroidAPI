#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_ServiceStateTable.hpp"

namespace android::provider
{
	// Fields
	JString Telephony_ServiceStateTable::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Telephony_ServiceStateTable::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_ServiceStateTable::DATA_NETWORK_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"DATA_NETWORK_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_ServiceStateTable::DATA_REG_STATE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"DATA_REG_STATE",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_ServiceStateTable::DUPLEX_MODE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"DUPLEX_MODE",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_ServiceStateTable::IS_MANUAL_NETWORK_SELECTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"IS_MANUAL_NETWORK_SELECTION",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_ServiceStateTable::VOICE_OPERATOR_NUMERIC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_OPERATOR_NUMERIC",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_ServiceStateTable::VOICE_REG_STATE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_REG_STATE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	Telephony_ServiceStateTable::Telephony_ServiceStateTable(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Uri Telephony_ServiceStateTable::getUriForSubscriptionId(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri Telephony_ServiceStateTable::getUriForSubscriptionIdAndField(jint arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionIdAndField",
			"(ILjava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

