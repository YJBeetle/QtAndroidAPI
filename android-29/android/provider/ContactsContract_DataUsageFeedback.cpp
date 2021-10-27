#include "../net/Uri.hpp"
#include "./ContactsContract_DataUsageFeedback.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_DataUsageFeedback::DELETE_USAGE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"DELETE_USAGE_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_DataUsageFeedback::FEEDBACK_URI()
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
	
	ContactsContract_DataUsageFeedback::ContactsContract_DataUsageFeedback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContactsContract_DataUsageFeedback::ContactsContract_DataUsageFeedback()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$DataUsageFeedback",
			"()V"
		);
	}
	
	// Methods
} // namespace android::provider

