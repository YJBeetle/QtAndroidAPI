#include "./ContactsContract_Contacts_AggregationSuggestions.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Contacts_AggregationSuggestions::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Contacts$AggregationSuggestions",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ContactsContract_Contacts_AggregationSuggestions::ContactsContract_Contacts_AggregationSuggestions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

