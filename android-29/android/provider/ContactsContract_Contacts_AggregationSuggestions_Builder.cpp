#include "../net/Uri.hpp"
#include "./ContactsContract_Contacts_AggregationSuggestions_Builder.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	ContactsContract_Contacts_AggregationSuggestions_Builder::ContactsContract_Contacts_AggregationSuggestions_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContactsContract_Contacts_AggregationSuggestions_Builder::ContactsContract_Contacts_AggregationSuggestions_Builder()
		: __JniBaseClass(
			"android.provider.ContactsContract$Contacts$AggregationSuggestions$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::addNameParameter(jstring arg0)
	{
		return callObjectMethod(
			"addNameParameter",
			"(Ljava/lang/String;)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::setContactId(jlong arg0)
	{
		return callObjectMethod(
			"setContactId",
			"(J)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::setLimit(jint arg0)
	{
		return callObjectMethod(
			"setLimit",
			"(I)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
} // namespace android::provider
