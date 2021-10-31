#include "../net/Uri.hpp"
#include "./ContactsContract_DataUsageFeedback.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_DataUsageFeedback::DELETE_USAGE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"DELETE_USAGE_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_DataUsageFeedback::FEEDBACK_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"FEEDBACK_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_DataUsageFeedback::USAGE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_DataUsageFeedback::USAGE_TYPE_CALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_DataUsageFeedback::USAGE_TYPE_LONG_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_LONG_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_DataUsageFeedback::USAGE_TYPE_SHORT_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_SHORT_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ContactsContract_DataUsageFeedback::ContactsContract_DataUsageFeedback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContactsContract_DataUsageFeedback::ContactsContract_DataUsageFeedback()
		: __JniBaseClass(
			"android.provider.ContactsContract$DataUsageFeedback",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

