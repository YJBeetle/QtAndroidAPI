#include "../../JString.hpp"
#include "./ContactsContract_Contacts_AggregationSuggestions.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_Contacts_AggregationSuggestions::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts$AggregationSuggestions",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

