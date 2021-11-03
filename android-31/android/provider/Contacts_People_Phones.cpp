#include "../../JString.hpp"
#include "./Contacts_People_Phones.hpp"

namespace android::provider
{
	// Fields
	JString Contacts_People_Phones::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Phones",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_People_Phones::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Phones",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Contacts_People_Phones::Contacts_People_Phones(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

