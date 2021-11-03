#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./UserDictionary.hpp"

namespace android::provider
{
	// Fields
	JString UserDictionary::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri UserDictionary::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	UserDictionary::UserDictionary(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	UserDictionary::UserDictionary()
		: JObject(
			"android.provider.UserDictionary",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

