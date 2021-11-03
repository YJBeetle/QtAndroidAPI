#include "../net/Uri.hpp"
#include "./SimPhonebookContract.hpp"

namespace android::provider
{
	// Fields
	jstring SimPhonebookContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri SimPhonebookContract::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	SimPhonebookContract::SimPhonebookContract(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

