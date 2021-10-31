#include "../net/Uri.hpp"
#include "./MediaStore_Video_Media.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Video_Media::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Video_Media::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri MediaStore_Video_Media::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri MediaStore_Video_Media::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	MediaStore_Video_Media::MediaStore_Video_Media(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Video_Media::MediaStore_Video_Media()
		: __JniBaseClass(
			"android.provider.MediaStore$Video$Media",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Video_Media::getContentUri(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri MediaStore_Video_Media::getContentUri(jstring arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video$Media",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
} // namespace android::provider

