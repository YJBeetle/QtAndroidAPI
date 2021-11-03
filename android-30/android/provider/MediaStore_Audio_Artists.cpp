#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Artists.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Audio_Artists::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Artists::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Artists::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Audio_Artists::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri MediaStore_Audio_Artists::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	MediaStore_Audio_Artists::MediaStore_Audio_Artists(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Audio_Artists::MediaStore_Audio_Artists()
		: JObject(
			"android.provider.MediaStore$Audio$Artists",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Audio_Artists::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Artists",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

