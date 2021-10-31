#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./MediaStore.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore::ACTION_IMAGE_CAPTURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::ACTION_IMAGE_CAPTURE_SECURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE_SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::ACTION_REVIEW()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_REVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::ACTION_REVIEW_SECURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_REVIEW_SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::ACTION_VIDEO_CAPTURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_VIDEO_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri MediaStore::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring MediaStore::EXTRA_BRIGHTNESS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_BRIGHTNESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_DURATION_LIMIT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_DURATION_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_FINISH_ON_COMPLETION()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FINISH_ON_COMPLETION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_FULL_SCREEN()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FULL_SCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_ALBUM()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ALBUM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_ARTIST()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_FOCUS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_FOCUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_GENRE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_GENRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_PLAYLIST()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_PLAYLIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_RADIO_CHANNEL()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_RADIO_CHANNEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_TITLE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_OUTPUT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_OUTPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_SCREEN_ORIENTATION()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SCREEN_ORIENTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_SHOW_ACTION_ICONS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SHOW_ACTION_ICONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_SIZE_LIMIT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SIZE_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_VIDEO_QUALITY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_VIDEO_QUALITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_MEDIA_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_MUSIC_PLAYER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MUSIC_PLAYER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_TEXT_OPEN_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_TEXT_OPEN_FROM_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_VIDEO_CAMERA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::MEDIA_IGNORE_FILENAME()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_IGNORE_FILENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::MEDIA_SCANNER_VOLUME()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_SCANNER_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::UNKNOWN_STRING()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"UNKNOWN_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::VOLUME_EXTERNAL()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_EXTERNAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::VOLUME_EXTERNAL_PRIMARY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_EXTERNAL_PRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::VOLUME_INTERNAL()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_INTERNAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	MediaStore::MediaStore(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore::MediaStore()
		: __JniBaseClass(
			"android.provider.MediaStore",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore::getDocumentUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass MediaStore::getExternalVolumeNames(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getExternalVolumeNames",
			"(Landroid/content/Context;)Ljava/util/Set;",
			arg0.object()
		);
	}
	android::net::Uri MediaStore::getMediaScannerUri()
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaScannerUri",
			"()Landroid/net/Uri;"
		);
	}
	android::net::Uri MediaStore::getMediaUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	jstring MediaStore::getVersion(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring MediaStore::getVersion(android::content::Context arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	jstring MediaStore::getVolumeName(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVolumeName",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	android::net::Uri MediaStore::setIncludePending(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"setIncludePending",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	android::net::Uri MediaStore::setRequireOriginal(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"setRequireOriginal",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
} // namespace android::provider

