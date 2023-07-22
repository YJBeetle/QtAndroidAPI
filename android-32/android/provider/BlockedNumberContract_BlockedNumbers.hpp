#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./BlockedNumberContract_BlockedNumbers.def.hpp"

namespace android::provider
{
	// Fields
	inline JString BlockedNumberContract_BlockedNumbers::COLUMN_E164_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_E164_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString BlockedNumberContract_BlockedNumbers::COLUMN_ID()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString BlockedNumberContract_BlockedNumbers::COLUMN_ORIGINAL_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_ORIGINAL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString BlockedNumberContract_BlockedNumbers::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString BlockedNumberContract_BlockedNumbers::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri BlockedNumberContract_BlockedNumbers::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_URI",
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
