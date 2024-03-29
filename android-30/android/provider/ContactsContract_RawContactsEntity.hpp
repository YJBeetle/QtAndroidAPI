#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_RawContactsEntity.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_RawContactsEntity::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_RawContactsEntity::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_RawContactsEntity::DATA_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"DATA_ID",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_RawContactsEntity::PROFILE_CONTENT_URI()
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
