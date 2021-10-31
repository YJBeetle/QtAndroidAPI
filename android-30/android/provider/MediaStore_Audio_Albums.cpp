#include "../net/Uri.hpp"
#include "./MediaStore_Audio_Albums.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Audio_Albums::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Albums::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Albums::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri MediaStore_Audio_Albums::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri MediaStore_Audio_Albums::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	MediaStore_Audio_Albums::MediaStore_Audio_Albums(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Audio_Albums::MediaStore_Audio_Albums()
		: __JniBaseClass(
			"android.provider.MediaStore$Audio$Albums",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Audio_Albums::getContentUri(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Albums",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace android::provider

