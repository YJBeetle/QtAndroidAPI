#include "../net/Uri.hpp"
#include "./Contacts_Photos.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_Photos::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Contacts_Photos::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Photos::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Contacts_Photos::Contacts_Photos(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

