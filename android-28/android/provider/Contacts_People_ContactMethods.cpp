#include "../../JString.hpp"
#include "./Contacts_People_ContactMethods.hpp"

namespace android::provider
{
	// Fields
	JString Contacts_People_ContactMethods::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$ContactMethods",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_People_ContactMethods::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$ContactMethods",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Contacts_People_ContactMethods::Contacts_People_ContactMethods(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

