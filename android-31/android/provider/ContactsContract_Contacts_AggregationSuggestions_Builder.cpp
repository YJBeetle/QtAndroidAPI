#include "../net/Uri.hpp"
#include "./ContactsContract_Contacts_AggregationSuggestions_Builder.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	ContactsContract_Contacts_AggregationSuggestions_Builder::ContactsContract_Contacts_AggregationSuggestions_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContactsContract_Contacts_AggregationSuggestions_Builder::ContactsContract_Contacts_AggregationSuggestions_Builder()
		: JObject(
			"android.provider.ContactsContract$Contacts$AggregationSuggestions$Builder",
			"()V"
		) {}
	
	// Methods
	android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder ContactsContract_Contacts_AggregationSuggestions_Builder::addNameParameter(jstring arg0)
	{
		return callObjectMethod(
			"addNameParameter",
			"(Ljava/lang/String;)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	android::net::Uri ContactsContract_Contacts_AggregationSuggestions_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/Uri;"
		);
	}
	android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder ContactsContract_Contacts_AggregationSuggestions_Builder::setContactId(jlong arg0)
	{
		return callObjectMethod(
			"setContactId",
			"(J)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder ContactsContract_Contacts_AggregationSuggestions_Builder::setLimit(jint arg0)
	{
		return callObjectMethod(
			"setLimit",
			"(I)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
} // namespace android::provider

