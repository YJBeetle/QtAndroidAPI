#include "../net/Uri.hpp"
#include "./Telephony_ServiceStateTable.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_ServiceStateTable::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Telephony_ServiceStateTable::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_ServiceStateTable::IS_MANUAL_NETWORK_SELECTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"IS_MANUAL_NETWORK_SELECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_ServiceStateTable::VOICE_OPERATOR_NUMERIC()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_OPERATOR_NUMERIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_ServiceStateTable::VOICE_REG_STATE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$ServiceStateTable",
			"VOICE_REG_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Telephony_ServiceStateTable::Telephony_ServiceStateTable(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	android::net::Uri Telephony_ServiceStateTable::getUriForSubscriptionIdAndField(jint arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$ServiceStateTable",
			"getUriForSubscriptionIdAndField",
			"(ILjava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
} // namespace android::provider

