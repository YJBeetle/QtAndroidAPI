#include "../net/Uri.hpp"
#include "./Telephony_Mms_Part.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_Mms_Part::CHARSET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CHARSET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_DISPOSITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_DISPOSITION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Telephony_Mms_Part::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Mms_Part::CT_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_START",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::FILENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"FILENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::MSG_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"MSG_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::SEQ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"SEQ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Telephony_Mms_Part::Telephony_Mms_Part(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

