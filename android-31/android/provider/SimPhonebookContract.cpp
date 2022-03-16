#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./SimPhonebookContract.hpp"

namespace android::provider
{
	// Fields
	JString SimPhonebookContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri SimPhonebookContract::AUTHORITY_URI()
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

