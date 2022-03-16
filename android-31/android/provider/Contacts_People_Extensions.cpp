#include "../../JString.hpp"
#include "./Contacts_People_Extensions.hpp"

namespace android::provider
{
	// Fields
	JString Contacts_People_Extensions::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_People_Extensions::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_People_Extensions::PERSON_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Extensions",
			"PERSON_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

