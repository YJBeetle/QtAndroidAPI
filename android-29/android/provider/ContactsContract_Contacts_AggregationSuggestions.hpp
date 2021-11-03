#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_Contacts_AggregationSuggestions : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_AggregationSuggestions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_AggregationSuggestions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

