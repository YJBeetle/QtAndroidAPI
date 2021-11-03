#include "./Telephony_Mms_Addr.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_Mms_Addr::ADDRESS()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Addr::CHARSET()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"CHARSET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Addr::CONTACT_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"CONTACT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Addr::MSG_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"MSG_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Addr::TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Telephony_Mms_Addr::Telephony_Mms_Addr(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

