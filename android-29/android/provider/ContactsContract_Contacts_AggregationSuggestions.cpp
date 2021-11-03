#include "./ContactsContract_Contacts_AggregationSuggestions.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Contacts_AggregationSuggestions::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$AggregationSuggestions",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ContactsContract_Contacts_AggregationSuggestions::ContactsContract_Contacts_AggregationSuggestions(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

