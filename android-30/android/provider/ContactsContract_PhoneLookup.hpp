#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_PhoneLookup.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri ContactsContract_PhoneLookup::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri ContactsContract_PhoneLookup::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_PhoneLookup::QUERY_PARAMETER_SIP_ADDRESS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"QUERY_PARAMETER_SIP_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

