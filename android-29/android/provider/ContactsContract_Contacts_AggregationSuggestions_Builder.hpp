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
		
		ContactsContract_Contacts_AggregationSuggestions_Builder(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Contacts_AggregationSuggestions_Builder();
		
		// Methods
		QAndroidJniObject addNameParameter(jstring arg0);
		QAndroidJniObject build();
		QAndroidJniObject setContactId(jlong arg0);
		QAndroidJniObject setLimit(jint arg0);
	};
} // namespace android::provider

