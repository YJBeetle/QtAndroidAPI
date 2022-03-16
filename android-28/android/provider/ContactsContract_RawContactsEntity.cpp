#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_RawContactsEntity.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_RawContactsEntity::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_RawContactsEntity::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_RawContactsEntity::DATA_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"DATA_ID",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_RawContactsEntity::PROFILE_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"PROFILE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

