#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./SimPhonebookContract.def.hpp"

namespace android::provider
{
	// Fields
	inline JString SimPhonebookContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri SimPhonebookContract::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

