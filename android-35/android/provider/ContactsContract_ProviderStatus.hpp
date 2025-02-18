#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_ProviderStatus.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_ProviderStatus::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_ProviderStatus::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_ProviderStatus::DATABASE_CREATION_TIMESTAMP()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"DATABASE_CREATION_TIMESTAMP",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_ProviderStatus::STATUS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_ProviderStatus::STATUS_BUSY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_BUSY"
		);
	}
	inline jint ContactsContract_ProviderStatus::STATUS_EMPTY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_EMPTY"
		);
	}
	inline jint ContactsContract_ProviderStatus::STATUS_NORMAL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$ProviderStatus",
			"STATUS_NORMAL"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
