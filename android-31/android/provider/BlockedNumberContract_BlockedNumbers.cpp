#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./BlockedNumberContract_BlockedNumbers.hpp"

namespace android::provider
{
	// Fields
	JString BlockedNumberContract_BlockedNumbers::COLUMN_E164_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_E164_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString BlockedNumberContract_BlockedNumbers::COLUMN_ID()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_ID",
			"Ljava/lang/String;"
		);
	}
	JString BlockedNumberContract_BlockedNumbers::COLUMN_ORIGINAL_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_ORIGINAL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString BlockedNumberContract_BlockedNumbers::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString BlockedNumberContract_BlockedNumbers::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri BlockedNumberContract_BlockedNumbers::CONTENT_URI()
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

