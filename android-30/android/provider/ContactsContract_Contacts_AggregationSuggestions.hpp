#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_Contacts_AggregationSuggestions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_AggregationSuggestions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_AggregationSuggestions(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

