#include "../../JString.hpp"
#include "./ContactsContract_SearchSnippets.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_SearchSnippets::DEFERRED_SNIPPETING_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SearchSnippets",
			"DEFERRED_SNIPPETING_KEY",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_SearchSnippets::SNIPPET()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SearchSnippets",
			"SNIPPET",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_SearchSnippets::ContactsContract_SearchSnippets(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContactsContract_SearchSnippets::ContactsContract_SearchSnippets()
		: JObject(
			"android.provider.ContactsContract$SearchSnippets",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

