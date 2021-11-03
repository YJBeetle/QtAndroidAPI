#include "../net/Uri.hpp"
#include "./UserDictionary.hpp"

namespace android::provider
{
	// Fields
	jstring UserDictionary::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri UserDictionary::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	UserDictionary::UserDictionary(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UserDictionary::UserDictionary()
		: JObject(
			"android.provider.UserDictionary",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

