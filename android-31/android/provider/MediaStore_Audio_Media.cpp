#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Media.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Audio_Media::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Media::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Media::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Audio_Media::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString MediaStore_Audio_Media::EXTRA_MAX_BYTES()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"EXTRA_MAX_BYTES",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Audio_Media::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString MediaStore_Audio_Media::RECORD_SOUND_ACTION()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"RECORD_SOUND_ACTION",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	MediaStore_Audio_Media::MediaStore_Audio_Media(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Audio_Media::MediaStore_Audio_Media()
		: JObject(
			"android.provider.MediaStore$Audio$Media",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Audio_Media::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::net::Uri MediaStore_Audio_Media::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::net::Uri MediaStore_Audio_Media::getContentUriForPath(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUriForPath",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

