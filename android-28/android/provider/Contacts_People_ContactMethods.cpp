#include "./Contacts_People_ContactMethods.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_People_ContactMethods::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$ContactMethods",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_People_ContactMethods::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$ContactMethods",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Contacts_People_ContactMethods::Contacts_People_ContactMethods(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

