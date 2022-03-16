#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_ProviderStatus.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_ProviderStatus::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_ProviderStatus::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_ProviderStatus::DATABASE_CREATION_TIMESTAMP()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"DATABASE_CREATION_TIMESTAMP",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_ProviderStatus::STATUS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS",
			"Ljava/lang/String;"
		);
	}
	jint ContactsContract_ProviderStatus::STATUS_BUSY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_BUSY"
		);
	}
	jint ContactsContract_ProviderStatus::STATUS_EMPTY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_EMPTY"
		);
	}
	jint ContactsContract_ProviderStatus::STATUS_NORMAL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_NORMAL"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

