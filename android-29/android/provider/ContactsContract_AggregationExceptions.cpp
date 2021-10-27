#include "../net/Uri.hpp"
#include "./ContactsContract_AggregationExceptions.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_AggregationExceptions::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_AggregationExceptions::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_AggregationExceptions::RAW_CONTACT_ID1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"RAW_CONTACT_ID1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::RAW_CONTACT_ID2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"RAW_CONTACT_ID2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_AggregationExceptions::TYPE_AUTOMATIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_AUTOMATIC"
		);
	}
	jint ContactsContract_AggregationExceptions::TYPE_KEEP_SEPARATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_KEEP_SEPARATE"
		);
	}
	jint ContactsContract_AggregationExceptions::TYPE_KEEP_TOGETHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_KEEP_TOGETHER"
		);
	}
	
	ContactsContract_AggregationExceptions::ContactsContract_AggregationExceptions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

