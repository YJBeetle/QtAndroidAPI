#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_DataUsageFeedback.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_DataUsageFeedback::DELETE_USAGE_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"DELETE_USAGE_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_DataUsageFeedback::FEEDBACK_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"FEEDBACK_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_DataUsageFeedback::USAGE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_DataUsageFeedback::USAGE_TYPE_CALL()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_CALL",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_DataUsageFeedback::USAGE_TYPE_LONG_TEXT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_LONG_TEXT",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_DataUsageFeedback::USAGE_TYPE_SHORT_TEXT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$DataUsageFeedback",
			"USAGE_TYPE_SHORT_TEXT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	ContactsContract_DataUsageFeedback::ContactsContract_DataUsageFeedback()
		: JObject(
			"android.provider.ContactsContract$DataUsageFeedback",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

