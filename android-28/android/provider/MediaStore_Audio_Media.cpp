#include "../net/Uri.hpp"
#include "./MediaStore_Audio_Media.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Audio_Media::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Media::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Media::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri MediaStore_Audio_Media::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring MediaStore_Audio_Media::EXTRA_MAX_BYTES()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"EXTRA_MAX_BYTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri MediaStore_Audio_Media::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring MediaStore_Audio_Media::RECORD_SOUND_ACTION()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"RECORD_SOUND_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	MediaStore_Audio_Media::MediaStore_Audio_Media(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Audio_Media::MediaStore_Audio_Media()
		: __JniBaseClass(
			"android.provider.MediaStore$Audio$Media",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Audio_Media::getContentUri(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri MediaStore_Audio_Media::getContentUriForPath(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUriForPath",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace android::provider

