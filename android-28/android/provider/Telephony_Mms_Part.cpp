#include "./Telephony_Mms_Part.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_Mms_Part::CHARSET()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CHARSET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_DISPOSITION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_DISPOSITION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CT_START()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_START",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::FILENAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"FILENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::MSG_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"MSG_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::SEQ()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"SEQ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::TEXT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::_DATA()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Telephony_Mms_Part::Telephony_Mms_Part(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

