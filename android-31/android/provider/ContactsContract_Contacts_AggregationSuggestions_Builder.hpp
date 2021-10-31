#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Contacts_AggregationSuggestions_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_AggregationSuggestions_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_AggregationSuggestions_Builder(QAndroidJniObject obj);
		
		// Constructors
		ContactsContract_Contacts_AggregationSuggestions_Builder();
		
		// Methods
		android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder addNameParameter(jstring arg0);
		android::net::Uri build();
		android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder setContactId(jlong arg0);
		android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder setLimit(jint arg0);
	};
} // namespace android::provider

