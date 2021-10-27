#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_Contacts_AggregationSuggestions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		ContactsContract_Contacts_AggregationSuggestions(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Contacts_AggregationSuggestions() = default;
		
		// Methods
	};
} // namespace android::provider

