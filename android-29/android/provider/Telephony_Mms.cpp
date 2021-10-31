#include "../net/Uri.hpp"
#include "./Telephony_Mms.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Mms::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Mms::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Telephony_Mms::REPORT_REQUEST_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms",
			"REPORT_REQUEST_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Telephony_Mms::REPORT_STATUS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms",
			"REPORT_STATUS_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	Telephony_Mms::Telephony_Mms(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

