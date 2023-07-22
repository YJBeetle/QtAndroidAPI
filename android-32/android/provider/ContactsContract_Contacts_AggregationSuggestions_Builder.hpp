#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_Contacts_AggregationSuggestions_Builder.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline ContactsContract_Contacts_AggregationSuggestions_Builder::ContactsContract_Contacts_AggregationSuggestions_Builder()
		: JObject(
			"android.provider.ContactsContract$Contacts$AggregationSuggestions$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder ContactsContract_Contacts_AggregationSuggestions_Builder::addNameParameter(JString arg0) const
	{
		return callObjectMethod(
			"addNameParameter",
			"(Ljava/lang/String;)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri ContactsContract_Contacts_AggregationSuggestions_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/Uri;"
		);
	}
	inline android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder ContactsContract_Contacts_AggregationSuggestions_Builder::setContactId(jlong arg0) const
	{
		return callObjectMethod(
			"setContactId",
			"(J)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	inline android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder ContactsContract_Contacts_AggregationSuggestions_Builder::setLimit(jint arg0) const
	{
		return callObjectMethod(
			"setLimit",
			"(I)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
