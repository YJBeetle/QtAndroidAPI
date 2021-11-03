#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Video_Media.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Video_Media::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Video_Media::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
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
	
	// QAndroidJniObject forward
	MediaStore_Video_Media::MediaStore_Video_Media(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Video_Media::MediaStore_Video_Media()
		: JObject(
			"android.provider.MediaStore$Video$Media",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Video_Media::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::net::Uri MediaStore_Video_Media::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video$Media",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

