#include "../net/Uri.hpp"
#include "./ContactsContract_AggregationExceptions.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_AggregationExceptions::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_AggregationExceptions::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_AggregationExceptions::RAW_CONTACT_ID1()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"RAW_CONTACT_ID1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::RAW_CONTACT_ID2()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"RAW_CONTACT_ID2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_AggregationExceptions::TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_AggregationExceptions::TYPE_AUTOMATIC()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_AUTOMATIC"
		);
	}
	jint ContactsContract_AggregationExceptions::TYPE_KEEP_SEPARATE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_KEEP_SEPARATE"
		);
	}
	jint ContactsContract_AggregationExceptions::TYPE_KEEP_TOGETHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_KEEP_TOGETHER"
		);
	}
	
	// QJniObject forward
	ContactsContract_AggregationExceptions::ContactsContract_AggregationExceptions(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

