#include "../net/Uri.hpp"
#include "./ContactsContract_Contacts_AggregationSuggestions_Builder.hpp"

namespace android::provider
{
	// Fields
	
	ContactsContract_Contacts_AggregationSuggestions_Builder::ContactsContract_Contacts_AggregationSuggestions_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContactsContract_Contacts_AggregationSuggestions_Builder::ContactsContract_Contacts_AggregationSuggestions_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Contacts$AggregationSuggestions$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::addNameParameter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addNameParameter",
			"(Ljava/lang/String;)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::setContactId(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setContactId",
			"(J)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::setLimit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setLimit",
			"(I)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
} // namespace android::provider

