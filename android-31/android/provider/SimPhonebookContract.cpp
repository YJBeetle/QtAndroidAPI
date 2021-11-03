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
	
	// QJniObject forward
	SimPhonebookContract::SimPhonebookContract(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

